#include "CreateGameFolders.h"
#include "FileSystem.h"
#include "launch/LaunchTask.h"
#include "minecraft/MinecraftInstance.h"

#include <QFile>
#include <QTextStream>

CreateGameFolders::CreateGameFolders(LaunchTask* parent) : LaunchStep(parent) {}

void CreateGameFolders::executeTask()
{
    auto instance = m_parent->instance();

    if (!FS::ensureFolderPathExists(instance->gameRoot())) {
        emit logLine("Couldn't create the main game folder", MessageLevel::Error);
        emitFailed(tr("Couldn't create the main game folder"));
        return;
    }

    // HACK: this is a workaround for MCL-3732 - 'server-resource-packs' folder is created.
    if (!FS::ensureFolderPathExists(FS::PathCombine(instance->gameRoot(), "server-resource-packs"))) {
        emit logLine("Couldn't create the 'server-resource-packs' folder", MessageLevel::Error);
    }

    // Inject telemetryOptOut:true into options.txt if not already present
    QString optionsPath = FS::PathCombine(instance->gameRoot(), "options.txt");
    QFile optionsFile(optionsPath);
    bool hasTelemetryOpt = false;
    QStringList lines;
    if (optionsFile.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&optionsFile);
        while (!in.atEnd()) {
            QString line = in.readLine();
            lines.append(line);
            if (line.startsWith("telemetryOptOut:"))
                hasTelemetryOpt = true;
        }
        optionsFile.close();
    }
    if (!hasTelemetryOpt) {
        lines.append("telemetryOptOut:true");
        if (optionsFile.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Truncate)) {
            QTextStream out(&optionsFile);
            for (const QString& l : lines)
                out << l << "\n";
            optionsFile.close();
        }
    }

    emitSucceeded();
}
