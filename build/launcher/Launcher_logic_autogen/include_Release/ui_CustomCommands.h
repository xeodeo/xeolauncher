/********************************************************************************
** Form generated from reading UI file 'CustomCommands.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMCOMMANDS_H
#define UI_CUSTOMCOMMANDS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CustomCommands
{
public:
    QVBoxLayout *verticalLayout;
    QCheckBox *overrideCheckBox;
    QWidget *customCommandsWidget;
    QGridLayout *gridLayout_4;
    QLabel *labelPreLaunchCmd;
    QSpacerItem *verticalSpacer_2;
    QLineEdit *preLaunchCmdTextBox;
    QLineEdit *wrapperCmdTextBox;
    QLabel *labelPostExitCmd;
    QLineEdit *postExitCmdTextBox;
    QLabel *labelWrapperCmd;
    QSpacerItem *verticalSpacer_3;
    QLabel *labelCustomCmdsDescription;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *CustomCommands)
    {
        if (CustomCommands->objectName().isEmpty())
            CustomCommands->setObjectName("CustomCommands");
        CustomCommands->resize(518, 646);
        verticalLayout = new QVBoxLayout(CustomCommands);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        overrideCheckBox = new QCheckBox(CustomCommands);
        overrideCheckBox->setObjectName("overrideCheckBox");
        overrideCheckBox->setChecked(true);

        verticalLayout->addWidget(overrideCheckBox);

        customCommandsWidget = new QWidget(CustomCommands);
        customCommandsWidget->setObjectName("customCommandsWidget");
        customCommandsWidget->setEnabled(true);
        gridLayout_4 = new QGridLayout(customCommandsWidget);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setContentsMargins(0, 0, 0, -1);
        labelPreLaunchCmd = new QLabel(customCommandsWidget);
        labelPreLaunchCmd->setObjectName("labelPreLaunchCmd");

        gridLayout_4->addWidget(labelPreLaunchCmd, 0, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(0, 6, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        gridLayout_4->addItem(verticalSpacer_2, 5, 0, 1, 1);

        preLaunchCmdTextBox = new QLineEdit(customCommandsWidget);
        preLaunchCmdTextBox->setObjectName("preLaunchCmdTextBox");

        gridLayout_4->addWidget(preLaunchCmdTextBox, 1, 0, 1, 1);

        wrapperCmdTextBox = new QLineEdit(customCommandsWidget);
        wrapperCmdTextBox->setObjectName("wrapperCmdTextBox");

        gridLayout_4->addWidget(wrapperCmdTextBox, 4, 0, 1, 1);

        labelPostExitCmd = new QLabel(customCommandsWidget);
        labelPostExitCmd->setObjectName("labelPostExitCmd");

        gridLayout_4->addWidget(labelPostExitCmd, 6, 0, 1, 1);

        postExitCmdTextBox = new QLineEdit(customCommandsWidget);
        postExitCmdTextBox->setObjectName("postExitCmdTextBox");

        gridLayout_4->addWidget(postExitCmdTextBox, 7, 0, 1, 1);

        labelWrapperCmd = new QLabel(customCommandsWidget);
        labelWrapperCmd->setObjectName("labelWrapperCmd");

        gridLayout_4->addWidget(labelWrapperCmd, 3, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(0, 6, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        gridLayout_4->addItem(verticalSpacer_3, 2, 0, 1, 1);


        verticalLayout->addWidget(customCommandsWidget);

        labelCustomCmdsDescription = new QLabel(CustomCommands);
        labelCustomCmdsDescription->setObjectName("labelCustomCmdsDescription");
        labelCustomCmdsDescription->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        labelCustomCmdsDescription->setWordWrap(true);
        labelCustomCmdsDescription->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        verticalLayout->addWidget(labelCustomCmdsDescription);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

#if QT_CONFIG(shortcut)
        labelPreLaunchCmd->setBuddy(preLaunchCmdTextBox);
        labelPostExitCmd->setBuddy(postExitCmdTextBox);
        labelWrapperCmd->setBuddy(wrapperCmdTextBox);
#endif // QT_CONFIG(shortcut)

        retranslateUi(CustomCommands);

        QMetaObject::connectSlotsByName(CustomCommands);
    } // setupUi

    void retranslateUi(QWidget *CustomCommands)
    {
        overrideCheckBox->setText(QCoreApplication::translate("CustomCommands", "Override &Global Settings", nullptr));
        labelPreLaunchCmd->setText(QCoreApplication::translate("CustomCommands", "&Pre-launch Command", nullptr));
        labelPostExitCmd->setText(QCoreApplication::translate("CustomCommands", "P&ost-exit Command", nullptr));
        labelWrapperCmd->setText(QCoreApplication::translate("CustomCommands", "&Wrapper Command", nullptr));
        labelCustomCmdsDescription->setText(QCoreApplication::translate("CustomCommands", "<html><head/><body><p>Pre-launch command runs before the instance launches and post-exit command runs after it exits.</p><p>Both will be run in the launcher's working folder with extra environment variables:</p><ul><li>$INST_NAME - Name of the instance</li><li>$INST_ID - ID of the instance (its folder name)</li><li>$INST_DIR - absolute path of the instance</li><li>$INST_MC_DIR - absolute path of Minecraft</li><li>$INST_JAVA - Java binary used for launch</li><li>$INST_JAVA_ARGS - command-line parameters used for launch (warning: will not work correctly if arguments contain spaces)</li></ul><p>Wrapper command allows launching using an extra wrapper program (like 'optirun' on Linux)</p></body></html>", nullptr));
        (void)CustomCommands;
    } // retranslateUi

};

namespace Ui {
    class CustomCommands: public Ui_CustomCommands {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMCOMMANDS_H
