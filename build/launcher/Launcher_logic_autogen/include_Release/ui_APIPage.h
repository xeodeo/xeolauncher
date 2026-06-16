/********************************************************************************
** Form generated from reading UI file 'APIPage.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APIPAGE_H
#define UI_APIPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_APIPage
{
public:
    QVBoxLayout *verticalLayout_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_paste;
    QVBoxLayout *verticalLayout_3;
    QLabel *pasteServiceTypeLabel;
    QComboBox *pasteTypeComboBox;
    QLabel *baseURLLabel;
    QLineEdit *baseURLEntry;
    QLabel *baseURLNote;
    QGroupBox *groupBox_meta;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_6;
    QLineEdit *metaURL;
    QCheckBox *metaRefreshOnLaunchCB;
    QGroupBox *groupBox_assets;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_7;
    QLineEdit *resourceURL;
    QGroupBox *groupBox_fmllibs;
    QVBoxLayout *verticalLayout_8;
    QLabel *label;
    QLineEdit *legacyFMLLibsURL;
    QGroupBox *groupBox_ua;
    QVBoxLayout *verticalLayout_7;
    QLineEdit *userAgentLineEdit;
    QLabel *userAgentLabel;
    QGroupBox *groupBox_msa;
    QVBoxLayout *verticalLayout_4;
    QLabel *msaClientIDLabel;
    QLineEdit *msaClientID;
    QLabel *label_3;
    QSpacerItem *verticalSpacer;
    QLabel *modrinthTokenLabel;
    QLineEdit *modrinthToken;
    QLabel *label_8;
    QSpacerItem *verticalSpacer_4;
    QLabel *flameKeyLabel;
    QLineEdit *flameKey;
    QLabel *label_10;
    QCheckBox *FallbackMRBlockedMods;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_12;
    QLineEdit *technicClientID;
    QLabel *label_11;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *APIPage)
    {
        if (APIPage->objectName().isEmpty())
            APIPage->setObjectName("APIPage");
        APIPage->resize(841, 620);
        verticalLayout_2 = new QVBoxLayout(APIPage);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(APIPage);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 825, 1236));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setObjectName("verticalLayout");
        groupBox_paste = new QGroupBox(scrollAreaWidgetContents);
        groupBox_paste->setObjectName("groupBox_paste");
        verticalLayout_3 = new QVBoxLayout(groupBox_paste);
        verticalLayout_3->setObjectName("verticalLayout_3");
        pasteServiceTypeLabel = new QLabel(groupBox_paste);
        pasteServiceTypeLabel->setObjectName("pasteServiceTypeLabel");

        verticalLayout_3->addWidget(pasteServiceTypeLabel);

        pasteTypeComboBox = new QComboBox(groupBox_paste);
        pasteTypeComboBox->setObjectName("pasteTypeComboBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pasteTypeComboBox->sizePolicy().hasHeightForWidth());
        pasteTypeComboBox->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(pasteTypeComboBox);

        baseURLLabel = new QLabel(groupBox_paste);
        baseURLLabel->setObjectName("baseURLLabel");

        verticalLayout_3->addWidget(baseURLLabel);

        baseURLEntry = new QLineEdit(groupBox_paste);
        baseURLEntry->setObjectName("baseURLEntry");
        baseURLEntry->setClearButtonEnabled(true);

        verticalLayout_3->addWidget(baseURLEntry);

        baseURLNote = new QLabel(groupBox_paste);
        baseURLNote->setObjectName("baseURLNote");
        baseURLNote->setWordWrap(true);

        verticalLayout_3->addWidget(baseURLNote);


        verticalLayout->addWidget(groupBox_paste);

        groupBox_meta = new QGroupBox(scrollAreaWidgetContents);
        groupBox_meta->setObjectName("groupBox_meta");
        verticalLayout_5 = new QVBoxLayout(groupBox_meta);
        verticalLayout_5->setObjectName("verticalLayout_5");
        label_6 = new QLabel(groupBox_meta);
        label_6->setObjectName("label_6");
        label_6->setTextFormat(Qt::RichText);
        label_6->setWordWrap(true);
        label_6->setOpenExternalLinks(true);

        verticalLayout_5->addWidget(label_6);

        metaURL = new QLineEdit(groupBox_meta);
        metaURL->setObjectName("metaURL");

        verticalLayout_5->addWidget(metaURL);

        metaRefreshOnLaunchCB = new QCheckBox(groupBox_meta);
        metaRefreshOnLaunchCB->setObjectName("metaRefreshOnLaunchCB");

        verticalLayout_5->addWidget(metaRefreshOnLaunchCB);


        verticalLayout->addWidget(groupBox_meta);

        groupBox_assets = new QGroupBox(scrollAreaWidgetContents);
        groupBox_assets->setObjectName("groupBox_assets");
        verticalLayout_6 = new QVBoxLayout(groupBox_assets);
        verticalLayout_6->setObjectName("verticalLayout_6");
        label_7 = new QLabel(groupBox_assets);
        label_7->setObjectName("label_7");
        label_7->setTextFormat(Qt::RichText);
        label_7->setWordWrap(true);
        label_7->setOpenExternalLinks(true);

        verticalLayout_6->addWidget(label_7);

        resourceURL = new QLineEdit(groupBox_assets);
        resourceURL->setObjectName("resourceURL");

        verticalLayout_6->addWidget(resourceURL);


        verticalLayout->addWidget(groupBox_assets);

        groupBox_fmllibs = new QGroupBox(scrollAreaWidgetContents);
        groupBox_fmllibs->setObjectName("groupBox_fmllibs");
        verticalLayout_8 = new QVBoxLayout(groupBox_fmllibs);
        verticalLayout_8->setObjectName("verticalLayout_8");
        label = new QLabel(groupBox_fmllibs);
        label->setObjectName("label");
        label->setTextFormat(Qt::RichText);
        label->setWordWrap(true);
        label->setOpenExternalLinks(true);

        verticalLayout_8->addWidget(label);

        legacyFMLLibsURL = new QLineEdit(groupBox_fmllibs);
        legacyFMLLibsURL->setObjectName("legacyFMLLibsURL");

        verticalLayout_8->addWidget(legacyFMLLibsURL);


        verticalLayout->addWidget(groupBox_fmllibs);

        groupBox_ua = new QGroupBox(scrollAreaWidgetContents);
        groupBox_ua->setObjectName("groupBox_ua");
        groupBox_ua->setMinimumSize(QSize(0, 0));
        verticalLayout_7 = new QVBoxLayout(groupBox_ua);
        verticalLayout_7->setObjectName("verticalLayout_7");
        userAgentLineEdit = new QLineEdit(groupBox_ua);
        userAgentLineEdit->setObjectName("userAgentLineEdit");

        verticalLayout_7->addWidget(userAgentLineEdit);

        userAgentLabel = new QLabel(groupBox_ua);
        userAgentLabel->setObjectName("userAgentLabel");
        userAgentLabel->setWordWrap(true);

        verticalLayout_7->addWidget(userAgentLabel);


        verticalLayout->addWidget(groupBox_ua);

        groupBox_msa = new QGroupBox(scrollAreaWidgetContents);
        groupBox_msa->setObjectName("groupBox_msa");
        verticalLayout_4 = new QVBoxLayout(groupBox_msa);
        verticalLayout_4->setObjectName("verticalLayout_4");
        msaClientIDLabel = new QLabel(groupBox_msa);
        msaClientIDLabel->setObjectName("msaClientIDLabel");
        msaClientIDLabel->setTextFormat(Qt::RichText);
        msaClientIDLabel->setWordWrap(true);
        msaClientIDLabel->setOpenExternalLinks(true);

        verticalLayout_4->addWidget(msaClientIDLabel);

        msaClientID = new QLineEdit(groupBox_msa);
        msaClientID->setObjectName("msaClientID");

        verticalLayout_4->addWidget(msaClientID);

        label_3 = new QLabel(groupBox_msa);
        label_3->setObjectName("label_3");
        label_3->setTextFormat(Qt::RichText);
        label_3->setWordWrap(true);

        verticalLayout_4->addWidget(label_3);

        verticalSpacer = new QSpacerItem(0, 6, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_4->addItem(verticalSpacer);

        modrinthTokenLabel = new QLabel(groupBox_msa);
        modrinthTokenLabel->setObjectName("modrinthTokenLabel");
        modrinthTokenLabel->setTextFormat(Qt::RichText);
        modrinthTokenLabel->setWordWrap(true);
        modrinthTokenLabel->setOpenExternalLinks(true);

        verticalLayout_4->addWidget(modrinthTokenLabel);

        modrinthToken = new QLineEdit(groupBox_msa);
        modrinthToken->setObjectName("modrinthToken");
        modrinthToken->setEnabled(true);

        verticalLayout_4->addWidget(modrinthToken);

        label_8 = new QLabel(groupBox_msa);
        label_8->setObjectName("label_8");
        label_8->setWordWrap(true);
        label_8->setOpenExternalLinks(true);

        verticalLayout_4->addWidget(label_8);

        verticalSpacer_4 = new QSpacerItem(0, 6, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_4->addItem(verticalSpacer_4);

        flameKeyLabel = new QLabel(groupBox_msa);
        flameKeyLabel->setObjectName("flameKeyLabel");
        flameKeyLabel->setTextFormat(Qt::RichText);
        flameKeyLabel->setWordWrap(true);
        flameKeyLabel->setOpenExternalLinks(true);

        verticalLayout_4->addWidget(flameKeyLabel);

        flameKey = new QLineEdit(groupBox_msa);
        flameKey->setObjectName("flameKey");
        flameKey->setEnabled(true);

        verticalLayout_4->addWidget(flameKey);

        label_10 = new QLabel(groupBox_msa);
        label_10->setObjectName("label_10");
        label_10->setWordWrap(true);

        verticalLayout_4->addWidget(label_10);

        FallbackMRBlockedMods = new QCheckBox(groupBox_msa);
        FallbackMRBlockedMods->setObjectName("FallbackMRBlockedMods");

        verticalLayout_4->addWidget(FallbackMRBlockedMods);

        verticalSpacer_3 = new QSpacerItem(0, 6, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_4->addItem(verticalSpacer_3);

        label_12 = new QLabel(groupBox_msa);
        label_12->setObjectName("label_12");

        verticalLayout_4->addWidget(label_12);

        technicClientID = new QLineEdit(groupBox_msa);
        technicClientID->setObjectName("technicClientID");

        verticalLayout_4->addWidget(technicClientID);

        label_11 = new QLabel(groupBox_msa);
        label_11->setObjectName("label_11");
        label_11->setWordWrap(true);

        verticalLayout_4->addWidget(label_11);


        verticalLayout->addWidget(groupBox_msa);

        verticalSpacer_2 = new QSpacerItem(0, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_2->addWidget(scrollArea);

#if QT_CONFIG(shortcut)
        pasteServiceTypeLabel->setBuddy(pasteTypeComboBox);
        baseURLLabel->setBuddy(baseURLEntry);
        msaClientIDLabel->setBuddy(msaClientID);
        modrinthTokenLabel->setBuddy(modrinthToken);
        flameKeyLabel->setBuddy(flameKey);
        label_12->setBuddy(technicClientID);
#endif // QT_CONFIG(shortcut)

        retranslateUi(APIPage);

        QMetaObject::connectSlotsByName(APIPage);
    } // setupUi

    void retranslateUi(QWidget *APIPage)
    {
        groupBox_paste->setTitle(QCoreApplication::translate("APIPage", "&Pastebin Service", nullptr));
        pasteServiceTypeLabel->setText(QCoreApplication::translate("APIPage", "Paste Service &Type", nullptr));
        baseURLLabel->setText(QCoreApplication::translate("APIPage", "Base &URL", nullptr));
        baseURLEntry->setPlaceholderText(QCoreApplication::translate("APIPage", "Use Default", nullptr));
        baseURLNote->setText(QCoreApplication::translate("APIPage", "Note: you probably want to change or clear the Base URL after changing the paste service type.", nullptr));
        groupBox_meta->setTitle(QCoreApplication::translate("APIPage", "Meta&data Server", nullptr));
        label_6->setText(QCoreApplication::translate("APIPage", "You can set this to a third-party metadata server to use patched libraries or other hacks.", nullptr));
        metaURL->setPlaceholderText(QCoreApplication::translate("APIPage", "Use Default", nullptr));
        metaRefreshOnLaunchCB->setText(QCoreApplication::translate("APIPage", "Refresh on launch", nullptr));
        groupBox_assets->setTitle(QCoreApplication::translate("APIPage", "Assets Server", nullptr));
        label_7->setText(QCoreApplication::translate("APIPage", "You can set this to another server if you have problems with downloading assets.", nullptr));
        resourceURL->setPlaceholderText(QCoreApplication::translate("APIPage", "Use Default", nullptr));
        groupBox_fmllibs->setTitle(QCoreApplication::translate("APIPage", "Legacy FML Libraries Server", nullptr));
        label->setText(QCoreApplication::translate("APIPage", "You can set this to another server if you have problems with downloading legacy FML libraries (Minecraft 1.5.2 and earlier).", nullptr));
        groupBox_ua->setTitle(QCoreApplication::translate("APIPage", "User Agent", nullptr));
        userAgentLineEdit->setPlaceholderText(QCoreApplication::translate("APIPage", "Use Default", nullptr));
        userAgentLabel->setText(QCoreApplication::translate("APIPage", "Enter a custom User Agent here. The special string $LAUNCHER_VER will be replaced with the version of the launcher.", nullptr));
        groupBox_msa->setTitle(QCoreApplication::translate("APIPage", "&API Keys", nullptr));
        msaClientIDLabel->setText(QCoreApplication::translate("APIPage", "&Microsoft Authentication", nullptr));
        msaClientID->setPlaceholderText(QCoreApplication::translate("APIPage", "Use Default", nullptr));
        label_3->setText(QCoreApplication::translate("APIPage", "Note: you probably don't need to set this if logging in via Microsoft Authentication already works.", nullptr));
        modrinthTokenLabel->setText(QCoreApplication::translate("APIPage", "Mod&rinth", nullptr));
        modrinthToken->setPlaceholderText(QCoreApplication::translate("APIPage", "Use None", nullptr));
        label_8->setText(QCoreApplication::translate("APIPage", "<html><head/><body><p>Note: you only need to set this to access private data. Read the <a href=\"https://docs.modrinth.com/api/#authentication\">documentation</a> for more information.</p></body></html>", nullptr));
        flameKeyLabel->setText(QCoreApplication::translate("APIPage", "&CurseForge", nullptr));
        flameKey->setPlaceholderText(QCoreApplication::translate("APIPage", "Use Default", nullptr));
        label_10->setText(QCoreApplication::translate("APIPage", "Note: you probably don't need to set this if CurseForge already works.", nullptr));
        FallbackMRBlockedMods->setText(QCoreApplication::translate("APIPage", "Enable fallback to Modrinth for blocked mods", nullptr));
        label_12->setText(QCoreApplication::translate("APIPage", "&Technic", nullptr));
        technicClientID->setPlaceholderText(QCoreApplication::translate("APIPage", "Use Default", nullptr));
        label_11->setText(QCoreApplication::translate("APIPage", "<html><head/><body><p>Note: you only need to set this to access private data.</p></body></html>", nullptr));
        (void)APIPage;
    } // retranslateUi

};

namespace Ui {
    class APIPage: public Ui_APIPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APIPAGE_H
