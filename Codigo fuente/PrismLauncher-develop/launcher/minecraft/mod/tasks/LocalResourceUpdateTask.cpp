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
 */

#include "LocalResourceUpdateTask.h"

#include "FileSystem.h"
#include "minecraft/mod/MetadataHandler.h"

#ifdef Q_OS_WIN32
#include <windows.h>
#endif

LocalResourceUpdateTask::LocalResourceUpdateTask(QDir index_dir, ModPlatform::IndexedPack& project, ModPlatform::IndexedVersion& version)
    : m_index_dir(index_dir), m_project(project), m_version(version)
{
    // Ensure a '.index' folder exists in the mods folder, and create it if it does not
    if (!FS::ensureFolderPathExists(index_dir.path())) {
        emitFailed(QString("Unable to create index directory at %1!").arg(index_dir.absolutePath()));
        return;
    }

#ifdef Q_OS_WIN32
    std::wstring wpath = index_dir.path().toStdWString();
    if (index_dir.dirName().startsWith('.')) {
        SetFileAttributesW(wpath.c_str(), FILE_ATTRIBUTE_HIDDEN | FILE_ATTRIBUTE_NOT_CONTENT_INDEXED);
    } else {
        // fix shaderpacks folder being hidden by Prism Launcher 10.0.1
        SetFileAttributesW(wpath.c_str(), FILE_ATTRIBUTE_NORMAL);
    }
#endif
}

void LocalResourceUpdateTask::executeTask()
{
    qDebug() << "[DBG] LocalResourceUpdateTask::executeTask: start, name=" << m_project.name << "addonId=" << m_project.addonId;
    setStatus(tr("Updating index for resource:\n%1").arg(m_project.name));

    qDebug() << "[DBG] LocalResourceUpdateTask: calling Metadata::get";
    auto old_metadata = Metadata::get(m_index_dir, m_project.addonId);
    qDebug() << "[DBG] LocalResourceUpdateTask: Metadata::get done, old_metadata.isValid=" << old_metadata.isValid();
    if (old_metadata.isValid()) {
        emit hasOldResource(old_metadata.name, old_metadata.filename);
        if (m_project.slug.isEmpty())
            m_project.slug = old_metadata.slug;
    }

    qDebug() << "[DBG] LocalResourceUpdateTask: calling Metadata::create, slug=" << m_project.slug;
    auto pw_mod = Metadata::create(m_index_dir, m_project, m_version);
    qDebug() << "[DBG] LocalResourceUpdateTask: Metadata::create done, pw_mod.isValid=" << pw_mod.isValid();
    if (pw_mod.isValid()) {
        qDebug() << "[DBG] LocalResourceUpdateTask: calling Metadata::update";
        Metadata::update(m_index_dir, pw_mod);
        qDebug() << "[DBG] LocalResourceUpdateTask: Metadata::update done, emitting succeeded";
        emitSucceeded();
    } else {
        qCritical() << "Tried to update an invalid resource!";
        emitFailed(tr("Invalid metadata"));
    }
    qDebug() << "[DBG] LocalResourceUpdateTask::executeTask: exit";
}

auto LocalResourceUpdateTask::abort() -> bool
{
    emitAborted();
    return true;
}
