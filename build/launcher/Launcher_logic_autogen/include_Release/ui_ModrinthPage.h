/********************************************************************************
** Form generated from reading UI file 'ModrinthPage.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODRINTHPAGE_H
#define UI_MODRINTHPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ui/widgets/ProjectDescriptionPage.h"

QT_BEGIN_NAMESPACE

class Ui_ModrinthPage
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *filterButton;
    QLineEdit *searchEdit;
    QSplitter *splitter;
    QWidget *widget;
    QListView *packView;
    ProjectDescriptionPage *packDescription;
    QHBoxLayout *hboxLayout;
    QComboBox *sortByBox;
    QLabel *label;
    QComboBox *versionSelectionBox;

    void setupUi(QWidget *ModrinthPage)
    {
        if (ModrinthPage->objectName().isEmpty())
            ModrinthPage->setObjectName("ModrinthPage");
        ModrinthPage->resize(800, 600);
        verticalLayout = new QVBoxLayout(ModrinthPage);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        filterButton = new QPushButton(ModrinthPage);
        filterButton->setObjectName("filterButton");

        horizontalLayout->addWidget(filterButton);

        searchEdit = new QLineEdit(ModrinthPage);
        searchEdit->setObjectName("searchEdit");

        horizontalLayout->addWidget(searchEdit);


        verticalLayout->addLayout(horizontalLayout);

        splitter = new QSplitter(ModrinthPage);
        splitter->setObjectName("splitter");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy);
        splitter->setOrientation(Qt::Horizontal);
        widget = new QWidget(splitter);
        widget->setObjectName("widget");
        splitter->addWidget(widget);
        packView = new QListView(splitter);
        packView->setObjectName("packView");
        packView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        packView->setAlternatingRowColors(true);
        packView->setIconSize(QSize(48, 48));
        packView->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        splitter->addWidget(packView);
        packDescription = new ProjectDescriptionPage(splitter);
        packDescription->setObjectName("packDescription");
        packDescription->setOpenExternalLinks(true);
        packDescription->setOpenLinks(true);
        splitter->addWidget(packDescription);

        verticalLayout->addWidget(splitter);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName("hboxLayout");
        sortByBox = new QComboBox(ModrinthPage);
        sortByBox->setObjectName("sortByBox");

        hboxLayout->addWidget(sortByBox);

        label = new QLabel(ModrinthPage);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        hboxLayout->addWidget(label);

        versionSelectionBox = new QComboBox(ModrinthPage);
        versionSelectionBox->setObjectName("versionSelectionBox");

        hboxLayout->addWidget(versionSelectionBox);


        verticalLayout->addLayout(hboxLayout);

        QWidget::setTabOrder(packView, packDescription);
        QWidget::setTabOrder(packDescription, sortByBox);
        QWidget::setTabOrder(sortByBox, versionSelectionBox);

        retranslateUi(ModrinthPage);

        QMetaObject::connectSlotsByName(ModrinthPage);
    } // setupUi

    void retranslateUi(QWidget *ModrinthPage)
    {
        filterButton->setText(QCoreApplication::translate("ModrinthPage", "Filter options", nullptr));
        searchEdit->setPlaceholderText(QCoreApplication::translate("ModrinthPage", "Search and filter...", nullptr));
        label->setText(QCoreApplication::translate("ModrinthPage", "Version selected:", nullptr));
        (void)ModrinthPage;
    } // retranslateUi

};

namespace Ui {
    class ModrinthPage: public Ui_ModrinthPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODRINTHPAGE_H
