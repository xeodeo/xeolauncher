/********************************************************************************
** Form generated from reading UI file 'SkinManageDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SKINMANAGEDIALOG_H
#define UI_SKINMANAGEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SkinManageDialog
{
public:
    QAction *action_Delete_Skin;
    QAction *action_Rename_Skin;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *mainHlLayout;
    QVBoxLayout *selectedVLayout;
    QVBoxLayout *skinLayout;
    QGroupBox *modelBox;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *steveBtn;
    QRadioButton *alexBtn;
    QGroupBox *capeBox;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *elytraCB;
    QComboBox *capeCombo;
    QLabel *capeImage;
    QListView *listView;
    QHBoxLayout *buttonsHLayout;
    QPushButton *openDirBtn;
    QPushButton *resetBtn;
    QLineEdit *urlLine;
    QPushButton *urlBtn;
    QPushButton *userBtn;
    QPushButton *fileBtn;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SkinManageDialog)
    {
        if (SkinManageDialog->objectName().isEmpty())
            SkinManageDialog->setObjectName("SkinManageDialog");
        SkinManageDialog->resize(968, 757);
        action_Delete_Skin = new QAction(SkinManageDialog);
        action_Delete_Skin->setObjectName("action_Delete_Skin");
        action_Rename_Skin = new QAction(SkinManageDialog);
        action_Rename_Skin->setObjectName("action_Rename_Skin");
        verticalLayout = new QVBoxLayout(SkinManageDialog);
        verticalLayout->setObjectName("verticalLayout");
        mainHlLayout = new QHBoxLayout();
        mainHlLayout->setObjectName("mainHlLayout");
        selectedVLayout = new QVBoxLayout();
        selectedVLayout->setObjectName("selectedVLayout");
        skinLayout = new QVBoxLayout();
        skinLayout->setObjectName("skinLayout");

        selectedVLayout->addLayout(skinLayout);

        modelBox = new QGroupBox(SkinManageDialog);
        modelBox->setObjectName("modelBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(modelBox->sizePolicy().hasHeightForWidth());
        modelBox->setSizePolicy(sizePolicy);
        horizontalLayout_2 = new QHBoxLayout(modelBox);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        steveBtn = new QRadioButton(modelBox);
        steveBtn->setObjectName("steveBtn");
        steveBtn->setChecked(true);

        horizontalLayout_2->addWidget(steveBtn);

        alexBtn = new QRadioButton(modelBox);
        alexBtn->setObjectName("alexBtn");

        horizontalLayout_2->addWidget(alexBtn);


        selectedVLayout->addWidget(modelBox);

        capeBox = new QGroupBox(SkinManageDialog);
        capeBox->setObjectName("capeBox");
        verticalLayout_4 = new QVBoxLayout(capeBox);
        verticalLayout_4->setObjectName("verticalLayout_4");
        elytraCB = new QCheckBox(capeBox);
        elytraCB->setObjectName("elytraCB");

        verticalLayout_4->addWidget(elytraCB);

        capeCombo = new QComboBox(capeBox);
        capeCombo->setObjectName("capeCombo");

        verticalLayout_4->addWidget(capeCombo);

        capeImage = new QLabel(capeBox);
        capeImage->setObjectName("capeImage");
        capeImage->setScaledContents(false);
        capeImage->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(capeImage);


        selectedVLayout->addWidget(capeBox);

        selectedVLayout->setStretch(0, 2);
        selectedVLayout->setStretch(1, 1);
        selectedVLayout->setStretch(2, 3);

        mainHlLayout->addLayout(selectedVLayout);

        listView = new QListView(SkinManageDialog);
        listView->setObjectName("listView");
        listView->setContextMenuPolicy(Qt::CustomContextMenu);
        listView->setAcceptDrops(false);
        listView->setModelColumn(0);

        mainHlLayout->addWidget(listView);

        mainHlLayout->setStretch(0, 3);
        mainHlLayout->setStretch(1, 8);

        verticalLayout->addLayout(mainHlLayout);

        buttonsHLayout = new QHBoxLayout();
        buttonsHLayout->setObjectName("buttonsHLayout");
        openDirBtn = new QPushButton(SkinManageDialog);
        openDirBtn->setObjectName("openDirBtn");

        buttonsHLayout->addWidget(openDirBtn);

        resetBtn = new QPushButton(SkinManageDialog);
        resetBtn->setObjectName("resetBtn");

        buttonsHLayout->addWidget(resetBtn);

        urlLine = new QLineEdit(SkinManageDialog);
        urlLine->setObjectName("urlLine");

        buttonsHLayout->addWidget(urlLine);

        urlBtn = new QPushButton(SkinManageDialog);
        urlBtn->setObjectName("urlBtn");

        buttonsHLayout->addWidget(urlBtn);

        userBtn = new QPushButton(SkinManageDialog);
        userBtn->setObjectName("userBtn");

        buttonsHLayout->addWidget(userBtn);

        fileBtn = new QPushButton(SkinManageDialog);
        fileBtn->setObjectName("fileBtn");

        buttonsHLayout->addWidget(fileBtn);

        buttonBox = new QDialogButtonBox(SkinManageDialog);
        buttonBox->setObjectName("buttonBox");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy1);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        buttonsHLayout->addWidget(buttonBox);

        buttonsHLayout->setStretch(2, 3);
        buttonsHLayout->setStretch(6, 1);

        verticalLayout->addLayout(buttonsHLayout);


        retranslateUi(SkinManageDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, SkinManageDialog, qOverload<>(&QDialog::reject));
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, SkinManageDialog, qOverload<>(&QDialog::accept));

        QMetaObject::connectSlotsByName(SkinManageDialog);
    } // setupUi

    void retranslateUi(QDialog *SkinManageDialog)
    {
        SkinManageDialog->setWindowTitle(QCoreApplication::translate("SkinManageDialog", "Skin Upload", nullptr));
        action_Delete_Skin->setText(QCoreApplication::translate("SkinManageDialog", "&Delete Skin", nullptr));
#if QT_CONFIG(tooltip)
        action_Delete_Skin->setToolTip(QCoreApplication::translate("SkinManageDialog", "Deletes selected skin", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        action_Delete_Skin->setShortcut(QCoreApplication::translate("SkinManageDialog", "Del", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Rename_Skin->setText(QCoreApplication::translate("SkinManageDialog", "&Rename Skin", nullptr));
#if QT_CONFIG(tooltip)
        action_Rename_Skin->setToolTip(QCoreApplication::translate("SkinManageDialog", "Rename selected skin", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        action_Rename_Skin->setShortcut(QCoreApplication::translate("SkinManageDialog", "F2", nullptr));
#endif // QT_CONFIG(shortcut)
        modelBox->setTitle(QCoreApplication::translate("SkinManageDialog", "Model", nullptr));
        steveBtn->setText(QCoreApplication::translate("SkinManageDialog", "Classic", nullptr));
        alexBtn->setText(QCoreApplication::translate("SkinManageDialog", "Slim", nullptr));
        capeBox->setTitle(QCoreApplication::translate("SkinManageDialog", "Cape", nullptr));
        elytraCB->setText(QCoreApplication::translate("SkinManageDialog", "Preview Elytra", nullptr));
        capeImage->setText(QString());
        openDirBtn->setText(QCoreApplication::translate("SkinManageDialog", "Open Folder", nullptr));
        resetBtn->setText(QCoreApplication::translate("SkinManageDialog", "Reset Skin", nullptr));
        urlLine->setPlaceholderText(QString());
        urlBtn->setText(QCoreApplication::translate("SkinManageDialog", "Import URL", nullptr));
        userBtn->setText(QCoreApplication::translate("SkinManageDialog", "Import user", nullptr));
        fileBtn->setText(QCoreApplication::translate("SkinManageDialog", "Import File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SkinManageDialog: public Ui_SkinManageDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SKINMANAGEDIALOG_H
