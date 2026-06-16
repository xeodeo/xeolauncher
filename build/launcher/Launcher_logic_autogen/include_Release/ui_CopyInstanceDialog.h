/********************************************************************************
** Form generated from reading UI file 'CopyInstanceDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COPYINSTANCEDIALOG_H
#define UI_COPYINSTANCEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CopyInstanceDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *iconBtnLayout;
    QSpacerItem *iconBtnLeftSpacer;
    QToolButton *iconButton;
    QSpacerItem *iconBtnRightSpacer;
    QLineEdit *instNameTextBox;
    QFrame *line;
    QGridLayout *groupDropdownLayout;
    QLabel *labelVersion_3;
    QComboBox *groupBox;
    QGroupBox *copyOptionsGroup;
    QGridLayout *copyOptionsLayout;
    QCheckBox *keepPlaytimeCheckbox;
    QCheckBox *copyModsCheckbox;
    QCheckBox *copyResPacksCheckbox;
    QCheckBox *copyGameOptionsCheckbox;
    QCheckBox *copyShaderPacksCheckbox;
    QCheckBox *copyServersCheckbox;
    QCheckBox *copySavesCheckbox;
    QCheckBox *copyScreenshotsCheckbox;
    QCheckBox *selectAllCheckbox;
    QFrame *line_2;
    QLabel *advancedOptionsLabel;
    QVBoxLayout *copyModeLayout;
    QGroupBox *linkFilesGroup;
    QVBoxLayout *linkOptionsLayout;
    QLabel *linkOptionsLabel;
    QGridLayout *linkOptionsGridLayout;
    QCheckBox *recursiveLinkCheckbox;
    QCheckBox *dontLinkSavesCheckbox;
    QCheckBox *hardLinksCheckbox;
    QCheckBox *symbolicLinksCheckbox;
    QGroupBox *horizontalGroupBox;
    QHBoxLayout *useCloneLayout;
    QCheckBox *useCloneCheckbox;
    QSpacerItem *CoWSpacer;
    QLabel *cloneSupportedLabel;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *CopyInstanceDialog)
    {
        if (CopyInstanceDialog->objectName().isEmpty())
            CopyInstanceDialog->setObjectName("CopyInstanceDialog");
        CopyInstanceDialog->setWindowModality(Qt::ApplicationModal);
        CopyInstanceDialog->resize(575, 695);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/toolbar/copy"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        CopyInstanceDialog->setWindowIcon(icon);
        CopyInstanceDialog->setModal(true);
        verticalLayout = new QVBoxLayout(CopyInstanceDialog);
        verticalLayout->setObjectName("verticalLayout");
        iconBtnLayout = new QHBoxLayout();
        iconBtnLayout->setObjectName("iconBtnLayout");
        iconBtnLeftSpacer = new QSpacerItem(60, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        iconBtnLayout->addItem(iconBtnLeftSpacer);

        iconButton = new QToolButton(CopyInstanceDialog);
        iconButton->setObjectName("iconButton");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/instances/grass"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        iconButton->setIcon(icon1);
        iconButton->setIconSize(QSize(80, 80));

        iconBtnLayout->addWidget(iconButton);

        iconBtnRightSpacer = new QSpacerItem(60, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        iconBtnLayout->addItem(iconBtnRightSpacer);


        verticalLayout->addLayout(iconBtnLayout);

        instNameTextBox = new QLineEdit(CopyInstanceDialog);
        instNameTextBox->setObjectName("instNameTextBox");

        verticalLayout->addWidget(instNameTextBox);

        line = new QFrame(CopyInstanceDialog);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout->addWidget(line);

        groupDropdownLayout = new QGridLayout();
        groupDropdownLayout->setObjectName("groupDropdownLayout");
        groupDropdownLayout->setVerticalSpacing(6);
        labelVersion_3 = new QLabel(CopyInstanceDialog);
        labelVersion_3->setObjectName("labelVersion_3");

        groupDropdownLayout->addWidget(labelVersion_3, 0, 0, 1, 1);

        groupBox = new QComboBox(CopyInstanceDialog);
        groupBox->setObjectName("groupBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setEditable(true);

        groupDropdownLayout->addWidget(groupBox, 0, 1, 1, 2);


        verticalLayout->addLayout(groupDropdownLayout);

        copyOptionsGroup = new QGroupBox(CopyInstanceDialog);
        copyOptionsGroup->setObjectName("copyOptionsGroup");
        copyOptionsLayout = new QGridLayout(copyOptionsGroup);
        copyOptionsLayout->setObjectName("copyOptionsLayout");
        keepPlaytimeCheckbox = new QCheckBox(copyOptionsGroup);
        keepPlaytimeCheckbox->setObjectName("keepPlaytimeCheckbox");

        copyOptionsLayout->addWidget(keepPlaytimeCheckbox, 1, 0, 1, 1);

        copyModsCheckbox = new QCheckBox(copyOptionsGroup);
        copyModsCheckbox->setObjectName("copyModsCheckbox");

        copyOptionsLayout->addWidget(copyModsCheckbox, 6, 1, 1, 1);

        copyResPacksCheckbox = new QCheckBox(copyOptionsGroup);
        copyResPacksCheckbox->setObjectName("copyResPacksCheckbox");
        copyResPacksCheckbox->setEnabled(true);

        copyOptionsLayout->addWidget(copyResPacksCheckbox, 6, 0, 1, 1);

        copyGameOptionsCheckbox = new QCheckBox(copyOptionsGroup);
        copyGameOptionsCheckbox->setObjectName("copyGameOptionsCheckbox");

        copyOptionsLayout->addWidget(copyGameOptionsCheckbox, 5, 0, 1, 1);

        copyShaderPacksCheckbox = new QCheckBox(copyOptionsGroup);
        copyShaderPacksCheckbox->setObjectName("copyShaderPacksCheckbox");

        copyOptionsLayout->addWidget(copyShaderPacksCheckbox, 3, 1, 1, 1);

        copyServersCheckbox = new QCheckBox(copyOptionsGroup);
        copyServersCheckbox->setObjectName("copyServersCheckbox");

        copyOptionsLayout->addWidget(copyServersCheckbox, 5, 1, 1, 1);

        copySavesCheckbox = new QCheckBox(copyOptionsGroup);
        copySavesCheckbox->setObjectName("copySavesCheckbox");

        copyOptionsLayout->addWidget(copySavesCheckbox, 3, 0, 1, 1);

        copyScreenshotsCheckbox = new QCheckBox(copyOptionsGroup);
        copyScreenshotsCheckbox->setObjectName("copyScreenshotsCheckbox");

        copyOptionsLayout->addWidget(copyScreenshotsCheckbox, 1, 1, 1, 1);

        selectAllCheckbox = new QCheckBox(copyOptionsGroup);
        selectAllCheckbox->setObjectName("selectAllCheckbox");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(selectAllCheckbox->sizePolicy().hasHeightForWidth());
        selectAllCheckbox->setSizePolicy(sizePolicy1);
        selectAllCheckbox->setLayoutDirection(Qt::LeftToRight);
        selectAllCheckbox->setChecked(false);

        copyOptionsLayout->addWidget(selectAllCheckbox, 7, 1, 1, 1);


        verticalLayout->addWidget(copyOptionsGroup);

        line_2 = new QFrame(CopyInstanceDialog);
        line_2->setObjectName("line_2");
        line_2->setFrameShape(QFrame::Shape::HLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout->addWidget(line_2);

        advancedOptionsLabel = new QLabel(CopyInstanceDialog);
        advancedOptionsLabel->setObjectName("advancedOptionsLabel");
        advancedOptionsLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(advancedOptionsLabel);

        copyModeLayout = new QVBoxLayout();
        copyModeLayout->setObjectName("copyModeLayout");
        linkFilesGroup = new QGroupBox(CopyInstanceDialog);
        linkFilesGroup->setObjectName("linkFilesGroup");
        linkFilesGroup->setFlat(false);
        linkFilesGroup->setCheckable(false);
        linkFilesGroup->setChecked(false);
        linkOptionsLayout = new QVBoxLayout(linkFilesGroup);
        linkOptionsLayout->setObjectName("linkOptionsLayout");
        linkOptionsLabel = new QLabel(linkFilesGroup);
        linkOptionsLabel->setObjectName("linkOptionsLabel");
        linkOptionsLabel->setAlignment(Qt::AlignCenter);

        linkOptionsLayout->addWidget(linkOptionsLabel);

        linkOptionsGridLayout = new QGridLayout();
        linkOptionsGridLayout->setObjectName("linkOptionsGridLayout");
        linkOptionsGridLayout->setContentsMargins(6, 6, 6, 6);
        recursiveLinkCheckbox = new QCheckBox(linkFilesGroup);
        recursiveLinkCheckbox->setObjectName("recursiveLinkCheckbox");
        recursiveLinkCheckbox->setEnabled(false);

        linkOptionsGridLayout->addWidget(recursiveLinkCheckbox, 2, 1, 1, 1);

        dontLinkSavesCheckbox = new QCheckBox(linkFilesGroup);
        dontLinkSavesCheckbox->setObjectName("dontLinkSavesCheckbox");
        dontLinkSavesCheckbox->setEnabled(false);
        dontLinkSavesCheckbox->setChecked(false);

        linkOptionsGridLayout->addWidget(dontLinkSavesCheckbox, 3, 1, 1, 1);

        hardLinksCheckbox = new QCheckBox(linkFilesGroup);
        hardLinksCheckbox->setObjectName("hardLinksCheckbox");
        hardLinksCheckbox->setEnabled(true);

        linkOptionsGridLayout->addWidget(hardLinksCheckbox, 3, 0, 1, 1);

        symbolicLinksCheckbox = new QCheckBox(linkFilesGroup);
        symbolicLinksCheckbox->setObjectName("symbolicLinksCheckbox");

        linkOptionsGridLayout->addWidget(symbolicLinksCheckbox, 2, 0, 1, 1);


        linkOptionsLayout->addLayout(linkOptionsGridLayout);


        copyModeLayout->addWidget(linkFilesGroup);

        horizontalGroupBox = new QGroupBox(CopyInstanceDialog);
        horizontalGroupBox->setObjectName("horizontalGroupBox");
        useCloneLayout = new QHBoxLayout(horizontalGroupBox);
        useCloneLayout->setObjectName("useCloneLayout");
        useCloneCheckbox = new QCheckBox(horizontalGroupBox);
        useCloneCheckbox->setObjectName("useCloneCheckbox");
        useCloneCheckbox->setEnabled(false);

        useCloneLayout->addWidget(useCloneCheckbox);

        CoWSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        useCloneLayout->addItem(CoWSpacer);

        cloneSupportedLabel = new QLabel(horizontalGroupBox);
        cloneSupportedLabel->setObjectName("cloneSupportedLabel");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(cloneSupportedLabel->sizePolicy().hasHeightForWidth());
        cloneSupportedLabel->setSizePolicy(sizePolicy2);
        cloneSupportedLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        cloneSupportedLabel->setMargin(4);

        useCloneLayout->addWidget(cloneSupportedLabel);


        copyModeLayout->addWidget(horizontalGroupBox);


        verticalLayout->addLayout(copyModeLayout);

        buttonBox = new QDialogButtonBox(CopyInstanceDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

#if QT_CONFIG(shortcut)
        labelVersion_3->setBuddy(groupBox);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(iconButton, instNameTextBox);
        QWidget::setTabOrder(instNameTextBox, groupBox);
        QWidget::setTabOrder(groupBox, keepPlaytimeCheckbox);
        QWidget::setTabOrder(keepPlaytimeCheckbox, copyScreenshotsCheckbox);
        QWidget::setTabOrder(copyScreenshotsCheckbox, copySavesCheckbox);
        QWidget::setTabOrder(copySavesCheckbox, copyShaderPacksCheckbox);
        QWidget::setTabOrder(copyShaderPacksCheckbox, copyGameOptionsCheckbox);
        QWidget::setTabOrder(copyGameOptionsCheckbox, copyServersCheckbox);
        QWidget::setTabOrder(copyServersCheckbox, copyResPacksCheckbox);
        QWidget::setTabOrder(copyResPacksCheckbox, copyModsCheckbox);
        QWidget::setTabOrder(copyModsCheckbox, symbolicLinksCheckbox);
        QWidget::setTabOrder(symbolicLinksCheckbox, recursiveLinkCheckbox);
        QWidget::setTabOrder(recursiveLinkCheckbox, hardLinksCheckbox);
        QWidget::setTabOrder(hardLinksCheckbox, dontLinkSavesCheckbox);
        QWidget::setTabOrder(dontLinkSavesCheckbox, useCloneCheckbox);

        retranslateUi(CopyInstanceDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, CopyInstanceDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, CopyInstanceDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(CopyInstanceDialog);
    } // setupUi

    void retranslateUi(QDialog *CopyInstanceDialog)
    {
        CopyInstanceDialog->setWindowTitle(QCoreApplication::translate("CopyInstanceDialog", "Copy Instance", nullptr));
        instNameTextBox->setPlaceholderText(QCoreApplication::translate("CopyInstanceDialog", "Name", nullptr));
        labelVersion_3->setText(QCoreApplication::translate("CopyInstanceDialog", "&Group", nullptr));
        copyOptionsGroup->setTitle(QCoreApplication::translate("CopyInstanceDialog", "Instance Copy Options", nullptr));
        keepPlaytimeCheckbox->setText(QCoreApplication::translate("CopyInstanceDialog", "Keep play time", nullptr));
#if QT_CONFIG(tooltip)
        copyModsCheckbox->setToolTip(QCoreApplication::translate("CopyInstanceDialog", "Disabling this will still keep the mod loader (ex: Fabric, Quilt, etc.) but erase the mods folder and their configs.", nullptr));
#endif // QT_CONFIG(tooltip)
        copyModsCheckbox->setText(QCoreApplication::translate("CopyInstanceDialog", "Copy mods", nullptr));
        copyResPacksCheckbox->setText(QCoreApplication::translate("CopyInstanceDialog", "Copy resource packs", nullptr));
#if QT_CONFIG(tooltip)
        copyGameOptionsCheckbox->setToolTip(QCoreApplication::translate("CopyInstanceDialog", "Copy the in-game options like FOV, max framerate, etc.", nullptr));
#endif // QT_CONFIG(tooltip)
        copyGameOptionsCheckbox->setText(QCoreApplication::translate("CopyInstanceDialog", "Copy game options", nullptr));
        copyShaderPacksCheckbox->setText(QCoreApplication::translate("CopyInstanceDialog", "Copy shader packs", nullptr));
        copyServersCheckbox->setText(QCoreApplication::translate("CopyInstanceDialog", "Copy servers", nullptr));
        copySavesCheckbox->setText(QCoreApplication::translate("CopyInstanceDialog", "Copy saves", nullptr));
        copyScreenshotsCheckbox->setText(QCoreApplication::translate("CopyInstanceDialog", "Copy screenshots", nullptr));
        selectAllCheckbox->setText(QCoreApplication::translate("CopyInstanceDialog", "Select all", nullptr));
        advancedOptionsLabel->setText(QCoreApplication::translate("CopyInstanceDialog", "Advanced Copy Options", nullptr));
#if QT_CONFIG(tooltip)
        linkFilesGroup->setToolTip(QCoreApplication::translate("CopyInstanceDialog", "Use symbolic or hard links instead of copying files.", nullptr));
#endif // QT_CONFIG(tooltip)
        linkFilesGroup->setTitle(QCoreApplication::translate("CopyInstanceDialog", "Symbolic and Hard Link Options", nullptr));
        linkOptionsLabel->setText(QCoreApplication::translate("CopyInstanceDialog", "Links are supported on most filesystems except FAT", nullptr));
#if QT_CONFIG(tooltip)
        recursiveLinkCheckbox->setToolTip(QCoreApplication::translate("CopyInstanceDialog", "Link each resource individually instead of linking whole folders at once", nullptr));
#endif // QT_CONFIG(tooltip)
        recursiveLinkCheckbox->setText(QCoreApplication::translate("CopyInstanceDialog", "Link files recursively", nullptr));
#if QT_CONFIG(tooltip)
        dontLinkSavesCheckbox->setToolTip(QCoreApplication::translate("CopyInstanceDialog", "If \"copy saves\" is selected world save data will be copied instead of linked and thus not shared between instances.", nullptr));
#endif // QT_CONFIG(tooltip)
        dontLinkSavesCheckbox->setText(QCoreApplication::translate("CopyInstanceDialog", "Don't link saves", nullptr));
#if QT_CONFIG(tooltip)
        hardLinksCheckbox->setToolTip(QCoreApplication::translate("CopyInstanceDialog", "Use hard links instead of copying files.", nullptr));
#endif // QT_CONFIG(tooltip)
        hardLinksCheckbox->setText(QCoreApplication::translate("CopyInstanceDialog", "Use hard links", nullptr));
#if QT_CONFIG(tooltip)
        symbolicLinksCheckbox->setToolTip(QCoreApplication::translate("CopyInstanceDialog", "Use symbolic links instead of copying files.", nullptr));
#endif // QT_CONFIG(tooltip)
        symbolicLinksCheckbox->setText(QCoreApplication::translate("CopyInstanceDialog", "Use symbolic links", nullptr));
        horizontalGroupBox->setTitle(QCoreApplication::translate("CopyInstanceDialog", "CoW (Copy-on-Write) Options", nullptr));
#if QT_CONFIG(tooltip)
        useCloneCheckbox->setToolTip(QCoreApplication::translate("CopyInstanceDialog", "Files cloned with reflinks take up no extra space until they are modified.", nullptr));
#endif // QT_CONFIG(tooltip)
        useCloneCheckbox->setText(QCoreApplication::translate("CopyInstanceDialog", "Clone instead of copying", nullptr));
        cloneSupportedLabel->setText(QCoreApplication::translate("CopyInstanceDialog", "Your filesystem and/or OS doesn't support reflinks", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CopyInstanceDialog: public Ui_CopyInstanceDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COPYINSTANCEDIALOG_H
