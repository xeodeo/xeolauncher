/********************************************************************************
** Form generated from reading UI file 'LoginWizardPage.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWIZARDPAGE_H
#define UI_LOGINWIZARDPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWizardPage
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QFrame *line;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer;
    QButtonGroup *buttonGroup;

    void setupUi(QWidget *LoginWizardPage)
    {
        if (LoginWizardPage->objectName().isEmpty())
            LoginWizardPage->setObjectName("LoginWizardPage");
        LoginWizardPage->resize(400, 300);
        verticalLayout = new QVBoxLayout(LoginWizardPage);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(LoginWizardPage);
        label->setObjectName("label");
        label->setTextFormat(Qt::RichText);
        label->setWordWrap(true);

        verticalLayout->addWidget(label);

        label_2 = new QLabel(LoginWizardPage);
        label_2->setObjectName("label_2");
        label_2->setWordWrap(true);

        verticalLayout->addWidget(label_2);

        line = new QFrame(LoginWizardPage);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout->addWidget(line);

        pushButton = new QPushButton(LoginWizardPage);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);

        verticalSpacer = new QSpacerItem(20, 156, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(LoginWizardPage);

        QMetaObject::connectSlotsByName(LoginWizardPage);
    } // setupUi

    void retranslateUi(QWidget *LoginWizardPage)
    {
        LoginWizardPage->setWindowTitle(QCoreApplication::translate("LoginWizardPage", "Form", nullptr));
        label->setText(QCoreApplication::translate("LoginWizardPage", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">Add Microsoft account</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("LoginWizardPage", "In order to play Minecraft, you must have at least one Microsoft account logged in. Do you want to log in now?", nullptr));
        pushButton->setText(QCoreApplication::translate("LoginWizardPage", "Add Microsoft account", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginWizardPage: public Ui_LoginWizardPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWIZARDPAGE_H
