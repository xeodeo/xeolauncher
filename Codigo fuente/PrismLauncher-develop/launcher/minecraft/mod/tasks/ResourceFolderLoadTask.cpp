// SPDX-License-Identifier: GPL-3.0-only
/*
 *  Prism Launcher - Minecraft Launcher
 *  Copyright (c) 2022 flowln <flowlnlnln@gmail.com>
 *  Copyright (C) 2022 Sefa Eyeoglu <contact@scrumplex.net>
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, version 3.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 * This file incorporates work covered by the following copyright and
 * permission notice:
 *
 *      Copyright 2013-2021 MultiMC Contributors
 *
 *      Licensed under the Apache License, Version 2.0 (the "License");
 *      you may not use this file except in compliance with the License.
 *      You may obtain a copy of the License at
 *
 *          http://www.apache.org/licenses/LICENSE-2.0
 *
 *      Unless required by applicable law or agreed to in writing, software
 *      distributed under the License is distributed on an "AS IS" BASIS,
 *      WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *      See the License for the specific language governing permissions and
 *      limitations under the License.
 */

#include "ResourceFolderLoadTask.h"

#include "Application.h"
#include "FileSystem.h"
#include "minecraft/mod/MetadataHandler.h"

#include <QThread>
#include <utility>

ResourceFolderLoadTask::ResourceFolderLoadTask(const QDir& resourceDir,
                                               const QDir& indexDir,
                                               bool isIndexed,
                                               bool cleanOrphan,
                                               std::function<Resource*(const QFileInfo&)> createFunction)
    : Task(false)
    , m_resource_dir(resourceDir)
    , m_index_dir(indexDir)
    , m_is_indexed(isIndexed)
    , m_clean_orphan(cleanOrphan)
    , m_create_func(std::move(createFunction))
    , m_result(new Result())
    , m_thread_to_spawn_into(thread())
{}

void ResourceFolderLoadTask::executeTask()
{
    qDebug() << "[DBG] ResourceFolderLoadTask::executeTask start, dir=" << m_resource_dir.absolutePath();
    qDebug() << "[DBG] RFLT step 1: checking thread";
    if (thread() != m_thread_to_spawn_into) {
        connect(this, &Task::finished, this->thread(), &QThread::quit);
    }
    qDebug() << "[DBG] RFLT step 2: m_is_indexed=" << m_is_indexed;
    if (m_is_indexed) {
        // Read metadata first
        qDebug() << "[DBG] RFLT step 3: calling getFromMetadata";
        getFromMetadata();
        qDebug() << "[DBG] RFLT step 4: getFromMetadata done";
    }

    // Read JAR files that don't have metadata
    qDebug() << "[DBG] RFLT step 5: refreshing resource dir";
    m_resource_dir.refresh();
    qDebug() << "[DBG] RFLT step 6: iterating entries";
    for (auto entry : m_resource_dir.entryInfoList()) {
        auto filePath = entry.absoluteFilePath();
        qDebug() << "[DBG] RFLT entry:" << filePath;
        if (auto* app = APPLICATION_DYN; (app != nullptr) && app->checkQSavePath(filePath)) {
            continue;
        }
        auto newFilePath = FS::getUniqueResourceName(filePath);
        if (newFilePath != filePath) {
            FS::move(filePath, newFilePath);
            entry = QFileInfo(newFilePath);
        }

        qDebug() << "[DBG] RFLT calling m_create_func for" << entry.filePath();
        Resource* resource = m_create_func(entry);
        qDebug() << "[DBG] RFLT m_create_func done, resource=" << (resource ? "ok" : "null");

        if (!resource) {
            qCritical() << "[DBG] RFLT m_create_func returned null for" << entry.filePath();
            continue;
        }

        if (resource->enabled()) {
            if (m_result->resources.contains(resource->internalId())) {
                m_result->resources[resource->internalId()]->setStatus(ResourceStatus::Installed);
                // Delete the object we just created, since a valid one is already in the mods list.
                delete resource;
            } else {
                m_result->resources[resource->internalId()].reset(resource);
                m_result->resources[resource->internalId()]->setStatus(ResourceStatus::NoMetadata);
            }
        } else {
            QString choppedId = resource->internalId().chopped(9);
            if (m_result->resources.contains(choppedId)) {
                m_result->resources[resource->internalId()].reset(resource);

                auto metadata = m_result->resources[choppedId]->metadata();
                if (metadata) {
                    resource->setMetadata(*metadata);

                    m_result->resources[resource->internalId()]->setStatus(ResourceStatus::Installed);
                    m_result->resources.remove(choppedId);
                }
            } else {
                m_result->resources[resource->internalId()].reset(resource);
                m_result->resources[resource->internalId()]->setStatus(ResourceStatus::NoMetadata);
            }
        }
    }

    // Remove orphan metadata to prevent issues
    // See https://github.com/PolyMC/PolyMC/issues/996
    if (m_clean_orphan) {
        QMutableMapIterator iter(m_result->resources);
        while (iter.hasNext()) {
            auto resource = iter.next().value();
            if (resource->status() == ResourceStatus::NotInstalled) {
                resource->destroy(m_index_dir, false, false);
                iter.remove();
            }
        }
    }

    for (const auto& mod : m_result->resources) {
        mod->moveToThread(m_thread_to_spawn_into);
    }

    qDebug() << "[DBG] ResourceFolderLoadTask::executeTask done, resources=" << m_result->resources.size();
    if (m_aborted) {
        emit finished();
    } else {
        emitSucceeded();
    }
}

void ResourceFolderLoadTask::getFromMetadata()
{
    qDebug() << "[DBG] getFromMetadata: refreshing index dir" << m_index_dir.absolutePath();
    m_index_dir.refresh();
    qDebug() << "[DBG] getFromMetadata: listing files";
    for (const auto& entry : m_index_dir.entryList(QDir::Files)) {
        if (!entry.endsWith(".pw.toml")) {
            continue;
        }
        qDebug() << "[DBG] getFromMetadata: found" << entry;
        auto metadata = Metadata::get(m_index_dir, entry);

        if (!metadata.isValid()) {
            continue;
        }
        qDebug() << "[DBG] getFromMetadata: calling m_create_func for" << metadata.filename;
        auto* resource = m_create_func(QFileInfo(m_resource_dir.filePath(metadata.filename)));
        qDebug() << "[DBG] getFromMetadata: m_create_func done, resource=" << (resource ? "ok" : "null");
        if (!resource) {
            qCritical() << "[DBG] getFromMetadata: m_create_func returned null for" << metadata.filename;
            continue;
        }
        resource->setMetadata(metadata);
        resource->setStatus(ResourceStatus::NotInstalled);
        m_result->resources[resource->internalId()].reset(resource);
        qDebug() << "[DBG] getFromMetadata: resource added";
    }
    qDebug() << "[DBG] getFromMetadata: done";
}
