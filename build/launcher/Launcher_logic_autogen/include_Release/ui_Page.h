/********************************************************************************
** Form generated from reading UI file 'Page.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGE_H
#define UI_PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

namespace LegacyFTB {

class Ui_Page
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *searchEdit;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout;
    QTreeView *publicPackList;
    QTextBrowser *publicPackDescription;
    QWidget *tab_2;
    QGridLayout *gridLayout_3;
    QTextBrowser *thirdPartyPackDescription;
    QTreeView *thirdPartyPackList;
    QWidget *tab_3;
    QGridLayout *gridLayout_2;
    QTreeView *privatePackList;
    QPushButton *addPackBtn;
    QPushButton *removePackBtn;
    QTextBrowser *privatePackDescription;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *sortByBox;
    QLabel *label;
    QComboBox *versionSelectionBox;

    void setupUi(QWidget *LegacyFTB__Page)
    {
        if (LegacyFTB__Page->objectName().isEmpty())
            LegacyFTB__Page->setObjectName("LegacyFTB__Page");
        LegacyFTB__Page->resize(709, 602);
        verticalLayout = new QVBoxLayout(LegacyFTB__Page);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        searchEdit = new QLineEdit(LegacyFTB__Page);
        searchEdit->setObjectName("searchEdit");
        searchEdit->setClearButtonEnabled(true);

        horizontalLayout->addWidget(searchEdit);


        verticalLayout->addLayout(horizontalLayout);

        tabWidget = new QTabWidget(LegacyFTB__Page);
        tabWidget->setObjectName("tabWidget");
        tab = new QWidget();
        tab->setObjectName("tab");
        gridLayout = new QGridLayout(tab);
        gridLayout->setObjectName("gridLayout");
        publicPackList = new QTreeView(tab);
        publicPackList->setObjectName("publicPackList");
        publicPackList->setMaximumSize(QSize(16777215, 16777215));
        publicPackList->setAlternatingRowColors(true);
        publicPackList->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);

        gridLayout->addWidget(publicPackList, 0, 0, 1, 1);

        publicPackDescription = new QTextBrowser(tab);
        publicPackDescription->setObjectName("publicPackDescription");
        publicPackDescription->setOpenExternalLinks(true);

        gridLayout->addWidget(publicPackDescription, 0, 1, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        gridLayout_3 = new QGridLayout(tab_2);
        gridLayout_3->setObjectName("gridLayout_3");
        thirdPartyPackDescription = new QTextBrowser(tab_2);
        thirdPartyPackDescription->setObjectName("thirdPartyPackDescription");
        thirdPartyPackDescription->setOpenExternalLinks(true);

        gridLayout_3->addWidget(thirdPartyPackDescription, 0, 1, 1, 1);

        thirdPartyPackList = new QTreeView(tab_2);
        thirdPartyPackList->setObjectName("thirdPartyPackList");
        thirdPartyPackList->setMaximumSize(QSize(16777215, 16777215));
        thirdPartyPackList->setAlternatingRowColors(true);
        thirdPartyPackList->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);

        gridLayout_3->addWidget(thirdPartyPackList, 0, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        gridLayout_2 = new QGridLayout(tab_3);
        gridLayout_2->setObjectName("gridLayout_2");
        privatePackList = new QTreeView(tab_3);
        privatePackList->setObjectName("privatePackList");
        privatePackList->setMaximumSize(QSize(16777215, 16777215));
        privatePackList->setAlternatingRowColors(true);
        privatePackList->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);

        gridLayout_2->addWidget(privatePackList, 0, 0, 1, 1);

        addPackBtn = new QPushButton(tab_3);
        addPackBtn->setObjectName("addPackBtn");

        gridLayout_2->addWidget(addPackBtn, 1, 0, 1, 1);

        removePackBtn = new QPushButton(tab_3);
        removePackBtn->setObjectName("removePackBtn");

        gridLayout_2->addWidget(removePackBtn, 2, 0, 1, 1);

        privatePackDescription = new QTextBrowser(tab_3);
        privatePackDescription->setObjectName("privatePackDescription");
        privatePackDescription->setOpenExternalLinks(true);

        gridLayout_2->addWidget(privatePackDescription, 0, 1, 3, 1);

        tabWidget->addTab(tab_3, QString());

        verticalLayout->addWidget(tabWidget);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        sortByBox = new QComboBox(LegacyFTB__Page);
        sortByBox->setObjectName("sortByBox");
        sortByBox->setMinimumSize(QSize(265, 0));

        horizontalLayout_2->addWidget(sortByBox);

        label = new QLabel(LegacyFTB__Page);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label);

        versionSelectionBox = new QComboBox(LegacyFTB__Page);
        versionSelectionBox->setObjectName("versionSelectionBox");

        horizontalLayout_2->addWidget(versionSelectionBox);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(LegacyFTB__Page);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(LegacyFTB__Page);
    } // setupUi

    void retranslateUi(QWidget *LegacyFTB__Page)
    {
        searchEdit->setPlaceholderText(QCoreApplication::translate("LegacyFTB::Page", "Search and filter...", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("LegacyFTB::Page", "Public", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("LegacyFTB::Page", "3rd Party", nullptr));
        addPackBtn->setText(QCoreApplication::translate("LegacyFTB::Page", "Add pack", nullptr));
        removePackBtn->setText(QCoreApplication::translate("LegacyFTB::Page", "Remove selected pack", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("LegacyFTB::Page", "Private", nullptr));
        label->setText(QCoreApplication::translate("LegacyFTB::Page", "Version selected:", nullptr));
        (void)LegacyFTB__Page;
    } // retranslateUi

};

} // namespace LegacyFTB

namespace LegacyFTB {
namespace Ui {
    class Page: public Ui_Page {};
} // namespace Ui
} // namespace LegacyFTB

#endif // UI_PAGE_H
