// SPDX-License-Identifier: GPL-3.0-only
/*
 *  XeoLauncher - Minecraft Launcher
 *  Copyright (C) 2024 xeodeo
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, version 3.
 */
#pragma once
#include <QObject>

class QNetworkAccessManager;

class GitHubUpdateChecker : public QObject {
    Q_OBJECT
public:
    explicit GitHubUpdateChecker(QNetworkAccessManager* network, QObject* parent = nullptr);

    // Performs a non-blocking check against the GitHub releases API.
    void check();

signals:
    void updateAvailable(QString newVersion, QString releaseUrl);

private:
    QNetworkAccessManager* m_network;
};
