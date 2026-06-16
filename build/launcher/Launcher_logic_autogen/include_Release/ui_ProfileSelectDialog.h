/********************************************************************************
** Form generated from reading UI file 'ProfileSelectDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFILESELECTDIALOG_H
#define UI_PROFILESELECTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ProfileSelectDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *msgLabel;
    QListView *view;
    QHBoxLayout *horizontalLayout;
    QCheckBox *globalDefaultCheck;
    QCheckBox *instDefaultCheck;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ProfileSelectDialog)
    {
        if (ProfileSelectDialog->objectName().isEmpty())
            ProfileSelectDialog->setObjectName("ProfileSelectDialog");
        ProfileSelectDialog->resize(465, 300);
        verticalLayout = new QVBoxLayout(ProfileSelectDialog);
        verticalLayout->setObjectName("verticalLayout");
        msgLabel = new QLabel(ProfileSelectDialog);
        msgLabel->setObjectName("msgLabel");

        verticalLayout->addWidget(msgLabel);

        view = new QListView(ProfileSelectDialog);
        view->setObjectName("view");

        verticalLayout->addWidget(view);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        globalDefaultCheck = new QCheckBox(ProfileSelectDialog);
        globalDefaultCheck->setObjectName("globalDefaultCheck");

        horizontalLayout->addWidget(globalDefaultCheck);

        instDefaultCheck = new QCheckBox(ProfileSelectDialog);
        instDefaultCheck->setObjectName("instDefaultCheck");

        horizontalLayout->addWidget(instDefaultCheck);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(ProfileSelectDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ProfileSelectDialog);

        QMetaObject::connectSlotsByName(ProfileSelectDialog);
    } // setupUi

    void retranslateUi(QDialog *ProfileSelectDialog)
    {
        ProfileSelectDialog->setWindowTitle(QCoreApplication::translate("ProfileSelectDialog", "Select an Account", nullptr));
        msgLabel->setText(QCoreApplication::translate("ProfileSelectDialog", "Select a profile.", nullptr));
        globalDefaultCheck->setText(QCoreApplication::translate("ProfileSelectDialog", "Use as default?", nullptr));
        instDefaultCheck->setText(QCoreApplication::translate("ProfileSelectDialog", "Use as default for this instance only?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProfileSelectDialog: public Ui_ProfileSelectDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFILESELECTDIALOG_H
