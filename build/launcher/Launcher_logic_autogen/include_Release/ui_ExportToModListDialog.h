/********************************************************************************
** Form generated from reading UI file 'ExportToModListDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPORTTOMODLISTDIALOG_H
#define UI_EXPORTTOMODLISTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ExportToModListDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout;
    QComboBox *formatComboBox;
    QGroupBox *templateGroup;
    QVBoxLayout *verticalLayout_4;
    QTextEdit *templateText;
    QGroupBox *optionsGroup;
    QVBoxLayout *verticalLayout_5;
    QCheckBox *versionCheckBox;
    QCheckBox *authorsCheckBox;
    QCheckBox *urlCheckBox;
    QCheckBox *filenameCheckBox;
    QPushButton *versionButton;
    QPushButton *authorsButton;
    QPushButton *urlButton;
    QPushButton *filenameButton;
    QLabel *label;
    QGroupBox *groupBox_4;
    QHBoxLayout *horizontalLayout;
    QPlainTextEdit *finalText;
    QTextBrowser *resultText;
    QLabel *warningLabel;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *copyButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ExportToModListDialog)
    {
        if (ExportToModListDialog->objectName().isEmpty())
            ExportToModListDialog->setObjectName("ExportToModListDialog");
        ExportToModListDialog->resize(650, 522);
        ExportToModListDialog->setSizeGripEnabled(true);
        verticalLayout_2 = new QVBoxLayout(ExportToModListDialog);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        groupBox_3 = new QGroupBox(ExportToModListDialog);
        groupBox_3->setObjectName("groupBox_3");
        gridLayout = new QGridLayout(groupBox_3);
        gridLayout->setObjectName("gridLayout");
        formatComboBox = new QComboBox(groupBox_3);
        formatComboBox->addItem(QString());
        formatComboBox->addItem(QString());
        formatComboBox->addItem(QString());
        formatComboBox->addItem(QString());
        formatComboBox->addItem(QString());
        formatComboBox->addItem(QString());
        formatComboBox->setObjectName("formatComboBox");

        gridLayout->addWidget(formatComboBox, 0, 1, 1, 1);

        templateGroup = new QGroupBox(groupBox_3);
        templateGroup->setObjectName("templateGroup");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(templateGroup->sizePolicy().hasHeightForWidth());
        templateGroup->setSizePolicy(sizePolicy);
        verticalLayout_4 = new QVBoxLayout(templateGroup);
        verticalLayout_4->setObjectName("verticalLayout_4");
        templateText = new QTextEdit(templateGroup);
        templateText->setObjectName("templateText");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(templateText->sizePolicy().hasHeightForWidth());
        templateText->setSizePolicy(sizePolicy1);

        verticalLayout_4->addWidget(templateText);


        gridLayout->addWidget(templateGroup, 1, 0, 1, 1);

        optionsGroup = new QGroupBox(groupBox_3);
        optionsGroup->setObjectName("optionsGroup");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(optionsGroup->sizePolicy().hasHeightForWidth());
        optionsGroup->setSizePolicy(sizePolicy2);
        verticalLayout_5 = new QVBoxLayout(optionsGroup);
        verticalLayout_5->setObjectName("verticalLayout_5");
        versionCheckBox = new QCheckBox(optionsGroup);
        versionCheckBox->setObjectName("versionCheckBox");

        verticalLayout_5->addWidget(versionCheckBox);

        authorsCheckBox = new QCheckBox(optionsGroup);
        authorsCheckBox->setObjectName("authorsCheckBox");

        verticalLayout_5->addWidget(authorsCheckBox);

        urlCheckBox = new QCheckBox(optionsGroup);
        urlCheckBox->setObjectName("urlCheckBox");

        verticalLayout_5->addWidget(urlCheckBox);

        filenameCheckBox = new QCheckBox(optionsGroup);
        filenameCheckBox->setObjectName("filenameCheckBox");

        verticalLayout_5->addWidget(filenameCheckBox);

        versionButton = new QPushButton(optionsGroup);
        versionButton->setObjectName("versionButton");

        verticalLayout_5->addWidget(versionButton);

        authorsButton = new QPushButton(optionsGroup);
        authorsButton->setObjectName("authorsButton");

        verticalLayout_5->addWidget(authorsButton);

        urlButton = new QPushButton(optionsGroup);
        urlButton->setObjectName("urlButton");

        verticalLayout_5->addWidget(urlButton);

        filenameButton = new QPushButton(optionsGroup);
        filenameButton->setObjectName("filenameButton");

        verticalLayout_5->addWidget(filenameButton);


        gridLayout->addWidget(optionsGroup, 1, 1, 1, 1);

        label = new QLabel(groupBox_3);
        label->setObjectName("label");
        label->setFrameShape(QFrame::NoFrame);
        label->setFrameShadow(QFrame::Plain);
        label->setLineWidth(1);

        gridLayout->addWidget(label, 0, 0, 1, 1);


        verticalLayout->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(ExportToModListDialog);
        groupBox_4->setObjectName("groupBox_4");
        horizontalLayout = new QHBoxLayout(groupBox_4);
        horizontalLayout->setObjectName("horizontalLayout");
        finalText = new QPlainTextEdit(groupBox_4);
        finalText->setObjectName("finalText");
        finalText->setMinimumSize(QSize(0, 143));
        finalText->setReadOnly(true);

        horizontalLayout->addWidget(finalText);

        resultText = new QTextBrowser(groupBox_4);
        resultText->setObjectName("resultText");
        resultText->setOpenExternalLinks(true);

        horizontalLayout->addWidget(resultText);


        verticalLayout->addWidget(groupBox_4);

        warningLabel = new QLabel(ExportToModListDialog);
        warningLabel->setObjectName("warningLabel");
        warningLabel->setWordWrap(true);

        verticalLayout->addWidget(warningLabel);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        copyButton = new QPushButton(ExportToModListDialog);
        copyButton->setObjectName("copyButton");

        horizontalLayout_2->addWidget(copyButton);

        buttonBox = new QDialogButtonBox(ExportToModListDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Save);

        horizontalLayout_2->addWidget(buttonBox);


        verticalLayout_2->addLayout(horizontalLayout_2);


        retranslateUi(ExportToModListDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, ExportToModListDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, ExportToModListDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(ExportToModListDialog);
    } // setupUi

    void retranslateUi(QDialog *ExportToModListDialog)
    {
        ExportToModListDialog->setWindowTitle(QCoreApplication::translate("ExportToModListDialog", "Export Pack to ModList", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("ExportToModListDialog", "Settings", nullptr));
        formatComboBox->setItemText(0, QCoreApplication::translate("ExportToModListDialog", "HTML", nullptr));
        formatComboBox->setItemText(1, QCoreApplication::translate("ExportToModListDialog", "Markdown", nullptr));
        formatComboBox->setItemText(2, QCoreApplication::translate("ExportToModListDialog", "Plaintext", nullptr));
        formatComboBox->setItemText(3, QCoreApplication::translate("ExportToModListDialog", "JSON", nullptr));
        formatComboBox->setItemText(4, QCoreApplication::translate("ExportToModListDialog", "CSV", nullptr));
        formatComboBox->setItemText(5, QCoreApplication::translate("ExportToModListDialog", "Custom", nullptr));

        templateGroup->setTitle(QCoreApplication::translate("ExportToModListDialog", "Template", nullptr));
#if QT_CONFIG(tooltip)
        templateText->setToolTip(QCoreApplication::translate("ExportToModListDialog", "This text supports the following placeholders:\n"
"{name}     - Mod name\n"
"{mod_id}   - Mod ID\n"
"{url}      - Mod URL\n"
"{version}  - Mod version\n"
"{authors}  - Mod authors", nullptr));
#endif // QT_CONFIG(tooltip)
        optionsGroup->setTitle(QCoreApplication::translate("ExportToModListDialog", "Optional Info", nullptr));
        versionCheckBox->setText(QCoreApplication::translate("ExportToModListDialog", "Version", nullptr));
        authorsCheckBox->setText(QCoreApplication::translate("ExportToModListDialog", "Authors", nullptr));
        urlCheckBox->setText(QCoreApplication::translate("ExportToModListDialog", "URL", nullptr));
        filenameCheckBox->setText(QCoreApplication::translate("ExportToModListDialog", "Filename", nullptr));
        versionButton->setText(QCoreApplication::translate("ExportToModListDialog", "Version", nullptr));
        authorsButton->setText(QCoreApplication::translate("ExportToModListDialog", "Authors", nullptr));
        urlButton->setText(QCoreApplication::translate("ExportToModListDialog", "URL", nullptr));
        filenameButton->setText(QCoreApplication::translate("ExportToModListDialog", "Filename", nullptr));
        label->setText(QCoreApplication::translate("ExportToModListDialog", "Format", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("ExportToModListDialog", "Result", nullptr));
        warningLabel->setText(QCoreApplication::translate("ExportToModListDialog", "This depends on the mods' metadata. To ensure it is available, run an update on the instance. Installing the updates isn't necessary.", nullptr));
        copyButton->setText(QCoreApplication::translate("ExportToModListDialog", "Copy", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ExportToModListDialog: public Ui_ExportToModListDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPORTTOMODLISTDIALOG_H
