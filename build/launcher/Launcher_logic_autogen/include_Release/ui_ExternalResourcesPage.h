/********************************************************************************
** Form generated from reading UI file 'ExternalResourcesPage.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXTERNALRESOURCESPAGE_H
#define UI_EXTERNALRESOURCESPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>
#include "ui/widgets/InfoFrame.h"
#include "ui/widgets/ModListView.h"
#include "ui/widgets/WideBar.h"

QT_BEGIN_NAMESPACE

class Ui_ExternalResourcesPage
{
public:
    QAction *actionAddItem;
    QAction *actionRemoveItem;
    QAction *actionEnableItem;
    QAction *actionDisableItem;
    QAction *actionViewConfigs;
    QAction *actionViewFolder;
    QAction *actionDownloadItem;
    QAction *actionUpdateItem;
    QAction *actionResetItemMetadata;
    QAction *actionVerifyItemDependencies;
    QAction *actionExportMetadata;
    QAction *actionChangeVersion;
    QAction *actionViewHomepage;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    ModListView *treeView;
    InfoFrame *frame;
    QLineEdit *filterEdit;
    WideBar *actionsToolbar;

    void setupUi(QMainWindow *ExternalResourcesPage)
    {
        if (ExternalResourcesPage->objectName().isEmpty())
            ExternalResourcesPage->setObjectName("ExternalResourcesPage");
        ExternalResourcesPage->resize(1042, 501);
        actionAddItem = new QAction(ExternalResourcesPage);
        actionAddItem->setObjectName("actionAddItem");
        actionRemoveItem = new QAction(ExternalResourcesPage);
        actionRemoveItem->setObjectName("actionRemoveItem");
        actionRemoveItem->setEnabled(false);
        actionEnableItem = new QAction(ExternalResourcesPage);
        actionEnableItem->setObjectName("actionEnableItem");
        actionEnableItem->setEnabled(false);
        actionDisableItem = new QAction(ExternalResourcesPage);
        actionDisableItem->setObjectName("actionDisableItem");
        actionDisableItem->setEnabled(false);
        actionViewConfigs = new QAction(ExternalResourcesPage);
        actionViewConfigs->setObjectName("actionViewConfigs");
        actionViewFolder = new QAction(ExternalResourcesPage);
        actionViewFolder->setObjectName("actionViewFolder");
        actionDownloadItem = new QAction(ExternalResourcesPage);
        actionDownloadItem->setObjectName("actionDownloadItem");
        actionDownloadItem->setEnabled(false);
        actionUpdateItem = new QAction(ExternalResourcesPage);
        actionUpdateItem->setObjectName("actionUpdateItem");
        actionUpdateItem->setEnabled(false);
        actionResetItemMetadata = new QAction(ExternalResourcesPage);
        actionResetItemMetadata->setObjectName("actionResetItemMetadata");
        actionResetItemMetadata->setMenuRole(QAction::MenuRole::NoRole);
        actionVerifyItemDependencies = new QAction(ExternalResourcesPage);
        actionVerifyItemDependencies->setObjectName("actionVerifyItemDependencies");
        actionVerifyItemDependencies->setMenuRole(QAction::MenuRole::NoRole);
        actionExportMetadata = new QAction(ExternalResourcesPage);
        actionExportMetadata->setObjectName("actionExportMetadata");
        actionExportMetadata->setEnabled(false);
        actionChangeVersion = new QAction(ExternalResourcesPage);
        actionChangeVersion->setObjectName("actionChangeVersion");
        actionChangeVersion->setEnabled(false);
        actionChangeVersion->setMenuRole(QAction::MenuRole::NoRole);
        actionViewHomepage = new QAction(ExternalResourcesPage);
        actionViewHomepage->setObjectName("actionViewHomepage");
        actionViewHomepage->setEnabled(false);
        centralwidget = new QWidget(ExternalResourcesPage);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        treeView = new ModListView(centralwidget);
        treeView->setObjectName("treeView");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(treeView->sizePolicy().hasHeightForWidth());
        treeView->setSizePolicy(sizePolicy);
        treeView->setAcceptDrops(true);
        treeView->setDragDropMode(QAbstractItemView::DragDropMode::DropOnly);
        treeView->setUniformRowHeights(true);

        gridLayout->addWidget(treeView, 1, 1, 1, 2);

        frame = new InfoFrame(centralwidget);
        frame->setObjectName("frame");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(frame, 2, 1, 1, 2);

        filterEdit = new QLineEdit(centralwidget);
        filterEdit->setObjectName("filterEdit");

        gridLayout->addWidget(filterEdit, 3, 1, 1, 2);

        ExternalResourcesPage->setCentralWidget(centralwidget);
        actionsToolbar = new WideBar(ExternalResourcesPage);
        actionsToolbar->setObjectName("actionsToolbar");
        actionsToolbar->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonIconOnly);
        actionsToolbar->setProperty("useDefaultAction", QVariant(true));
        ExternalResourcesPage->addToolBar(Qt::ToolBarArea::RightToolBarArea, actionsToolbar);

        actionsToolbar->addAction(actionAddItem);
        actionsToolbar->addSeparator();
        actionsToolbar->addAction(actionRemoveItem);
        actionsToolbar->addAction(actionEnableItem);
        actionsToolbar->addAction(actionDisableItem);
        actionsToolbar->addSeparator();
        actionsToolbar->addAction(actionViewHomepage);
        actionsToolbar->addAction(actionViewFolder);

        retranslateUi(ExternalResourcesPage);

        QMetaObject::connectSlotsByName(ExternalResourcesPage);
    } // setupUi

    void retranslateUi(QMainWindow *ExternalResourcesPage)
    {
        actionAddItem->setText(QCoreApplication::translate("ExternalResourcesPage", "&Add File", nullptr));
#if QT_CONFIG(tooltip)
        actionAddItem->setToolTip(QCoreApplication::translate("ExternalResourcesPage", "Add a locally downloaded file.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionRemoveItem->setText(QCoreApplication::translate("ExternalResourcesPage", "&Remove", nullptr));
#if QT_CONFIG(tooltip)
        actionRemoveItem->setToolTip(QCoreApplication::translate("ExternalResourcesPage", "Remove all selected items.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionEnableItem->setText(QCoreApplication::translate("ExternalResourcesPage", "&Enable", nullptr));
#if QT_CONFIG(tooltip)
        actionEnableItem->setToolTip(QCoreApplication::translate("ExternalResourcesPage", "Enable all selected items.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionDisableItem->setText(QCoreApplication::translate("ExternalResourcesPage", "&Disable", nullptr));
#if QT_CONFIG(tooltip)
        actionDisableItem->setToolTip(QCoreApplication::translate("ExternalResourcesPage", "Disable all selected items.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionViewConfigs->setText(QCoreApplication::translate("ExternalResourcesPage", "View &Configs", nullptr));
#if QT_CONFIG(tooltip)
        actionViewConfigs->setToolTip(QCoreApplication::translate("ExternalResourcesPage", "Open the 'config' folder in the system file manager.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionViewFolder->setText(QCoreApplication::translate("ExternalResourcesPage", "View &Folder", nullptr));
#if QT_CONFIG(tooltip)
        actionViewFolder->setToolTip(QCoreApplication::translate("ExternalResourcesPage", "Open the folder in the system file manager.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionDownloadItem->setText(QCoreApplication::translate("ExternalResourcesPage", "&Download", nullptr));
#if QT_CONFIG(tooltip)
        actionDownloadItem->setToolTip(QCoreApplication::translate("ExternalResourcesPage", "Download resources from online mod platforms.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionUpdateItem->setText(QCoreApplication::translate("ExternalResourcesPage", "Check for &Updates", nullptr));
#if QT_CONFIG(tooltip)
        actionUpdateItem->setToolTip(QCoreApplication::translate("ExternalResourcesPage", "Try to check or update all selected resources (all resources if none are selected).", nullptr));
#endif // QT_CONFIG(tooltip)
        actionResetItemMetadata->setText(QCoreApplication::translate("ExternalResourcesPage", "Reset Update Metadata", nullptr));
        actionVerifyItemDependencies->setText(QCoreApplication::translate("ExternalResourcesPage", "Verify Dependencies", nullptr));
        actionExportMetadata->setText(QCoreApplication::translate("ExternalResourcesPage", "Export List", nullptr));
#if QT_CONFIG(tooltip)
        actionExportMetadata->setToolTip(QCoreApplication::translate("ExternalResourcesPage", "Export resource's metadata to text.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionChangeVersion->setText(QCoreApplication::translate("ExternalResourcesPage", "Change Version", nullptr));
#if QT_CONFIG(tooltip)
        actionChangeVersion->setToolTip(QCoreApplication::translate("ExternalResourcesPage", "Change a resource's version.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionViewHomepage->setText(QCoreApplication::translate("ExternalResourcesPage", "View Homepage", nullptr));
#if QT_CONFIG(tooltip)
        actionViewHomepage->setToolTip(QCoreApplication::translate("ExternalResourcesPage", "View the homepages of all selected items.", nullptr));
#endif // QT_CONFIG(tooltip)
        filterEdit->setPlaceholderText(QCoreApplication::translate("ExternalResourcesPage", "Search", nullptr));
        actionsToolbar->setWindowTitle(QCoreApplication::translate("ExternalResourcesPage", "Actions", nullptr));
        (void)ExternalResourcesPage;
    } // retranslateUi

};

namespace Ui {
    class ExternalResourcesPage: public Ui_ExternalResourcesPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXTERNALRESOURCESPAGE_H
