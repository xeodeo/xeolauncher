// SPDX-License-Identifier: GPL-3.0-only
/*
 *  XeoLauncher - Minecraft Launcher
 *  Copyright (C) 2024 xeodeo
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, version 3.
 */
#include "GitHubUpdateChecker.h"
#include "BuildConfig.h"
#include "Version.h"

#include <QJsonDocument>
#include <QJsonObject>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>

GitHubUpdateChecker::GitHubUpdateChecker(QNetworkAccessManager* network, QObject* parent)
    : QObject(parent), m_network(network)
{
}

void GitHubUpdateChecker::check()
{
    if (BuildConfig.GITHUB_REPO.isEmpty())
        return;

    QUrl url(QString("https://api.github.com/repos/%1/releases/latest").arg(BuildConfig.GITHUB_REPO));
    QNetworkRequest req(url);
    req.setRawHeader("Accept", "application/vnd.github+json");
    req.setRawHeader("User-Agent", BuildConfig.USER_AGENT.toUtf8());

    auto* reply = m_network->get(req);
    connect(reply, &QNetworkReply::finished, this, [this, reply]() {
        reply->deleteLater();
        if (reply->error() != QNetworkReply::NoError)
            return;

        auto doc = QJsonDocument::fromJson(reply->readAll());
        auto root = doc.object();
        QString tagName = root["tag_name"].toString();
        QString htmlUrl = root["html_url"].toString();

        if (tagName.isEmpty())
            return;

        // Strip leading 'v' prefix (e.g. "v12.1.0" -> "12.1.0")
        QString tagVersion = tagName.startsWith('v') ? tagName.mid(1) : tagName;

        if (Version(tagVersion) > Version(BuildConfig.versionString()))
            emit updateAvailable(tagVersion, htmlUrl);
    });
}
