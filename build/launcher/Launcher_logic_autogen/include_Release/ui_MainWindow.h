/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "ui/widgets/WideBar.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionMoreNews;
    QAction *actionCAT;
    QAction *actionToggleStatusBar;
    QAction *actionLockToolbars;
    QAction *actionUndoTrashInstance;
    QAction *actionAddInstance;
    QAction *actionCheckUpdate;
    QAction *actionSettings;
    QAction *actionManageSkins;
    QAction *actionManageAccounts;
    QAction *actionLaunchInstance;
    QAction *actionKillInstance;
    QAction *actionRenameInstance;
    QAction *actionChangeInstGroup;
    QAction *actionChangeInstIcon;
    QAction *actionEditInstance;
    QAction *actionViewSelectedInstFolder;
    QAction *actionDeleteInstance;
    QAction *actionCopyInstance;
    QAction *actionExportInstance;
    QAction *actionExportInstanceZip;
    QAction *actionExportInstanceMrPack;
    QAction *actionExportInstanceFlamePack;
    QAction *actionCreateInstanceShortcut;
    QAction *actionNoAccountsAdded;
    QAction *actionNoDefaultAccount;
    QAction *actionCloseWindow;
    QAction *actionViewInstanceFolder;
    QAction *actionViewLauncherRootFolder;
    QAction *actionViewCentralModsFolder;
    QAction *actionViewSkinsFolder;
    QAction *actionViewIconsFolder;
    QAction *actionViewLogsFolder;
    QAction *actionChangeTheme;
    QAction *actionReportBug;
    QAction *actionDISCORD;
    QAction *actionMATRIX;
    QAction *actionREDDIT;
    QAction *actionAbout;
    QAction *actionClearMetadata;
    QAction *actionViewLog;
    QAction *actionAddToPATH;
    QAction *actionFoldersButton;
    QAction *actionHelpButton;
    QAction *actionAccountsButton;
    QAction *actionOpenWiki;
    QAction *actionViewWidgetThemeFolder;
    QAction *actionViewIconThemeFolder;
    QAction *actionViewCatPackFolder;
    QAction *actionViewJavaFolder;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QStatusBar *statusBar;
    QToolBar *mainToolBar;
    QToolBar *newsToolBar;
    WideBar *instanceToolBar;
    QMenuBar *menuBar;
    QMenu *fileMenu;
    QMenu *editMenu;
    QMenu *viewMenu;
    QMenu *foldersMenu;
    QMenu *accountsMenu;
    QMenu *helpMenu;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        actionMoreNews = new QAction(MainWindow);
        actionMoreNews->setObjectName("actionMoreNews");
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("news")));
        actionMoreNews->setIcon(icon);
        actionCAT = new QAction(MainWindow);
        actionCAT->setObjectName("actionCAT");
        actionCAT->setCheckable(true);
        QIcon icon1(QIcon::fromTheme(QString::fromUtf8("cat")));
        actionCAT->setIcon(icon1);
        actionToggleStatusBar = new QAction(MainWindow);
        actionToggleStatusBar->setObjectName("actionToggleStatusBar");
        actionToggleStatusBar->setCheckable(true);
        actionLockToolbars = new QAction(MainWindow);
        actionLockToolbars->setObjectName("actionLockToolbars");
        actionLockToolbars->setCheckable(true);
        actionUndoTrashInstance = new QAction(MainWindow);
        actionUndoTrashInstance->setObjectName("actionUndoTrashInstance");
        actionUndoTrashInstance->setEnabled(false);
        actionAddInstance = new QAction(MainWindow);
        actionAddInstance->setObjectName("actionAddInstance");
        QIcon icon2(QIcon::fromTheme(QString::fromUtf8("new")));
        actionAddInstance->setIcon(icon2);
        actionCheckUpdate = new QAction(MainWindow);
        actionCheckUpdate->setObjectName("actionCheckUpdate");
        QIcon icon3(QIcon::fromTheme(QString::fromUtf8("checkupdate")));
        actionCheckUpdate->setIcon(icon3);
        actionCheckUpdate->setMenuRole(QAction::ApplicationSpecificRole);
        actionSettings = new QAction(MainWindow);
        actionSettings->setObjectName("actionSettings");
        QIcon icon4(QIcon::fromTheme(QString::fromUtf8("settings")));
        actionSettings->setIcon(icon4);
        actionSettings->setMenuRole(QAction::PreferencesRole);
        actionManageSkins = new QAction(MainWindow);
        actionManageSkins->setObjectName("actionManageSkins");
        actionManageSkins->setIcon(icon4);
        actionManageAccounts = new QAction(MainWindow);
        actionManageAccounts->setObjectName("actionManageAccounts");
        QIcon icon5(QIcon::fromTheme(QString::fromUtf8("accounts")));
        actionManageAccounts->setIcon(icon5);
        actionLaunchInstance = new QAction(MainWindow);
        actionLaunchInstance->setObjectName("actionLaunchInstance");
        QIcon icon6(QIcon::fromTheme(QString::fromUtf8("launch")));
        actionLaunchInstance->setIcon(icon6);
        actionKillInstance = new QAction(MainWindow);
        actionKillInstance->setObjectName("actionKillInstance");
        QIcon icon7(QIcon::fromTheme(QString::fromUtf8("status-bad")));
        actionKillInstance->setIcon(icon7);
        actionRenameInstance = new QAction(MainWindow);
        actionRenameInstance->setObjectName("actionRenameInstance");
        QIcon icon8(QIcon::fromTheme(QString::fromUtf8("rename")));
        actionRenameInstance->setIcon(icon8);
        actionChangeInstGroup = new QAction(MainWindow);
        actionChangeInstGroup->setObjectName("actionChangeInstGroup");
        QIcon icon9(QIcon::fromTheme(QString::fromUtf8("tag")));
        actionChangeInstGroup->setIcon(icon9);
        actionChangeInstIcon = new QAction(MainWindow);
        actionChangeInstIcon->setObjectName("actionChangeInstIcon");
        actionEditInstance = new QAction(MainWindow);
        actionEditInstance->setObjectName("actionEditInstance");
        actionEditInstance->setIcon(icon4);
        actionViewSelectedInstFolder = new QAction(MainWindow);
        actionViewSelectedInstFolder->setObjectName("actionViewSelectedInstFolder");
        QIcon icon10(QIcon::fromTheme(QString::fromUtf8("viewfolder")));
        actionViewSelectedInstFolder->setIcon(icon10);
        actionDeleteInstance = new QAction(MainWindow);
        actionDeleteInstance->setObjectName("actionDeleteInstance");
        QIcon icon11(QIcon::fromTheme(QString::fromUtf8("delete")));
        actionDeleteInstance->setIcon(icon11);
        actionDeleteInstance->setAutoRepeat(false);
        actionCopyInstance = new QAction(MainWindow);
        actionCopyInstance->setObjectName("actionCopyInstance");
        QIcon icon12(QIcon::fromTheme(QString::fromUtf8("copy")));
        actionCopyInstance->setIcon(icon12);
        actionExportInstance = new QAction(MainWindow);
        actionExportInstance->setObjectName("actionExportInstance");
        QIcon icon13(QIcon::fromTheme(QString::fromUtf8("export")));
        actionExportInstance->setIcon(icon13);
        actionExportInstanceZip = new QAction(MainWindow);
        actionExportInstanceZip->setObjectName("actionExportInstanceZip");
        QIcon icon14(QIcon::fromTheme(QString::fromUtf8("launcher")));
        actionExportInstanceZip->setIcon(icon14);
        actionExportInstanceMrPack = new QAction(MainWindow);
        actionExportInstanceMrPack->setObjectName("actionExportInstanceMrPack");
        QIcon icon15(QIcon::fromTheme(QString::fromUtf8("modrinth")));
        actionExportInstanceMrPack->setIcon(icon15);
        actionExportInstanceFlamePack = new QAction(MainWindow);
        actionExportInstanceFlamePack->setObjectName("actionExportInstanceFlamePack");
        QIcon icon16(QIcon::fromTheme(QString::fromUtf8("flame")));
        actionExportInstanceFlamePack->setIcon(icon16);
        actionCreateInstanceShortcut = new QAction(MainWindow);
        actionCreateInstanceShortcut->setObjectName("actionCreateInstanceShortcut");
        QIcon icon17(QIcon::fromTheme(QString::fromUtf8("shortcut")));
        actionCreateInstanceShortcut->setIcon(icon17);
        actionNoAccountsAdded = new QAction(MainWindow);
        actionNoAccountsAdded->setObjectName("actionNoAccountsAdded");
        QIcon icon18(QIcon::fromTheme(QString::fromUtf8("noaccount")));
        actionNoAccountsAdded->setIcon(icon18);
        actionNoDefaultAccount = new QAction(MainWindow);
        actionNoDefaultAccount->setObjectName("actionNoDefaultAccount");
        actionNoDefaultAccount->setCheckable(true);
        actionNoDefaultAccount->setIcon(icon18);
        actionCloseWindow = new QAction(MainWindow);
        actionCloseWindow->setObjectName("actionCloseWindow");
        actionCloseWindow->setIcon(icon7);
        actionCloseWindow->setMenuRole(QAction::MenuRole::NoRole);
        actionViewInstanceFolder = new QAction(MainWindow);
        actionViewInstanceFolder->setObjectName("actionViewInstanceFolder");
        actionViewInstanceFolder->setIcon(icon10);
        actionViewLauncherRootFolder = new QAction(MainWindow);
        actionViewLauncherRootFolder->setObjectName("actionViewLauncherRootFolder");
        actionViewLauncherRootFolder->setIcon(icon10);
        actionViewCentralModsFolder = new QAction(MainWindow);
        actionViewCentralModsFolder->setObjectName("actionViewCentralModsFolder");
        QIcon icon19(QIcon::fromTheme(QString::fromUtf8("centralmods")));
        actionViewCentralModsFolder->setIcon(icon19);
        actionViewSkinsFolder = new QAction(MainWindow);
        actionViewSkinsFolder->setObjectName("actionViewSkinsFolder");
        actionViewSkinsFolder->setIcon(icon10);
        actionViewIconsFolder = new QAction(MainWindow);
        actionViewIconsFolder->setObjectName("actionViewIconsFolder");
        actionViewIconsFolder->setIcon(icon10);
        actionViewLogsFolder = new QAction(MainWindow);
        actionViewLogsFolder->setObjectName("actionViewLogsFolder");
        actionViewLogsFolder->setIcon(icon10);
        actionChangeTheme = new QAction(MainWindow);
        actionChangeTheme->setObjectName("actionChangeTheme");
        actionReportBug = new QAction(MainWindow);
        actionReportBug->setObjectName("actionReportBug");
        QIcon icon20(QIcon::fromTheme(QString::fromUtf8("bug")));
        actionReportBug->setIcon(icon20);
        actionDISCORD = new QAction(MainWindow);
        actionDISCORD->setObjectName("actionDISCORD");
        QIcon icon21(QIcon::fromTheme(QString::fromUtf8("discord")));
        actionDISCORD->setIcon(icon21);
        actionMATRIX = new QAction(MainWindow);
        actionMATRIX->setObjectName("actionMATRIX");
        QIcon icon22(QIcon::fromTheme(QString::fromUtf8("matrix")));
        actionMATRIX->setIcon(icon22);
        actionREDDIT = new QAction(MainWindow);
        actionREDDIT->setObjectName("actionREDDIT");
        QIcon icon23(QIcon::fromTheme(QString::fromUtf8("reddit-alien")));
        actionREDDIT->setIcon(icon23);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName("actionAbout");
        QIcon icon24(QIcon::fromTheme(QString::fromUtf8("about")));
        actionAbout->setIcon(icon24);
        actionAbout->setMenuRole(QAction::AboutRole);
        actionClearMetadata = new QAction(MainWindow);
        actionClearMetadata->setObjectName("actionClearMetadata");
        QIcon icon25(QIcon::fromTheme(QString::fromUtf8("refresh")));
        actionClearMetadata->setIcon(icon25);
        actionViewLog = new QAction(MainWindow);
        actionViewLog->setObjectName("actionViewLog");
        QIcon icon26;
        QString iconThemeName = QString::fromUtf8("log");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon26 = QIcon::fromTheme(iconThemeName);
        } else {
            icon26.addFile(QString::fromUtf8("."), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        }
        actionViewLog->setIcon(icon26);
        actionAddToPATH = new QAction(MainWindow);
        actionAddToPATH->setObjectName("actionAddToPATH");
        QIcon icon27(QIcon::fromTheme(QString::fromUtf8("custom-commands")));
        actionAddToPATH->setIcon(icon27);
        actionFoldersButton = new QAction(MainWindow);
        actionFoldersButton->setObjectName("actionFoldersButton");
        actionFoldersButton->setIcon(icon10);
        actionHelpButton = new QAction(MainWindow);
        actionHelpButton->setObjectName("actionHelpButton");
        QIcon icon28(QIcon::fromTheme(QString::fromUtf8("help")));
        actionHelpButton->setIcon(icon28);
        actionAccountsButton = new QAction(MainWindow);
        actionAccountsButton->setObjectName("actionAccountsButton");
        actionAccountsButton->setIcon(icon18);
        actionOpenWiki = new QAction(MainWindow);
        actionOpenWiki->setObjectName("actionOpenWiki");
        actionOpenWiki->setIcon(icon28);
        actionViewWidgetThemeFolder = new QAction(MainWindow);
        actionViewWidgetThemeFolder->setObjectName("actionViewWidgetThemeFolder");
        actionViewWidgetThemeFolder->setIcon(icon10);
        actionViewIconThemeFolder = new QAction(MainWindow);
        actionViewIconThemeFolder->setObjectName("actionViewIconThemeFolder");
        actionViewIconThemeFolder->setIcon(icon10);
        actionViewCatPackFolder = new QAction(MainWindow);
        actionViewCatPackFolder->setObjectName("actionViewCatPackFolder");
        actionViewCatPackFolder->setIcon(icon10);
        actionViewJavaFolder = new QAction(MainWindow);
        actionViewJavaFolder->setObjectName("actionViewJavaFolder");
        actionViewJavaFolder->setIcon(icon10);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName("mainToolBar");
        mainToolBar->setAllowedAreas(Qt::BottomToolBarArea|Qt::TopToolBarArea);
        mainToolBar->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        mainToolBar->setFloatable(false);
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, mainToolBar);
        newsToolBar = new QToolBar(MainWindow);
        newsToolBar->setObjectName("newsToolBar");
        newsToolBar->setAllowedAreas(Qt::BottomToolBarArea|Qt::TopToolBarArea);
        newsToolBar->setIconSize(QSize(16, 16));
        newsToolBar->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        newsToolBar->setFloatable(false);
        MainWindow->addToolBar(Qt::ToolBarArea::BottomToolBarArea, newsToolBar);
        instanceToolBar = new WideBar(MainWindow);
        instanceToolBar->setObjectName("instanceToolBar");
        instanceToolBar->setAllowedAreas(Qt::LeftToolBarArea|Qt::RightToolBarArea);
        instanceToolBar->setIconSize(QSize(16, 16));
        instanceToolBar->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        instanceToolBar->setFloatable(false);
        instanceToolBar->setProperty("useDefaultAction", QVariant(true));
        MainWindow->addToolBar(Qt::ToolBarArea::RightToolBarArea, instanceToolBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 800, 22));
        fileMenu = new QMenu(menuBar);
        fileMenu->setObjectName("fileMenu");
        fileMenu->setToolTipsVisible(true);
        editMenu = new QMenu(menuBar);
        editMenu->setObjectName("editMenu");
        editMenu->setToolTipsVisible(true);
        viewMenu = new QMenu(menuBar);
        viewMenu->setObjectName("viewMenu");
        viewMenu->setToolTipsVisible(true);
        foldersMenu = new QMenu(menuBar);
        foldersMenu->setObjectName("foldersMenu");
        foldersMenu->setToolTipsVisible(true);
        accountsMenu = new QMenu(menuBar);
        accountsMenu->setObjectName("accountsMenu");
        helpMenu = new QMenu(menuBar);
        helpMenu->setObjectName("helpMenu");
        helpMenu->setToolTipsVisible(true);
        MainWindow->setMenuBar(menuBar);

        mainToolBar->addAction(actionAddInstance);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionFoldersButton);
        mainToolBar->addAction(actionSettings);
        mainToolBar->addAction(actionHelpButton);
        mainToolBar->addAction(actionCheckUpdate);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionCAT);
        mainToolBar->addAction(actionAccountsButton);
        newsToolBar->addAction(actionMoreNews);
        instanceToolBar->addAction(actionLaunchInstance);
        instanceToolBar->addAction(actionKillInstance);
        instanceToolBar->addSeparator();
        instanceToolBar->addAction(actionEditInstance);
        instanceToolBar->addAction(actionChangeInstGroup);
        instanceToolBar->addAction(actionViewSelectedInstFolder);
        instanceToolBar->addAction(actionExportInstance);
        instanceToolBar->addAction(actionCopyInstance);
        instanceToolBar->addAction(actionDeleteInstance);
        instanceToolBar->addAction(actionCreateInstanceShortcut);
        menuBar->addAction(fileMenu->menuAction());
        menuBar->addAction(editMenu->menuAction());
        menuBar->addAction(viewMenu->menuAction());
        menuBar->addAction(foldersMenu->menuAction());
        menuBar->addAction(accountsMenu->menuAction());
        menuBar->addAction(helpMenu->menuAction());
        fileMenu->addAction(actionAddInstance);
        fileMenu->addSeparator();
        fileMenu->addAction(actionLaunchInstance);
        fileMenu->addAction(actionKillInstance);
        fileMenu->addSeparator();
        fileMenu->addAction(actionEditInstance);
        fileMenu->addAction(actionChangeInstGroup);
        fileMenu->addAction(actionViewSelectedInstFolder);
        fileMenu->addAction(actionExportInstance);
        fileMenu->addAction(actionCopyInstance);
        fileMenu->addAction(actionDeleteInstance);
        fileMenu->addAction(actionCreateInstanceShortcut);
        fileMenu->addSeparator();
        fileMenu->addAction(actionSettings);
        fileMenu->addAction(actionCloseWindow);
        editMenu->addAction(actionUndoTrashInstance);
        viewMenu->addAction(actionChangeTheme);
        viewMenu->addSeparator();
        viewMenu->addAction(actionCAT);
        viewMenu->addAction(actionToggleStatusBar);
        viewMenu->addAction(actionLockToolbars);
        viewMenu->addSeparator();
        foldersMenu->addAction(actionViewLauncherRootFolder);
        foldersMenu->addSeparator();
        foldersMenu->addAction(actionViewInstanceFolder);
        foldersMenu->addAction(actionViewCentralModsFolder);
        foldersMenu->addAction(actionViewSkinsFolder);
        foldersMenu->addAction(actionViewJavaFolder);
        foldersMenu->addSeparator();
        foldersMenu->addAction(actionViewIconThemeFolder);
        foldersMenu->addAction(actionViewWidgetThemeFolder);
        foldersMenu->addAction(actionViewCatPackFolder);
        foldersMenu->addAction(actionViewIconsFolder);
        foldersMenu->addSeparator();
        foldersMenu->addAction(actionViewLogsFolder);
        helpMenu->addAction(actionClearMetadata);
        helpMenu->addAction(actionReportBug);
        helpMenu->addAction(actionViewLog);
        helpMenu->addAction(actionAddToPATH);
        helpMenu->addSeparator();
        helpMenu->addAction(actionMATRIX);
        helpMenu->addAction(actionDISCORD);
        helpMenu->addAction(actionREDDIT);
        helpMenu->addSeparator();
        helpMenu->addAction(actionMoreNews);
        helpMenu->addAction(actionCheckUpdate);
        helpMenu->addAction(actionOpenWiki);
        helpMenu->addAction(actionAbout);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        actionMoreNews->setText(QCoreApplication::translate("MainWindow", "More News...", nullptr));
#if QT_CONFIG(tooltip)
        actionMoreNews->setToolTip(QCoreApplication::translate("MainWindow", "Open the development blog to read more news about %1.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionCAT->setText(QCoreApplication::translate("MainWindow", "&Meow", nullptr));
#if QT_CONFIG(tooltip)
        actionCAT->setToolTip(QCoreApplication::translate("MainWindow", "It's a fluffy kitty :3", nullptr));
#endif // QT_CONFIG(tooltip)
        actionToggleStatusBar->setText(QCoreApplication::translate("MainWindow", "Status Bar", nullptr));
        actionLockToolbars->setText(QCoreApplication::translate("MainWindow", "Lock Toolbars", nullptr));
        actionUndoTrashInstance->setText(QCoreApplication::translate("MainWindow", "&Undo Last Instance Deletion", nullptr));
        actionAddInstance->setText(QCoreApplication::translate("MainWindow", "Add Instanc&e...", nullptr));
#if QT_CONFIG(tooltip)
        actionAddInstance->setToolTip(QCoreApplication::translate("MainWindow", "Add a new instance.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionCheckUpdate->setText(QCoreApplication::translate("MainWindow", "&Update...", nullptr));
#if QT_CONFIG(tooltip)
        actionCheckUpdate->setToolTip(QCoreApplication::translate("MainWindow", "Check for new updates for %1.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSettings->setText(QCoreApplication::translate("MainWindow", "Setti&ngs...", nullptr));
#if QT_CONFIG(tooltip)
        actionSettings->setToolTip(QCoreApplication::translate("MainWindow", "Change settings.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionManageSkins->setText(QCoreApplication::translate("MainWindow", "Manage &Skins...", nullptr));
        actionManageAccounts->setText(QCoreApplication::translate("MainWindow", "&Manage Accounts...", nullptr));
        actionLaunchInstance->setText(QCoreApplication::translate("MainWindow", "&Launch", nullptr));
#if QT_CONFIG(tooltip)
        actionLaunchInstance->setToolTip(QCoreApplication::translate("MainWindow", "Launch the selected instance.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionKillInstance->setText(QCoreApplication::translate("MainWindow", "&Kill", nullptr));
#if QT_CONFIG(tooltip)
        actionKillInstance->setToolTip(QCoreApplication::translate("MainWindow", "Kill the running instance.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionKillInstance->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+K", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRenameInstance->setText(QCoreApplication::translate("MainWindow", "Rename", nullptr));
#if QT_CONFIG(tooltip)
        actionRenameInstance->setToolTip(QCoreApplication::translate("MainWindow", "Rename the selected instance.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionChangeInstGroup->setText(QCoreApplication::translate("MainWindow", "&Change Group...", nullptr));
#if QT_CONFIG(tooltip)
        actionChangeInstGroup->setToolTip(QCoreApplication::translate("MainWindow", "Change the selected instance's group.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionChangeInstGroup->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+G", nullptr));
#endif // QT_CONFIG(shortcut)
        actionChangeInstIcon->setText(QCoreApplication::translate("MainWindow", "Change Icon", nullptr));
#if QT_CONFIG(tooltip)
        actionChangeInstIcon->setToolTip(QCoreApplication::translate("MainWindow", "Change the selected instance's icon.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionEditInstance->setText(QCoreApplication::translate("MainWindow", "&Edit...", nullptr));
#if QT_CONFIG(tooltip)
        actionEditInstance->setToolTip(QCoreApplication::translate("MainWindow", "Change the instance settings, mods and versions.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionEditInstance->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+I", nullptr));
#endif // QT_CONFIG(shortcut)
        actionViewSelectedInstFolder->setText(QCoreApplication::translate("MainWindow", "&Folder", nullptr));
#if QT_CONFIG(tooltip)
        actionViewSelectedInstFolder->setToolTip(QCoreApplication::translate("MainWindow", "Open the selected instance's root folder in a file browser.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionDeleteInstance->setText(QCoreApplication::translate("MainWindow", "Dele&te", nullptr));
#if QT_CONFIG(tooltip)
        actionDeleteInstance->setToolTip(QCoreApplication::translate("MainWindow", "Delete the selected instance.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionCopyInstance->setText(QCoreApplication::translate("MainWindow", "Cop&y...", nullptr));
#if QT_CONFIG(tooltip)
        actionCopyInstance->setToolTip(QCoreApplication::translate("MainWindow", "Copy the selected instance.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionCopyInstance->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+D", nullptr));
#endif // QT_CONFIG(shortcut)
        actionExportInstance->setText(QCoreApplication::translate("MainWindow", "E&xport...", nullptr));
#if QT_CONFIG(tooltip)
        actionExportInstance->setToolTip(QCoreApplication::translate("MainWindow", "Export the selected instance to supported formats.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionExportInstanceZip->setText(QCoreApplication::translate("MainWindow", "Prism Launcher (zip)", nullptr));
        actionExportInstanceMrPack->setText(QCoreApplication::translate("MainWindow", "Modrinth (mrpack)", nullptr));
        actionExportInstanceFlamePack->setText(QCoreApplication::translate("MainWindow", "CurseForge (zip)", nullptr));
        actionCreateInstanceShortcut->setText(QCoreApplication::translate("MainWindow", "Create Shortcut", nullptr));
#if QT_CONFIG(tooltip)
        actionCreateInstanceShortcut->setToolTip(QCoreApplication::translate("MainWindow", "Creates a shortcut on a selected folder to launch the selected instance.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionNoAccountsAdded->setText(QCoreApplication::translate("MainWindow", "No accounts added!", nullptr));
        actionNoDefaultAccount->setText(QCoreApplication::translate("MainWindow", "No Default Account", nullptr));
#if QT_CONFIG(shortcut)
        actionNoDefaultAccount->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+0", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCloseWindow->setText(QCoreApplication::translate("MainWindow", "Close &Window", nullptr));
#if QT_CONFIG(tooltip)
        actionCloseWindow->setToolTip(QCoreApplication::translate("MainWindow", "Close the current window", nullptr));
#endif // QT_CONFIG(tooltip)
        actionViewInstanceFolder->setText(QCoreApplication::translate("MainWindow", "&Instances", nullptr));
#if QT_CONFIG(tooltip)
        actionViewInstanceFolder->setToolTip(QCoreApplication::translate("MainWindow", "Open the instances folder in a file browser.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionViewLauncherRootFolder->setText(QCoreApplication::translate("MainWindow", "Launcher &Root", nullptr));
#if QT_CONFIG(tooltip)
        actionViewLauncherRootFolder->setToolTip(QCoreApplication::translate("MainWindow", "Open the launcher's root folder in a file browser.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionViewCentralModsFolder->setText(QCoreApplication::translate("MainWindow", "&Central Mods", nullptr));
#if QT_CONFIG(tooltip)
        actionViewCentralModsFolder->setToolTip(QCoreApplication::translate("MainWindow", "Open the central mods folder in a file browser.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionViewSkinsFolder->setText(QCoreApplication::translate("MainWindow", "&Skins", nullptr));
#if QT_CONFIG(tooltip)
        actionViewSkinsFolder->setToolTip(QCoreApplication::translate("MainWindow", "Open the skins folder in a file browser.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionViewIconsFolder->setText(QCoreApplication::translate("MainWindow", "Instance Icons", nullptr));
#if QT_CONFIG(tooltip)
        actionViewIconsFolder->setToolTip(QCoreApplication::translate("MainWindow", "Open the instance icons folder in a file browser.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionViewLogsFolder->setText(QCoreApplication::translate("MainWindow", "Logs", nullptr));
#if QT_CONFIG(tooltip)
        actionViewLogsFolder->setToolTip(QCoreApplication::translate("MainWindow", "Open the logs folder in a file browser.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionChangeTheme->setText(QCoreApplication::translate("MainWindow", "Themes", nullptr));
        actionReportBug->setText(QCoreApplication::translate("MainWindow", "Report a Bug or Suggest a Feature", nullptr));
#if QT_CONFIG(tooltip)
        actionReportBug->setToolTip(QCoreApplication::translate("MainWindow", "Open the bug tracker to report a bug with %1.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionDISCORD->setText(QCoreApplication::translate("MainWindow", "&Discord Guild", nullptr));
#if QT_CONFIG(tooltip)
        actionDISCORD->setToolTip(QCoreApplication::translate("MainWindow", "Open %1 Discord guild.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionMATRIX->setText(QCoreApplication::translate("MainWindow", "&Matrix Space", nullptr));
#if QT_CONFIG(tooltip)
        actionMATRIX->setToolTip(QCoreApplication::translate("MainWindow", "Open %1 Matrix space.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionREDDIT->setText(QCoreApplication::translate("MainWindow", "Sub&reddit", nullptr));
#if QT_CONFIG(tooltip)
        actionREDDIT->setToolTip(QCoreApplication::translate("MainWindow", "Open %1 subreddit.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionAbout->setText(QCoreApplication::translate("MainWindow", "&About %1", nullptr));
#if QT_CONFIG(tooltip)
        actionAbout->setToolTip(QCoreApplication::translate("MainWindow", "View information about %1.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionClearMetadata->setText(QCoreApplication::translate("MainWindow", "&Clear Metadata Cache", nullptr));
#if QT_CONFIG(tooltip)
        actionClearMetadata->setToolTip(QCoreApplication::translate("MainWindow", "Clear cached metadata", nullptr));
#endif // QT_CONFIG(tooltip)
        actionViewLog->setText(QCoreApplication::translate("MainWindow", "View logs", nullptr));
#if QT_CONFIG(tooltip)
        actionViewLog->setToolTip(QCoreApplication::translate("MainWindow", "View current and previous launcher logs", nullptr));
#endif // QT_CONFIG(tooltip)
        actionAddToPATH->setText(QCoreApplication::translate("MainWindow", "Install to &PATH", nullptr));
#if QT_CONFIG(tooltip)
        actionAddToPATH->setToolTip(QCoreApplication::translate("MainWindow", "Install a %1 symlink to /usr/local/bin", nullptr));
#endif // QT_CONFIG(tooltip)
        actionFoldersButton->setText(QCoreApplication::translate("MainWindow", "Folders", nullptr));
#if QT_CONFIG(tooltip)
        actionFoldersButton->setToolTip(QCoreApplication::translate("MainWindow", "Open one of the folders shared between instances.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionHelpButton->setText(QCoreApplication::translate("MainWindow", "Help", nullptr));
#if QT_CONFIG(tooltip)
        actionHelpButton->setToolTip(QCoreApplication::translate("MainWindow", "Get help with %1 or Minecraft.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionAccountsButton->setText(QCoreApplication::translate("MainWindow", "Accounts", nullptr));
        actionOpenWiki->setText(QCoreApplication::translate("MainWindow", "%1 &Wiki", nullptr));
#if QT_CONFIG(tooltip)
        actionOpenWiki->setToolTip(QCoreApplication::translate("MainWindow", "Open the %1 wiki", nullptr));
#endif // QT_CONFIG(tooltip)
        actionViewWidgetThemeFolder->setText(QCoreApplication::translate("MainWindow", "&Widget Themes", nullptr));
#if QT_CONFIG(tooltip)
        actionViewWidgetThemeFolder->setToolTip(QCoreApplication::translate("MainWindow", "Open the widget themes folder in a file browser.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionViewIconThemeFolder->setText(QCoreApplication::translate("MainWindow", "I&con Theme", nullptr));
#if QT_CONFIG(tooltip)
        actionViewIconThemeFolder->setToolTip(QCoreApplication::translate("MainWindow", "Open the icon theme folder in a file browser.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionViewCatPackFolder->setText(QCoreApplication::translate("MainWindow", "Cat Packs", nullptr));
#if QT_CONFIG(tooltip)
        actionViewCatPackFolder->setToolTip(QCoreApplication::translate("MainWindow", "Open the cat packs folder in a file browser.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionViewJavaFolder->setText(QCoreApplication::translate("MainWindow", "Java", nullptr));
#if QT_CONFIG(tooltip)
        actionViewJavaFolder->setToolTip(QCoreApplication::translate("MainWindow", "Open the Java folder in a file browser. Only available if the built-in Java downloader is used.", nullptr));
#endif // QT_CONFIG(tooltip)
        mainToolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "Main Toolbar", nullptr));
        newsToolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "News Toolbar", nullptr));
        instanceToolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "Instance Toolbar", nullptr));
        fileMenu->setTitle(QCoreApplication::translate("MainWindow", "&File", nullptr));
        editMenu->setTitle(QCoreApplication::translate("MainWindow", "&Edit", nullptr));
        viewMenu->setTitle(QCoreApplication::translate("MainWindow", "&View", nullptr));
        foldersMenu->setTitle(QCoreApplication::translate("MainWindow", "F&olders", nullptr));
        accountsMenu->setTitle(QCoreApplication::translate("MainWindow", "&Accounts", nullptr));
        helpMenu->setTitle(QCoreApplication::translate("MainWindow", "&Help", nullptr));
        (void)MainWindow;
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
