/********************************************************************************
** Form generated from reading UI file 'FlamePage.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FLAMEPAGE_H
#define UI_FLAMEPAGE_H

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

class Ui_FlamePage
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
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

    void setupUi(QWidget *FlamePage)
    {
        if (FlamePage->objectName().isEmpty())
            FlamePage->setObjectName("FlamePage");
        FlamePage->resize(800, 600);
        verticalLayout = new QVBoxLayout(FlamePage);
        verticalLayout->setObjectName("verticalLayout");
        label_2 = new QLabel(FlamePage);
        label_2->setObjectName("label_2");
        QFont font;
        font.setItalic(true);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);
        label_2->setWordWrap(true);

        verticalLayout->addWidget(label_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        filterButton = new QPushButton(FlamePage);
        filterButton->setObjectName("filterButton");

        horizontalLayout->addWidget(filterButton);

        searchEdit = new QLineEdit(FlamePage);
        searchEdit->setObjectName("searchEdit");

        horizontalLayout->addWidget(searchEdit);


        verticalLayout->addLayout(horizontalLayout);

        splitter = new QSplitter(FlamePage);
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
        sortByBox = new QComboBox(FlamePage);
        sortByBox->setObjectName("sortByBox");

        hboxLayout->addWidget(sortByBox);

        label = new QLabel(FlamePage);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        hboxLayout->addWidget(label);

        versionSelectionBox = new QComboBox(FlamePage);
        versionSelectionBox->setObjectName("versionSelectionBox");

        hboxLayout->addWidget(versionSelectionBox);


        verticalLayout->addLayout(hboxLayout);

        QWidget::setTabOrder(packView, packDescription);
        QWidget::setTabOrder(packDescription, sortByBox);
        QWidget::setTabOrder(sortByBox, versionSelectionBox);

        retranslateUi(FlamePage);

        QMetaObject::connectSlotsByName(FlamePage);
    } // setupUi

    void retranslateUi(QWidget *FlamePage)
    {
        label_2->setText(QCoreApplication::translate("FlamePage", "Note: CurseForge allows creators to block access to third-party tools like Prism Launcher. As such, you may need to manually download some mods to be able to install a modpack.", nullptr));
        filterButton->setText(QCoreApplication::translate("FlamePage", "Filter options", nullptr));
        searchEdit->setPlaceholderText(QCoreApplication::translate("FlamePage", "Search and filter...", nullptr));
        label->setText(QCoreApplication::translate("FlamePage", "Version selected:", nullptr));
        (void)FlamePage;
    } // retranslateUi

};

namespace Ui {
    class FlamePage: public Ui_FlamePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FLAMEPAGE_H
