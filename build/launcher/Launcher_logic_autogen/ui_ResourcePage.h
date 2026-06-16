/********************************************************************************
** Form generated from reading UI file 'ResourcePage.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESOURCEPAGE_H
#define UI_RESOURCEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
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

class Ui_ResourcePage
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *resourceFilterButton;
    QLineEdit *searchEdit;
    QSplitter *splitter;
    QWidget *filterWidget;
    QListView *packView;
    ProjectDescriptionPage *packDescription;
    QGridLayout *gridLayout_4;
    QComboBox *versionSelectionBox;
    QLabel *label;
    QComboBox *sortByBox;
    QPushButton *resourceSelectionButton;

    void setupUi(QWidget *ResourcePage)
    {
        if (ResourcePage->objectName().isEmpty())
            ResourcePage->setObjectName("ResourcePage");
        ResourcePage->resize(837, 685);
        verticalLayout = new QVBoxLayout(ResourcePage);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        resourceFilterButton = new QPushButton(ResourcePage);
        resourceFilterButton->setObjectName("resourceFilterButton");

        horizontalLayout->addWidget(resourceFilterButton);

        searchEdit = new QLineEdit(ResourcePage);
        searchEdit->setObjectName("searchEdit");

        horizontalLayout->addWidget(searchEdit);


        verticalLayout->addLayout(horizontalLayout);

        splitter = new QSplitter(ResourcePage);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Horizontal);
        splitter->setChildrenCollapsible(false);
        filterWidget = new QWidget(splitter);
        filterWidget->setObjectName("filterWidget");
        splitter->addWidget(filterWidget);
        packView = new QListView(splitter);
        packView->setObjectName("packView");
        packView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        packView->setAlternatingRowColors(true);
        packView->setIconSize(QSize(48, 48));
        packView->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        splitter->addWidget(packView);
        packDescription = new ProjectDescriptionPage(splitter);
        packDescription->setObjectName("packDescription");
        packDescription->setOpenExternalLinks(false);
        packDescription->setOpenLinks(false);
        splitter->addWidget(packDescription);

        verticalLayout->addWidget(splitter);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName("gridLayout_4");
        versionSelectionBox = new QComboBox(ResourcePage);
        versionSelectionBox->setObjectName("versionSelectionBox");

        gridLayout_4->addWidget(versionSelectionBox, 0, 2, 1, 1);

        label = new QLabel(ResourcePage);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label, 0, 1, 1, 1);

        sortByBox = new QComboBox(ResourcePage);
        sortByBox->setObjectName("sortByBox");

        gridLayout_4->addWidget(sortByBox, 0, 0, 1, 1);

        resourceSelectionButton = new QPushButton(ResourcePage);
        resourceSelectionButton->setObjectName("resourceSelectionButton");

        gridLayout_4->addWidget(resourceSelectionButton, 1, 2, 1, 1);


        verticalLayout->addLayout(gridLayout_4);

        QWidget::setTabOrder(packView, packDescription);
        QWidget::setTabOrder(packDescription, sortByBox);
        QWidget::setTabOrder(sortByBox, versionSelectionBox);

        retranslateUi(ResourcePage);

        QMetaObject::connectSlotsByName(ResourcePage);
    } // setupUi

    void retranslateUi(QWidget *ResourcePage)
    {
        resourceFilterButton->setText(QCoreApplication::translate("ResourcePage", "Filter options", nullptr));
        label->setText(QCoreApplication::translate("ResourcePage", "Version selected:", nullptr));
        (void)ResourcePage;
    } // retranslateUi

};

namespace Ui {
    class ResourcePage: public Ui_ResourcePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESOURCEPAGE_H
