/********************************************************************************
** Form generated from reading UI file 'ModFilterWidget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODFILTERWIDGET_H
#define UI_MODFILTERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ui/widgets/CheckComboBox.h"

QT_BEGIN_NAMESPACE

class Ui_ModFilterWidget
{
public:
    QVBoxLayout *verticalLayout_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;
    QGroupBox *categoryGroup;
    QGroupBox *loaderGroup;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *neoForge;
    QCheckBox *forge;
    QCheckBox *fabric;
    QCheckBox *quilt;
    QPushButton *showMoreButton;
    QWidget *extendedModLoadersWidget;
    QVBoxLayout *extendedModLoadersLayout;
    QCheckBox *liteLoader;
    QCheckBox *babric;
    QCheckBox *btaBabric;
    QCheckBox *legacyFabric;
    QCheckBox *ornithe;
    QCheckBox *rift;
    QGroupBox *minecraftVersionGroup;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *showAllVersions;
    CheckComboBox *versions;
    QComboBox *version;
    QGroupBox *environmentGroup;
    QVBoxLayout *verticalLayout_5;
    QCheckBox *clientSide;
    QCheckBox *serverSide;
    QCheckBox *hideInstalled;
    QCheckBox *openSource;
    QGroupBox *releaseGroup;
    QVBoxLayout *verticalLayout_6;
    QCheckBox *releaseCb;
    QCheckBox *betaCb;
    QCheckBox *alphaCb;
    QCheckBox *unknownCb;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *ModFilterWidget)
    {
        if (ModFilterWidget->objectName().isEmpty())
            ModFilterWidget->setObjectName("ModFilterWidget");
        ModFilterWidget->resize(310, 600);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ModFilterWidget->sizePolicy().hasHeightForWidth());
        ModFilterWidget->setSizePolicy(sizePolicy);
        ModFilterWidget->setMinimumSize(QSize(275, 0));
        ModFilterWidget->setMaximumSize(QSize(310, 16777215));
        verticalLayout_2 = new QVBoxLayout(ModFilterWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(ModFilterWidget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setMinimumSize(QSize(275, 0));
        scrollArea->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContentsOnFirstShow);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 294, 817));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setObjectName("verticalLayout");
        categoryGroup = new QGroupBox(scrollAreaWidgetContents);
        categoryGroup->setObjectName("categoryGroup");
        categoryGroup->setCheckable(false);
        categoryGroup->setChecked(false);

        verticalLayout->addWidget(categoryGroup);

        loaderGroup = new QGroupBox(scrollAreaWidgetContents);
        loaderGroup->setObjectName("loaderGroup");
        loaderGroup->setCheckable(false);
        loaderGroup->setChecked(false);
        verticalLayout_4 = new QVBoxLayout(loaderGroup);
        verticalLayout_4->setObjectName("verticalLayout_4");
        neoForge = new QCheckBox(loaderGroup);
        neoForge->setObjectName("neoForge");

        verticalLayout_4->addWidget(neoForge);

        forge = new QCheckBox(loaderGroup);
        forge->setObjectName("forge");

        verticalLayout_4->addWidget(forge);

        fabric = new QCheckBox(loaderGroup);
        fabric->setObjectName("fabric");

        verticalLayout_4->addWidget(fabric);

        quilt = new QCheckBox(loaderGroup);
        quilt->setObjectName("quilt");

        verticalLayout_4->addWidget(quilt);

        showMoreButton = new QPushButton(loaderGroup);
        showMoreButton->setObjectName("showMoreButton");

        verticalLayout_4->addWidget(showMoreButton);

        extendedModLoadersWidget = new QWidget(loaderGroup);
        extendedModLoadersWidget->setObjectName("extendedModLoadersWidget");
        extendedModLoadersWidget->setVisible(false);
        extendedModLoadersLayout = new QVBoxLayout(extendedModLoadersWidget);
        extendedModLoadersLayout->setObjectName("extendedModLoadersLayout");
        extendedModLoadersLayout->setContentsMargins(0, 0, 0, 0);
        liteLoader = new QCheckBox(extendedModLoadersWidget);
        liteLoader->setObjectName("liteLoader");

        extendedModLoadersLayout->addWidget(liteLoader);

        babric = new QCheckBox(extendedModLoadersWidget);
        babric->setObjectName("babric");

        extendedModLoadersLayout->addWidget(babric);

        btaBabric = new QCheckBox(extendedModLoadersWidget);
        btaBabric->setObjectName("btaBabric");

        extendedModLoadersLayout->addWidget(btaBabric);

        legacyFabric = new QCheckBox(extendedModLoadersWidget);
        legacyFabric->setObjectName("legacyFabric");

        extendedModLoadersLayout->addWidget(legacyFabric);

        ornithe = new QCheckBox(extendedModLoadersWidget);
        ornithe->setObjectName("ornithe");

        extendedModLoadersLayout->addWidget(ornithe);

        rift = new QCheckBox(extendedModLoadersWidget);
        rift->setObjectName("rift");

        extendedModLoadersLayout->addWidget(rift);


        verticalLayout_4->addWidget(extendedModLoadersWidget);


        verticalLayout->addWidget(loaderGroup);

        minecraftVersionGroup = new QGroupBox(scrollAreaWidgetContents);
        minecraftVersionGroup->setObjectName("minecraftVersionGroup");
        minecraftVersionGroup->setCheckable(false);
        minecraftVersionGroup->setChecked(false);
        verticalLayout_3 = new QVBoxLayout(minecraftVersionGroup);
        verticalLayout_3->setObjectName("verticalLayout_3");
        showAllVersions = new QCheckBox(minecraftVersionGroup);
        showAllVersions->setObjectName("showAllVersions");

        verticalLayout_3->addWidget(showAllVersions);

        versions = new CheckComboBox(minecraftVersionGroup);
        versions->setObjectName("versions");

        verticalLayout_3->addWidget(versions);

        version = new QComboBox(minecraftVersionGroup);
        version->setObjectName("version");

        verticalLayout_3->addWidget(version);


        verticalLayout->addWidget(minecraftVersionGroup);

        environmentGroup = new QGroupBox(scrollAreaWidgetContents);
        environmentGroup->setObjectName("environmentGroup");
        environmentGroup->setCheckable(false);
        environmentGroup->setChecked(false);
        verticalLayout_5 = new QVBoxLayout(environmentGroup);
        verticalLayout_5->setObjectName("verticalLayout_5");
        clientSide = new QCheckBox(environmentGroup);
        clientSide->setObjectName("clientSide");

        verticalLayout_5->addWidget(clientSide);

        serverSide = new QCheckBox(environmentGroup);
        serverSide->setObjectName("serverSide");

        verticalLayout_5->addWidget(serverSide);


        verticalLayout->addWidget(environmentGroup);

        hideInstalled = new QCheckBox(scrollAreaWidgetContents);
        hideInstalled->setObjectName("hideInstalled");

        verticalLayout->addWidget(hideInstalled);

        openSource = new QCheckBox(scrollAreaWidgetContents);
        openSource->setObjectName("openSource");

        verticalLayout->addWidget(openSource);

        releaseGroup = new QGroupBox(scrollAreaWidgetContents);
        releaseGroup->setObjectName("releaseGroup");
        verticalLayout_6 = new QVBoxLayout(releaseGroup);
        verticalLayout_6->setObjectName("verticalLayout_6");
        releaseCb = new QCheckBox(releaseGroup);
        releaseCb->setObjectName("releaseCb");

        verticalLayout_6->addWidget(releaseCb);

        betaCb = new QCheckBox(releaseGroup);
        betaCb->setObjectName("betaCb");

        verticalLayout_6->addWidget(betaCb);

        alphaCb = new QCheckBox(releaseGroup);
        alphaCb->setObjectName("alphaCb");

        verticalLayout_6->addWidget(alphaCb);

        unknownCb = new QCheckBox(releaseGroup);
        unknownCb->setObjectName("unknownCb");

        verticalLayout_6->addWidget(unknownCb);


        verticalLayout->addWidget(releaseGroup);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_2->addWidget(scrollArea);


        retranslateUi(ModFilterWidget);

        QMetaObject::connectSlotsByName(ModFilterWidget);
    } // setupUi

    void retranslateUi(QWidget *ModFilterWidget)
    {
        ModFilterWidget->setWindowTitle(QCoreApplication::translate("ModFilterWidget", "Form", nullptr));
        categoryGroup->setTitle(QCoreApplication::translate("ModFilterWidget", "Categories", nullptr));
        loaderGroup->setTitle(QCoreApplication::translate("ModFilterWidget", "Loaders", nullptr));
        neoForge->setText(QCoreApplication::translate("ModFilterWidget", "NeoForge", nullptr));
        forge->setText(QCoreApplication::translate("ModFilterWidget", "Forge", nullptr));
        fabric->setText(QCoreApplication::translate("ModFilterWidget", "Fabric", nullptr));
        quilt->setText(QCoreApplication::translate("ModFilterWidget", "Quilt", nullptr));
        showMoreButton->setText(QCoreApplication::translate("ModFilterWidget", "Show More", nullptr));
        liteLoader->setText(QCoreApplication::translate("ModFilterWidget", "LiteLoader", nullptr));
        babric->setText(QCoreApplication::translate("ModFilterWidget", "Babric", nullptr));
        btaBabric->setText(QCoreApplication::translate("ModFilterWidget", "BTA (Babric)", nullptr));
        legacyFabric->setText(QCoreApplication::translate("ModFilterWidget", "Legacy Fabric", nullptr));
        ornithe->setText(QCoreApplication::translate("ModFilterWidget", "Ornithe", nullptr));
        rift->setText(QCoreApplication::translate("ModFilterWidget", "Rift", nullptr));
        minecraftVersionGroup->setTitle(QCoreApplication::translate("ModFilterWidget", "Versions", nullptr));
        showAllVersions->setText(QCoreApplication::translate("ModFilterWidget", "Show all versions", nullptr));
        environmentGroup->setTitle(QCoreApplication::translate("ModFilterWidget", "Environments", nullptr));
        clientSide->setText(QCoreApplication::translate("ModFilterWidget", "Client", nullptr));
        serverSide->setText(QCoreApplication::translate("ModFilterWidget", "Server", nullptr));
        hideInstalled->setText(QCoreApplication::translate("ModFilterWidget", "Hide installed items", nullptr));
        openSource->setText(QCoreApplication::translate("ModFilterWidget", "Open source only", nullptr));
        releaseGroup->setTitle(QCoreApplication::translate("ModFilterWidget", "Release type", nullptr));
        releaseCb->setText(QCoreApplication::translate("ModFilterWidget", "Release", nullptr));
        betaCb->setText(QCoreApplication::translate("ModFilterWidget", "Beta", nullptr));
        alphaCb->setText(QCoreApplication::translate("ModFilterWidget", "Alpha", nullptr));
        unknownCb->setText(QCoreApplication::translate("ModFilterWidget", "Unknown", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ModFilterWidget: public Ui_ModFilterWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODFILTERWIDGET_H
