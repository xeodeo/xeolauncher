/********************************************************************************
** Form generated from reading UI file 'AccountListPage.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCOUNTLISTPAGE_H
#define UI_ACCOUNTLISTPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>
#include "ui/widgets/VersionListView.h"
#include "ui/widgets/WideBar.h"

QT_BEGIN_NAMESPACE

class Ui_AccountListPage
{
public:
    QAction *actionSetDefault;
    QAction *actionNoDefault;
    QAction *actionManageSkins;
    QAction *actionAddMicrosoft;
    QAction *actionAddOffline;
    QAction *actionRefresh;
    QAction *actionRemove;
    QAction *actionMoveUp;
    QAction *actionMoveDown;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    VersionListView *listView;
    WideBar *toolBar;

    void setupUi(QMainWindow *AccountListPage)
    {
        if (AccountListPage->objectName().isEmpty())
            AccountListPage->setObjectName("AccountListPage");
        AccountListPage->resize(800, 600);
        actionSetDefault = new QAction(AccountListPage);
        actionSetDefault->setObjectName("actionSetDefault");
        actionNoDefault = new QAction(AccountListPage);
        actionNoDefault->setObjectName("actionNoDefault");
        actionNoDefault->setCheckable(true);
        actionManageSkins = new QAction(AccountListPage);
        actionManageSkins->setObjectName("actionManageSkins");
        actionAddMicrosoft = new QAction(AccountListPage);
        actionAddMicrosoft->setObjectName("actionAddMicrosoft");
        actionAddOffline = new QAction(AccountListPage);
        actionAddOffline->setObjectName("actionAddOffline");
        actionRefresh = new QAction(AccountListPage);
        actionRefresh->setObjectName("actionRefresh");
        actionRemove = new QAction(AccountListPage);
        actionRemove->setObjectName("actionRemove");
        actionMoveUp = new QAction(AccountListPage);
        actionMoveUp->setObjectName("actionMoveUp");
        actionMoveDown = new QAction(AccountListPage);
        actionMoveDown->setObjectName("actionMoveDown");
        centralwidget = new QWidget(AccountListPage);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        listView = new VersionListView(centralwidget);
        listView->setObjectName("listView");
        listView->setAlternatingRowColors(true);
        listView->setRootIsDecorated(false);
        listView->setItemsExpandable(false);
        listView->setAllColumnsShowFocus(true);
        listView->header()->setStretchLastSection(false);

        horizontalLayout->addWidget(listView);

        AccountListPage->setCentralWidget(centralwidget);
        toolBar = new WideBar(AccountListPage);
        toolBar->setObjectName("toolBar");
        AccountListPage->addToolBar(Qt::ToolBarArea::RightToolBarArea, toolBar);

        toolBar->addAction(actionAddMicrosoft);
        toolBar->addAction(actionAddOffline);
        toolBar->addAction(actionRefresh);
        toolBar->addAction(actionRemove);
        toolBar->addAction(actionSetDefault);
        toolBar->addAction(actionNoDefault);
        toolBar->addAction(actionMoveUp);
        toolBar->addAction(actionMoveDown);
        toolBar->addSeparator();
        toolBar->addAction(actionManageSkins);

        retranslateUi(AccountListPage);

        QMetaObject::connectSlotsByName(AccountListPage);
    } // setupUi

    void retranslateUi(QMainWindow *AccountListPage)
    {
        actionSetDefault->setText(QCoreApplication::translate("AccountListPage", "&Set Default", nullptr));
        actionNoDefault->setText(QCoreApplication::translate("AccountListPage", "&No Default", nullptr));
        actionManageSkins->setText(QCoreApplication::translate("AccountListPage", "&Manage Skins", nullptr));
#if QT_CONFIG(tooltip)
        actionManageSkins->setToolTip(QCoreApplication::translate("AccountListPage", "Manage Skins", nullptr));
#endif // QT_CONFIG(tooltip)
        actionAddMicrosoft->setText(QCoreApplication::translate("AccountListPage", "&Add Microsoft", nullptr));
        actionAddOffline->setText(QCoreApplication::translate("AccountListPage", "Add &Offline", nullptr));
        actionRefresh->setText(QCoreApplication::translate("AccountListPage", "&Refresh", nullptr));
#if QT_CONFIG(tooltip)
        actionRefresh->setToolTip(QCoreApplication::translate("AccountListPage", "Refresh the account tokens", nullptr));
#endif // QT_CONFIG(tooltip)
        actionRemove->setText(QCoreApplication::translate("AccountListPage", "Remo&ve", nullptr));
        actionMoveUp->setText(QCoreApplication::translate("AccountListPage", "Move &Up", nullptr));
        actionMoveDown->setText(QCoreApplication::translate("AccountListPage", "Move &Down", nullptr));
        (void)AccountListPage;
    } // retranslateUi

};

namespace Ui {
    class AccountListPage: public Ui_AccountListPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCOUNTLISTPAGE_H
