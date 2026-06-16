/********************************************************************************
** Form generated from reading UI file 'VersionPage.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VERSIONPAGE_H
#define UI_VERSIONPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ui/widgets/InfoFrame.h"
#include "ui/widgets/ModListView.h"
#include "ui/widgets/WideBar.h"

QT_BEGIN_NAMESPACE

class Ui_VersionPage
{
public:
    QAction *actionChange_version;
    QAction *actionMove_up;
    QAction *actionMove_down;
    QAction *actionRemove;
    QAction *actionCustomize;
    QAction *actionEdit;
    QAction *actionRevert;
    QAction *actionInstall_Loader;
    QAction *actionAdd_to_Minecraft_jar;
    QAction *actionReplace_Minecraft_jar;
    QAction *actionAdd_Agents;
    QAction *actionAdd_Empty;
    QAction *actionReload;
    QAction *actionDownload_All;
    QAction *actionMinecraftFolder;
    QAction *actionLibrariesFolder;
    QAction *actionImport_Components;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    ModListView *packageView;
    QLineEdit *filterEdit;
    InfoFrame *frame;
    WideBar *toolBar;

    void setupUi(QMainWindow *VersionPage)
    {
        if (VersionPage->objectName().isEmpty())
            VersionPage->setObjectName("VersionPage");
        VersionPage->resize(961, 1091);
        actionChange_version = new QAction(VersionPage);
        actionChange_version->setObjectName("actionChange_version");
        actionMove_up = new QAction(VersionPage);
        actionMove_up->setObjectName("actionMove_up");
        actionMove_down = new QAction(VersionPage);
        actionMove_down->setObjectName("actionMove_down");
        actionRemove = new QAction(VersionPage);
        actionRemove->setObjectName("actionRemove");
        actionCustomize = new QAction(VersionPage);
        actionCustomize->setObjectName("actionCustomize");
        actionEdit = new QAction(VersionPage);
        actionEdit->setObjectName("actionEdit");
        actionRevert = new QAction(VersionPage);
        actionRevert->setObjectName("actionRevert");
        actionInstall_Loader = new QAction(VersionPage);
        actionInstall_Loader->setObjectName("actionInstall_Loader");
        actionAdd_to_Minecraft_jar = new QAction(VersionPage);
        actionAdd_to_Minecraft_jar->setObjectName("actionAdd_to_Minecraft_jar");
        actionReplace_Minecraft_jar = new QAction(VersionPage);
        actionReplace_Minecraft_jar->setObjectName("actionReplace_Minecraft_jar");
        actionAdd_Agents = new QAction(VersionPage);
        actionAdd_Agents->setObjectName("actionAdd_Agents");
        actionAdd_Empty = new QAction(VersionPage);
        actionAdd_Empty->setObjectName("actionAdd_Empty");
        actionReload = new QAction(VersionPage);
        actionReload->setObjectName("actionReload");
        actionDownload_All = new QAction(VersionPage);
        actionDownload_All->setObjectName("actionDownload_All");
        actionMinecraftFolder = new QAction(VersionPage);
        actionMinecraftFolder->setObjectName("actionMinecraftFolder");
        actionLibrariesFolder = new QAction(VersionPage);
        actionLibrariesFolder->setObjectName("actionLibrariesFolder");
        actionImport_Components = new QAction(VersionPage);
        actionImport_Components->setObjectName("actionImport_Components");
        centralwidget = new QWidget(VersionPage);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        packageView = new ModListView(centralwidget);
        packageView->setObjectName("packageView");
        packageView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        packageView->setSortingEnabled(false);
        packageView->setHeaderHidden(false);
        packageView->header()->setVisible(true);

        verticalLayout->addWidget(packageView);

        filterEdit = new QLineEdit(centralwidget);
        filterEdit->setObjectName("filterEdit");

        verticalLayout->addWidget(filterEdit);

        frame = new InfoFrame(centralwidget);
        frame->setObjectName("frame");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(frame);


        horizontalLayout->addLayout(verticalLayout);

        VersionPage->setCentralWidget(centralwidget);
        toolBar = new WideBar(VersionPage);
        toolBar->setObjectName("toolBar");
        toolBar->setAllowedAreas(Qt::LeftToolBarArea|Qt::RightToolBarArea);
        toolBar->setToolButtonStyle(Qt::ToolButtonTextOnly);
        toolBar->setFloatable(false);
        VersionPage->addToolBar(Qt::ToolBarArea::RightToolBarArea, toolBar);

        toolBar->addAction(actionChange_version);
        toolBar->addAction(actionMove_up);
        toolBar->addAction(actionMove_down);
        toolBar->addAction(actionRemove);
        toolBar->addSeparator();
        toolBar->addAction(actionCustomize);
        toolBar->addAction(actionEdit);
        toolBar->addAction(actionRevert);
        toolBar->addSeparator();
        toolBar->addAction(actionInstall_Loader);
        toolBar->addAction(actionAdd_to_Minecraft_jar);
        toolBar->addAction(actionReplace_Minecraft_jar);
        toolBar->addAction(actionAdd_Agents);
        toolBar->addAction(actionAdd_Empty);
        toolBar->addAction(actionImport_Components);
        toolBar->addSeparator();
        toolBar->addAction(actionMinecraftFolder);
        toolBar->addAction(actionLibrariesFolder);
        toolBar->addAction(actionReload);
        toolBar->addAction(actionDownload_All);

        retranslateUi(VersionPage);

        QMetaObject::connectSlotsByName(VersionPage);
    } // setupUi

    void retranslateUi(QMainWindow *VersionPage)
    {
        actionChange_version->setText(QCoreApplication::translate("VersionPage", "Change Version", nullptr));
#if QT_CONFIG(tooltip)
        actionChange_version->setToolTip(QCoreApplication::translate("VersionPage", "Change version of the selected component.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionMove_up->setText(QCoreApplication::translate("VersionPage", "Move Up", nullptr));
#if QT_CONFIG(tooltip)
        actionMove_up->setToolTip(QCoreApplication::translate("VersionPage", "Make the selected component apply sooner.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionMove_down->setText(QCoreApplication::translate("VersionPage", "Move Down", nullptr));
#if QT_CONFIG(tooltip)
        actionMove_down->setToolTip(QCoreApplication::translate("VersionPage", "Make the selected component apply later.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionRemove->setText(QCoreApplication::translate("VersionPage", "Remove", nullptr));
#if QT_CONFIG(tooltip)
        actionRemove->setToolTip(QCoreApplication::translate("VersionPage", "Remove selected component from the instance.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionCustomize->setText(QCoreApplication::translate("VersionPage", "Customize", nullptr));
#if QT_CONFIG(tooltip)
        actionCustomize->setToolTip(QCoreApplication::translate("VersionPage", "Customize selected component.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionEdit->setText(QCoreApplication::translate("VersionPage", "Edit", nullptr));
#if QT_CONFIG(tooltip)
        actionEdit->setToolTip(QCoreApplication::translate("VersionPage", "Edit selected component.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionRevert->setText(QCoreApplication::translate("VersionPage", "Revert", nullptr));
#if QT_CONFIG(tooltip)
        actionRevert->setToolTip(QCoreApplication::translate("VersionPage", "Revert the selected component to default.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionInstall_Loader->setText(QCoreApplication::translate("VersionPage", "Install Loader", nullptr));
#if QT_CONFIG(tooltip)
        actionInstall_Loader->setToolTip(QCoreApplication::translate("VersionPage", "Install a mod loader.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionAdd_to_Minecraft_jar->setText(QCoreApplication::translate("VersionPage", "Add to Minecraft.jar", nullptr));
#if QT_CONFIG(tooltip)
        actionAdd_to_Minecraft_jar->setToolTip(QCoreApplication::translate("VersionPage", "Add a mod into the Minecraft jar file.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionReplace_Minecraft_jar->setText(QCoreApplication::translate("VersionPage", "Replace Minecraft.jar", nullptr));
        actionAdd_Agents->setText(QCoreApplication::translate("VersionPage", "Add Agents", nullptr));
#if QT_CONFIG(tooltip)
        actionAdd_Agents->setToolTip(QCoreApplication::translate("VersionPage", "Add Java agents.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionAdd_Empty->setText(QCoreApplication::translate("VersionPage", "Add Empty", nullptr));
#if QT_CONFIG(tooltip)
        actionAdd_Empty->setToolTip(QCoreApplication::translate("VersionPage", "Add an empty custom component.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionReload->setText(QCoreApplication::translate("VersionPage", "Reload", nullptr));
#if QT_CONFIG(tooltip)
        actionReload->setToolTip(QCoreApplication::translate("VersionPage", "Reload all components.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionDownload_All->setText(QCoreApplication::translate("VersionPage", "Download all", nullptr));
#if QT_CONFIG(tooltip)
        actionDownload_All->setToolTip(QCoreApplication::translate("VersionPage", "Download the files needed to launch the instance now.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionMinecraftFolder->setText(QCoreApplication::translate("VersionPage", "Open .minecraft", nullptr));
#if QT_CONFIG(tooltip)
        actionMinecraftFolder->setToolTip(QCoreApplication::translate("VersionPage", "Open the instance's .minecraft folder.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionLibrariesFolder->setText(QCoreApplication::translate("VersionPage", "Open libraries", nullptr));
#if QT_CONFIG(tooltip)
        actionLibrariesFolder->setToolTip(QCoreApplication::translate("VersionPage", "Open the instance's local libraries folder.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionImport_Components->setText(QCoreApplication::translate("VersionPage", "Import Components", nullptr));
#if QT_CONFIG(tooltip)
        actionImport_Components->setToolTip(QCoreApplication::translate("VersionPage", "Import existing component JSON files.", nullptr));
#endif // QT_CONFIG(tooltip)
        filterEdit->setPlaceholderText(QCoreApplication::translate("VersionPage", "Search", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("VersionPage", "Actions", nullptr));
        (void)VersionPage;
    } // retranslateUi

};

namespace Ui {
    class VersionPage: public Ui_VersionPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VERSIONPAGE_H
