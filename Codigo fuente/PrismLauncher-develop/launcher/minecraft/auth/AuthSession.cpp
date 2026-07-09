#include "AuthSession.h"
#include <QCryptographicHash>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QStringList>
#include <QUuid>

QString AuthSession::serializeUserProperties()
{
    QJsonObject userAttrs;
    /*
    for (auto key : u.properties.keys())
    {
        auto array = QJsonArray::fromStringList(u.properties.values(key));
        userAttrs.insert(key, array);
    }
    */
    QJsonDocument value(userAttrs);
    return value.toJson(QJsonDocument::Compact);
}

bool AuthSession::MakeOffline(QString offline_playername)
{
    // Generate offline UUID from username (same algorithm as vanilla Minecraft offline)
    auto input = QString("OfflinePlayer:%1").arg(offline_playername).toUtf8();
    QByteArray hash = QCryptographicHash::hash(input, QCryptographicHash::Md5);
    hash[6] = (hash[6] & 0x0f) | 0x30;  // version 3
    hash[8] = (hash[8] & 0x3f) | 0x80;  // RFC 4122 variant
    QString offlineUuid = QUuid::fromRfc4122(hash).toString(QUuid::WithoutBraces);

    // Use a valid session format so Minecraft can join online-mode=false servers
    QString fakeToken = QUuid::createUuid().toString(QUuid::WithoutBraces).remove('-');
    uuid = offlineUuid;
    access_token = fakeToken;
    session = QString("token:%1:%2").arg(fakeToken, offlineUuid);
    player_name = offline_playername;
    user_type = "mojang";
    return true;
}

void AuthSession::MakeDemo(QString name, QString u)
{
    uuid = u;
    session = "-";
    access_token = "0";
    player_name = name;
    launchMode = LaunchMode::Demo;
};
