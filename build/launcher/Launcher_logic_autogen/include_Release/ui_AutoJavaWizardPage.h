/********************************************************************************
** Form generated from reading UI file 'AutoJavaWizardPage.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTOJAVAWIZARDPAGE_H
#define UI_AUTOJAVAWIZARDPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AutoJavaWizardPage
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QFrame *line;
    QRadioButton *defaultSettingsRadioButton;
    QRadioButton *previousSettingsRadioButton;
    QSpacerItem *verticalSpacer;
    QButtonGroup *buttonGroup;

    void setupUi(QWidget *AutoJavaWizardPage)
    {
        if (AutoJavaWizardPage->objectName().isEmpty())
            AutoJavaWizardPage->setObjectName("AutoJavaWizardPage");
        AutoJavaWizardPage->resize(400, 300);
        verticalLayout = new QVBoxLayout(AutoJavaWizardPage);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(AutoJavaWizardPage);
        label->setObjectName("label");
        label->setTextFormat(Qt::RichText);
        label->setWordWrap(true);

        verticalLayout->addWidget(label);

        label_2 = new QLabel(AutoJavaWizardPage);
        label_2->setObjectName("label_2");
        label_2->setWordWrap(true);

        verticalLayout->addWidget(label_2);

        line = new QFrame(AutoJavaWizardPage);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout->addWidget(line);

        defaultSettingsRadioButton = new QRadioButton(AutoJavaWizardPage);
        buttonGroup = new QButtonGroup(AutoJavaWizardPage);
        buttonGroup->setObjectName("buttonGroup");
        buttonGroup->addButton(defaultSettingsRadioButton);
        defaultSettingsRadioButton->setObjectName("defaultSettingsRadioButton");
        defaultSettingsRadioButton->setChecked(true);

        verticalLayout->addWidget(defaultSettingsRadioButton);

        previousSettingsRadioButton = new QRadioButton(AutoJavaWizardPage);
        buttonGroup->addButton(previousSettingsRadioButton);
        previousSettingsRadioButton->setObjectName("previousSettingsRadioButton");
        previousSettingsRadioButton->setChecked(false);

        verticalLayout->addWidget(previousSettingsRadioButton);

        verticalSpacer = new QSpacerItem(20, 156, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(AutoJavaWizardPage);

        QMetaObject::connectSlotsByName(AutoJavaWizardPage);
    } // setupUi

    void retranslateUi(QWidget *AutoJavaWizardPage)
    {
        AutoJavaWizardPage->setWindowTitle(QCoreApplication::translate("AutoJavaWizardPage", "Form", nullptr));
        label->setText(QCoreApplication::translate("AutoJavaWizardPage", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">New Feature Alert!</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("AutoJavaWizardPage", "We've added a feature to automatically download the correct Java version for each version of Minecraft (this can be changed in the Java Settings). Would you like to enable or disable this feature?", nullptr));
        defaultSettingsRadioButton->setText(QCoreApplication::translate("AutoJavaWizardPage", "Enable Auto-Download", nullptr));
        previousSettingsRadioButton->setText(QCoreApplication::translate("AutoJavaWizardPage", "Disable Auto-Download", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AutoJavaWizardPage: public Ui_AutoJavaWizardPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTOJAVAWIZARDPAGE_H
