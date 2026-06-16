/********************************************************************************
** Form generated from reading UI file 'WorldListPage.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WORLDLISTPAGE_H
#define UI_WORLDLISTPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>
#include "ui/widgets/WideBar.h"

QT_BEGIN_NAMESPACE

class Ui_WorldListPage
{
public:
    QAction *actionAdd;
    QAction *actionJoin;
    QAction *actionRename;
    QAction *actionCopy;
    QAction *actionRemove;
    QAction *actionMCEdit;
    QAction *actionCopy_Seed;
    QAction *actionRefresh;
    QAction *actionView_Folder;
    QAction *actionReset_Icon;
    QAction *actionData_Packs;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QTreeView *worldTreeView;
    WideBar *toolBar;

    void setupUi(QMainWindow *WorldListPage)
    {
        if (WorldListPage->objectName().isEmpty())
            WorldListPage->setObjectName("WorldListPage");
        WorldListPage->resize(800, 600);
        actionAdd = new QAction(WorldListPage);
        actionAdd->setObjectName("actionAdd");
        actionJoin = new QAction(WorldListPage);
        actionJoin->setObjectName("actionJoin");
        actionRename = new QAction(WorldListPage);
        actionRename->setObjectName("actionRename");
        actionCopy = new QAction(WorldListPage);
        actionCopy->setObjectName("actionCopy");
        actionRemove = new QAction(WorldListPage);
        actionRemove->setObjectName("actionRemove");
        actionMCEdit = new QAction(WorldListPage);
        actionMCEdit->setObjectName("actionMCEdit");
        actionCopy_Seed = new QAction(WorldListPage);
        actionCopy_Seed->setObjectName("actionCopy_Seed");
        actionRefresh = new QAction(WorldListPage);
        actionRefresh->setObjectName("actionRefresh");
        actionView_Folder = new QAction(WorldListPage);
        actionView_Folder->setObjectName("actionView_Folder");
        actionReset_Icon = new QAction(WorldListPage);
        actionReset_Icon->setObjectName("actionReset_Icon");
        actionData_Packs = new QAction(WorldListPage);
        actionData_Packs->setObjectName("actionData_Packs");
        centralwidget = new QWidget(WorldListPage);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        worldTreeView = new QTreeView(centralwidget);
        worldTreeView->setObjectName("worldTreeView");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(worldTreeView->sizePolicy().hasHeightForWidth());
        worldTreeView->setSizePolicy(sizePolicy);
        worldTreeView->setAcceptDrops(true);
        worldTreeView->setDragDropMode(QAbstractItemView::DragDrop);
        worldTreeView->setAlternatingRowColors(true);
        worldTreeView->setRootIsDecorated(false);
        worldTreeView->setItemsExpandable(false);
        worldTreeView->setSortingEnabled(true);
        worldTreeView->setAllColumnsShowFocus(true);
        worldTreeView->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        worldTreeView->header()->setStretchLastSection(false);

        horizontalLayout->addWidget(worldTreeView);

        WorldListPage->setCentralWidget(centralwidget);
        toolBar = new WideBar(WorldListPage);
        toolBar->setObjectName("toolBar");
        toolBar->setAllowedAreas(Qt::LeftToolBarArea|Qt::RightToolBarArea);
        toolBar->setToolButtonStyle(Qt::ToolButtonTextOnly);
        toolBar->setFloatable(false);
        WorldListPage->addToolBar(Qt::ToolBarArea::RightToolBarArea, toolBar);

        toolBar->addAction(actionAdd);
        toolBar->addSeparator();
        toolBar->addAction(actionJoin);
        toolBar->addAction(actionRename);
        toolBar->addAction(actionCopy);
        toolBar->addAction(actionRemove);
        toolBar->addAction(actionMCEdit);
        toolBar->addAction(actionData_Packs);
        toolBar->addAction(actionReset_Icon);
        toolBar->addSeparator();
        toolBar->addAction(actionCopy_Seed);
        toolBar->addAction(actionRefresh);
        toolBar->addAction(actionView_Folder);

        retranslateUi(WorldListPage);

        QMetaObject::connectSlotsByName(WorldListPage);
    } // setupUi

    void retranslateUi(QMainWindow *WorldListPage)
    {
        actionAdd->setText(QCoreApplication::translate("WorldListPage", "Add", nullptr));
        actionJoin->setText(QCoreApplication::translate("WorldListPage", "Join", nullptr));
        actionRename->setText(QCoreApplication::translate("WorldListPage", "Rename", nullptr));
        actionCopy->setText(QCoreApplication::translate("WorldListPage", "Copy", nullptr));
        actionRemove->setText(QCoreApplication::translate("WorldListPage", "Delete", nullptr));
        actionMCEdit->setText(QCoreApplication::translate("WorldListPage", "MCEdit", nullptr));
        actionCopy_Seed->setText(QCoreApplication::translate("WorldListPage", "Copy Seed", nullptr));
        actionRefresh->setText(QCoreApplication::translate("WorldListPage", "Refresh", nullptr));
        actionView_Folder->setText(QCoreApplication::translate("WorldListPage", "View Folder", nullptr));
        actionReset_Icon->setText(QCoreApplication::translate("WorldListPage", "Reset Icon", nullptr));
#if QT_CONFIG(tooltip)
        actionReset_Icon->setToolTip(QCoreApplication::translate("WorldListPage", "Remove world icon to make the game re-generate it on next load.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionData_Packs->setText(QCoreApplication::translate("WorldListPage", "Data Packs", nullptr));
#if QT_CONFIG(tooltip)
        actionData_Packs->setToolTip(QCoreApplication::translate("WorldListPage", "Manage data packs inside the world.", nullptr));
#endif // QT_CONFIG(tooltip)
        toolBar->setWindowTitle(QCoreApplication::translate("WorldListPage", "Actions", nullptr));
        (void)WorldListPage;
    } // retranslateUi

};

namespace Ui {
    class WorldListPage: public Ui_WorldListPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORLDLISTPAGE_H
