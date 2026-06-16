/********************************************************************************
** Form generated from reading UI file 'ChooseOfflineNameDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOOSEOFFLINENAMEDIALOG_H
#define UI_CHOOSEOFFLINENAMEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ChooseOfflineNameDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *usernameTextBox;
    QCheckBox *allowInvalidUsernames;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ChooseOfflineNameDialog)
    {
        if (ChooseOfflineNameDialog->objectName().isEmpty())
            ChooseOfflineNameDialog->setObjectName("ChooseOfflineNameDialog");
        ChooseOfflineNameDialog->resize(400, 158);
        verticalLayout = new QVBoxLayout(ChooseOfflineNameDialog);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(ChooseOfflineNameDialog);
        label->setObjectName("label");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(label);

        usernameTextBox = new QLineEdit(ChooseOfflineNameDialog);
        usernameTextBox->setObjectName("usernameTextBox");

        verticalLayout->addWidget(usernameTextBox);

        allowInvalidUsernames = new QCheckBox(ChooseOfflineNameDialog);
        allowInvalidUsernames->setObjectName("allowInvalidUsernames");

        verticalLayout->addWidget(allowInvalidUsernames);

        buttonBox = new QDialogButtonBox(ChooseOfflineNameDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ChooseOfflineNameDialog);

        QMetaObject::connectSlotsByName(ChooseOfflineNameDialog);
    } // setupUi

    void retranslateUi(QDialog *ChooseOfflineNameDialog)
    {
        ChooseOfflineNameDialog->setWindowTitle(QCoreApplication::translate("ChooseOfflineNameDialog", "Choose Offline Name", nullptr));
        label->setText(QCoreApplication::translate("ChooseOfflineNameDialog", "Message label placeholder.", nullptr));
        usernameTextBox->setPlaceholderText(QCoreApplication::translate("ChooseOfflineNameDialog", "Username", nullptr));
#if QT_CONFIG(tooltip)
        allowInvalidUsernames->setToolTip(QCoreApplication::translate("ChooseOfflineNameDialog", "A username is valid only if it is from 3 to 16 characters in length, uses English letters, numbers, and underscores. An invalid username may prevent joining servers and singleplayer worlds.", nullptr));
#endif // QT_CONFIG(tooltip)
        allowInvalidUsernames->setText(QCoreApplication::translate("ChooseOfflineNameDialog", "Allow invalid usernames", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChooseOfflineNameDialog: public Ui_ChooseOfflineNameDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOOSEOFFLINENAMEDIALOG_H
