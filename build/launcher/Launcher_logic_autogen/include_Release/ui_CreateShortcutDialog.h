/********************************************************************************
** Form generated from reading UI file 'CreateShortcutDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATESHORTCUTDIALOG_H
#define UI_CREATESHORTCUTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CreateShortcutDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *iconBtnLayout;
    QToolButton *iconButton;
    QGridLayout *iconBtnGridLayout;
    QLabel *saveToLabel;
    QComboBox *saveTargetSelectionBox;
    QLabel *nameLabel;
    QLineEdit *instNameTextBox;
    QCheckBox *overrideAccountCheckbox;
    QGroupBox *accountOptionsGroup;
    QVBoxLayout *accountOptionsLayout;
    QComboBox *accountSelectionBox;
    QCheckBox *targetCheckbox;
    QGroupBox *targetOptionsGroup;
    QGridLayout *targetOptionsGridLayout;
    QVBoxLayout *worldOverlap;
    QRadioButton *worldTarget;
    QComboBox *worldSelectionBox;
    QVBoxLayout *serverOverlap;
    QRadioButton *serverTarget;
    QLabel *serverLabel;
    QLineEdit *serverAddressBox;
    QLabel *noteLabel;
    QLabel *noteLabel2;
    QDialogButtonBox *buttonBox;
    QButtonGroup *targetBtnGroup;

    void setupUi(QDialog *CreateShortcutDialog)
    {
        if (CreateShortcutDialog->objectName().isEmpty())
            CreateShortcutDialog->setObjectName("CreateShortcutDialog");
        CreateShortcutDialog->setWindowModality(Qt::WindowModality::ApplicationModal);
        CreateShortcutDialog->resize(450, 370);
        CreateShortcutDialog->setModal(true);
        verticalLayout = new QVBoxLayout(CreateShortcutDialog);
        verticalLayout->setObjectName("verticalLayout");
        iconBtnLayout = new QHBoxLayout();
        iconBtnLayout->setObjectName("iconBtnLayout");
        iconButton = new QToolButton(CreateShortcutDialog);
        iconButton->setObjectName("iconButton");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/instances/grass"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        iconButton->setIcon(icon);
        iconButton->setIconSize(QSize(80, 80));

        iconBtnLayout->addWidget(iconButton);

        iconBtnGridLayout = new QGridLayout();
        iconBtnGridLayout->setObjectName("iconBtnGridLayout");
        saveToLabel = new QLabel(CreateShortcutDialog);
        saveToLabel->setObjectName("saveToLabel");

        iconBtnGridLayout->addWidget(saveToLabel, 0, 0, 1, 1);

        saveTargetSelectionBox = new QComboBox(CreateShortcutDialog);
        saveTargetSelectionBox->setObjectName("saveTargetSelectionBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(saveTargetSelectionBox->sizePolicy().hasHeightForWidth());
        saveTargetSelectionBox->setSizePolicy(sizePolicy);

        iconBtnGridLayout->addWidget(saveTargetSelectionBox, 0, 1, 1, 1);

        nameLabel = new QLabel(CreateShortcutDialog);
        nameLabel->setObjectName("nameLabel");

        iconBtnGridLayout->addWidget(nameLabel, 1, 0, 1, 1);

        instNameTextBox = new QLineEdit(CreateShortcutDialog);
        instNameTextBox->setObjectName("instNameTextBox");

        iconBtnGridLayout->addWidget(instNameTextBox, 1, 1, 1, 1);


        iconBtnLayout->addLayout(iconBtnGridLayout);


        verticalLayout->addLayout(iconBtnLayout);

        overrideAccountCheckbox = new QCheckBox(CreateShortcutDialog);
        overrideAccountCheckbox->setObjectName("overrideAccountCheckbox");

        verticalLayout->addWidget(overrideAccountCheckbox);

        accountOptionsGroup = new QGroupBox(CreateShortcutDialog);
        accountOptionsGroup->setObjectName("accountOptionsGroup");
        accountOptionsGroup->setEnabled(false);
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(accountOptionsGroup->sizePolicy().hasHeightForWidth());
        accountOptionsGroup->setSizePolicy(sizePolicy1);
        accountOptionsLayout = new QVBoxLayout(accountOptionsGroup);
        accountOptionsLayout->setObjectName("accountOptionsLayout");
        accountSelectionBox = new QComboBox(accountOptionsGroup);
        accountSelectionBox->setObjectName("accountSelectionBox");
        sizePolicy.setHeightForWidth(accountSelectionBox->sizePolicy().hasHeightForWidth());
        accountSelectionBox->setSizePolicy(sizePolicy);

        accountOptionsLayout->addWidget(accountSelectionBox);


        verticalLayout->addWidget(accountOptionsGroup);

        targetCheckbox = new QCheckBox(CreateShortcutDialog);
        targetCheckbox->setObjectName("targetCheckbox");

        verticalLayout->addWidget(targetCheckbox);

        targetOptionsGroup = new QGroupBox(CreateShortcutDialog);
        targetOptionsGroup->setObjectName("targetOptionsGroup");
        targetOptionsGroup->setEnabled(false);
        sizePolicy1.setHeightForWidth(targetOptionsGroup->sizePolicy().hasHeightForWidth());
        targetOptionsGroup->setSizePolicy(sizePolicy1);
        targetOptionsGridLayout = new QGridLayout(targetOptionsGroup);
        targetOptionsGridLayout->setObjectName("targetOptionsGridLayout");
        worldOverlap = new QVBoxLayout();
        worldOverlap->setSpacing(0);
        worldOverlap->setObjectName("worldOverlap");
        worldTarget = new QRadioButton(targetOptionsGroup);
        targetBtnGroup = new QButtonGroup(CreateShortcutDialog);
        targetBtnGroup->setObjectName("targetBtnGroup");
        targetBtnGroup->addButton(worldTarget);
        worldTarget->setObjectName("worldTarget");

        worldOverlap->addWidget(worldTarget);


        targetOptionsGridLayout->addLayout(worldOverlap, 0, 0, 1, 1);

        worldSelectionBox = new QComboBox(targetOptionsGroup);
        worldSelectionBox->setObjectName("worldSelectionBox");
        sizePolicy.setHeightForWidth(worldSelectionBox->sizePolicy().hasHeightForWidth());
        worldSelectionBox->setSizePolicy(sizePolicy);

        targetOptionsGridLayout->addWidget(worldSelectionBox, 0, 1, 1, 1);

        serverOverlap = new QVBoxLayout();
        serverOverlap->setSpacing(0);
        serverOverlap->setObjectName("serverOverlap");
        serverTarget = new QRadioButton(targetOptionsGroup);
        targetBtnGroup->addButton(serverTarget);
        serverTarget->setObjectName("serverTarget");

        serverOverlap->addWidget(serverTarget);

        serverLabel = new QLabel(targetOptionsGroup);
        serverLabel->setObjectName("serverLabel");
        serverLabel->setVisible(false);

        serverOverlap->addWidget(serverLabel);


        targetOptionsGridLayout->addLayout(serverOverlap, 1, 0, 1, 1);

        serverAddressBox = new QLineEdit(targetOptionsGroup);
        serverAddressBox->setObjectName("serverAddressBox");

        targetOptionsGridLayout->addWidget(serverAddressBox, 1, 1, 1, 1);


        verticalLayout->addWidget(targetOptionsGroup);

        noteLabel = new QLabel(CreateShortcutDialog);
        noteLabel->setObjectName("noteLabel");

        verticalLayout->addWidget(noteLabel);

        noteLabel2 = new QLabel(CreateShortcutDialog);
        noteLabel2->setObjectName("noteLabel2");

        verticalLayout->addWidget(noteLabel2);

        buttonBox = new QDialogButtonBox(CreateShortcutDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(CreateShortcutDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, CreateShortcutDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, CreateShortcutDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(CreateShortcutDialog);
    } // setupUi

    void retranslateUi(QDialog *CreateShortcutDialog)
    {
        CreateShortcutDialog->setWindowTitle(QCoreApplication::translate("CreateShortcutDialog", "Create Instance Shortcut", nullptr));
        saveToLabel->setText(QCoreApplication::translate("CreateShortcutDialog", "Save To:", nullptr));
        nameLabel->setText(QCoreApplication::translate("CreateShortcutDialog", "Name:", nullptr));
        instNameTextBox->setPlaceholderText(QCoreApplication::translate("CreateShortcutDialog", "Name", nullptr));
#if QT_CONFIG(tooltip)
        overrideAccountCheckbox->setToolTip(QCoreApplication::translate("CreateShortcutDialog", "Use a different account than the default specified.", nullptr));
#endif // QT_CONFIG(tooltip)
        overrideAccountCheckbox->setText(QCoreApplication::translate("CreateShortcutDialog", "Override the default account", nullptr));
#if QT_CONFIG(tooltip)
        targetCheckbox->setToolTip(QCoreApplication::translate("CreateShortcutDialog", "Specify a world or server to automatically join on launch.", nullptr));
#endif // QT_CONFIG(tooltip)
        targetCheckbox->setText(QCoreApplication::translate("CreateShortcutDialog", "Select a target to join on launch", nullptr));
        worldTarget->setText(QCoreApplication::translate("CreateShortcutDialog", "World:", nullptr));
        serverTarget->setText(QCoreApplication::translate("CreateShortcutDialog", "Server Address:", nullptr));
        serverLabel->setText(QCoreApplication::translate("CreateShortcutDialog", "Server Address:", nullptr));
        serverAddressBox->setPlaceholderText(QCoreApplication::translate("CreateShortcutDialog", "Server Address", nullptr));
        noteLabel->setText(QCoreApplication::translate("CreateShortcutDialog", "Note: If a shortcut is moved after creation, it won't be deleted when deleting the instance.", nullptr));
        noteLabel2->setText(QCoreApplication::translate("CreateShortcutDialog", "You'll need to delete them manually if that is the case.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateShortcutDialog: public Ui_CreateShortcutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATESHORTCUTDIALOG_H
