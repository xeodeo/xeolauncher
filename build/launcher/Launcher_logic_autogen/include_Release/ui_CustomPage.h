/********************************************************************************
** Form generated from reading UI file 'CustomPage.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMPAGE_H
#define UI_CUSTOMPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ui/widgets/VersionSelectWidget.h"

QT_BEGIN_NAMESPACE

class Ui_CustomPage
{
public:
    QVBoxLayout *verticalLayout_5;
    QScrollArea *scrollArea;
    QWidget *content;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *minecraftLayout;
    VersionSelectWidget *versionList;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QCheckBox *releaseFilter;
    QCheckBox *snapshotFilter;
    QCheckBox *betaFilter;
    QCheckBox *alphaFilter;
    QCheckBox *experimentsFilter;
    QSpacerItem *verticalSpacer;
    QPushButton *refreshBtn;
    QFrame *line;
    QHBoxLayout *loaderLayout;
    VersionSelectWidget *loaderVersionList;
    QVBoxLayout *verticalLayout_2;
    QLabel *loaderLabel;
    QRadioButton *noneFilter;
    QRadioButton *neoForgeFilter;
    QRadioButton *forgeFilter;
    QRadioButton *fabricFilter;
    QRadioButton *quiltFilter;
    QRadioButton *liteLoaderFilter;
    QSpacerItem *verticalSpacer_2;
    QPushButton *loaderRefreshBtn;
    QButtonGroup *loaderBtnGroup;

    void setupUi(QWidget *CustomPage)
    {
        if (CustomPage->objectName().isEmpty())
            CustomPage->setObjectName("CustomPage");
        CustomPage->resize(815, 607);
        verticalLayout_5 = new QVBoxLayout(CustomPage);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(CustomPage);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        content = new QWidget();
        content->setObjectName("content");
        content->setGeometry(QRect(0, 0, 813, 605));
        verticalLayout_3 = new QVBoxLayout(content);
        verticalLayout_3->setObjectName("verticalLayout_3");
        minecraftLayout = new QHBoxLayout();
        minecraftLayout->setObjectName("minecraftLayout");
        versionList = new VersionSelectWidget(content);
        versionList->setObjectName("versionList");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(versionList->sizePolicy().hasHeightForWidth());
        versionList->setSizePolicy(sizePolicy);

        minecraftLayout->addWidget(versionList);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(content);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        releaseFilter = new QCheckBox(content);
        releaseFilter->setObjectName("releaseFilter");
        releaseFilter->setCheckable(true);
        releaseFilter->setChecked(true);

        verticalLayout->addWidget(releaseFilter);

        snapshotFilter = new QCheckBox(content);
        snapshotFilter->setObjectName("snapshotFilter");
        snapshotFilter->setCheckable(true);

        verticalLayout->addWidget(snapshotFilter);

        betaFilter = new QCheckBox(content);
        betaFilter->setObjectName("betaFilter");
        betaFilter->setCheckable(true);

        verticalLayout->addWidget(betaFilter);

        alphaFilter = new QCheckBox(content);
        alphaFilter->setObjectName("alphaFilter");
        alphaFilter->setCheckable(true);

        verticalLayout->addWidget(alphaFilter);

        experimentsFilter = new QCheckBox(content);
        experimentsFilter->setObjectName("experimentsFilter");
        experimentsFilter->setCheckable(true);

        verticalLayout->addWidget(experimentsFilter);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        refreshBtn = new QPushButton(content);
        refreshBtn->setObjectName("refreshBtn");

        verticalLayout->addWidget(refreshBtn);


        minecraftLayout->addLayout(verticalLayout);


        verticalLayout_3->addLayout(minecraftLayout);

        line = new QFrame(content);
        line->setObjectName("line");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(line->sizePolicy().hasHeightForWidth());
        line->setSizePolicy(sizePolicy1);
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout_3->addWidget(line);

        loaderLayout = new QHBoxLayout();
        loaderLayout->setObjectName("loaderLayout");
        loaderVersionList = new VersionSelectWidget(content);
        loaderVersionList->setObjectName("loaderVersionList");
        sizePolicy.setHeightForWidth(loaderVersionList->sizePolicy().hasHeightForWidth());
        loaderVersionList->setSizePolicy(sizePolicy);

        loaderLayout->addWidget(loaderVersionList);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        loaderLabel = new QLabel(content);
        loaderLabel->setObjectName("loaderLabel");
        loaderLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(loaderLabel);

        noneFilter = new QRadioButton(content);
        loaderBtnGroup = new QButtonGroup(CustomPage);
        loaderBtnGroup->setObjectName("loaderBtnGroup");
        loaderBtnGroup->addButton(noneFilter);
        noneFilter->setObjectName("noneFilter");
        noneFilter->setChecked(true);

        verticalLayout_2->addWidget(noneFilter);

        neoForgeFilter = new QRadioButton(content);
        loaderBtnGroup->addButton(neoForgeFilter);
        neoForgeFilter->setObjectName("neoForgeFilter");

        verticalLayout_2->addWidget(neoForgeFilter);

        forgeFilter = new QRadioButton(content);
        loaderBtnGroup->addButton(forgeFilter);
        forgeFilter->setObjectName("forgeFilter");

        verticalLayout_2->addWidget(forgeFilter);

        fabricFilter = new QRadioButton(content);
        loaderBtnGroup->addButton(fabricFilter);
        fabricFilter->setObjectName("fabricFilter");

        verticalLayout_2->addWidget(fabricFilter);

        quiltFilter = new QRadioButton(content);
        loaderBtnGroup->addButton(quiltFilter);
        quiltFilter->setObjectName("quiltFilter");

        verticalLayout_2->addWidget(quiltFilter);

        liteLoaderFilter = new QRadioButton(content);
        loaderBtnGroup->addButton(liteLoaderFilter);
        liteLoaderFilter->setObjectName("liteLoaderFilter");

        verticalLayout_2->addWidget(liteLoaderFilter);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        loaderRefreshBtn = new QPushButton(content);
        loaderRefreshBtn->setObjectName("loaderRefreshBtn");

        verticalLayout_2->addWidget(loaderRefreshBtn);


        loaderLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(loaderLayout);

        scrollArea->setWidget(content);

        verticalLayout_5->addWidget(scrollArea);

        QWidget::setTabOrder(releaseFilter, snapshotFilter);
        QWidget::setTabOrder(snapshotFilter, betaFilter);
        QWidget::setTabOrder(betaFilter, alphaFilter);
        QWidget::setTabOrder(alphaFilter, experimentsFilter);
        QWidget::setTabOrder(experimentsFilter, refreshBtn);

        retranslateUi(CustomPage);

        QMetaObject::connectSlotsByName(CustomPage);
    } // setupUi

    void retranslateUi(QWidget *CustomPage)
    {
        label->setText(QCoreApplication::translate("CustomPage", "Filter", nullptr));
        releaseFilter->setText(QCoreApplication::translate("CustomPage", "Releases", nullptr));
        snapshotFilter->setText(QCoreApplication::translate("CustomPage", "Snapshots", nullptr));
        betaFilter->setText(QCoreApplication::translate("CustomPage", "Betas", nullptr));
        alphaFilter->setText(QCoreApplication::translate("CustomPage", "Alphas", nullptr));
        experimentsFilter->setText(QCoreApplication::translate("CustomPage", "Experiments", nullptr));
        refreshBtn->setText(QCoreApplication::translate("CustomPage", "Refresh", nullptr));
        loaderLabel->setText(QCoreApplication::translate("CustomPage", "Mod Loader", nullptr));
        noneFilter->setText(QCoreApplication::translate("CustomPage", "None", nullptr));
        neoForgeFilter->setText(QCoreApplication::translate("CustomPage", "NeoForge", nullptr));
        forgeFilter->setText(QCoreApplication::translate("CustomPage", "Forge", nullptr));
        fabricFilter->setText(QCoreApplication::translate("CustomPage", "Fabric", nullptr));
        quiltFilter->setText(QCoreApplication::translate("CustomPage", "Quilt", nullptr));
        liteLoaderFilter->setText(QCoreApplication::translate("CustomPage", "LiteLoader", nullptr));
        loaderRefreshBtn->setText(QCoreApplication::translate("CustomPage", "Refresh", nullptr));
        (void)CustomPage;
    } // retranslateUi

};

namespace Ui {
    class CustomPage: public Ui_CustomPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMPAGE_H
