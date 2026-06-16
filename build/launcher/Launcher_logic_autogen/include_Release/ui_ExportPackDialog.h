/********************************************************************************
** Form generated from reading UI file 'ExportPackDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPORTPACKDIALOG_H
#define UI_EXPORTPACKDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ExportPackDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *information;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *nameLabel;
    QLineEdit *name;
    QLabel *versionLabel;
    QLineEdit *version;
    QLabel *authorLabel;
    QLineEdit *author;
    QLabel *summaryLabel;
    QPlainTextEdit *summary;
    QGroupBox *options;
    QVBoxLayout *verticalLayout_3;
    QWidget *recommendedMemoryWidget;
    QHBoxLayout *horizontalLayout;
    QCheckBox *recommendedMemoryCheckBox;
    QSpinBox *recommendedMemory;
    QSpacerItem *horizontalSpacer;
    QLabel *filesLabel;
    QTreeView *files;
    QCheckBox *optionalFiles;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ExportPackDialog)
    {
        if (ExportPackDialog->objectName().isEmpty())
            ExportPackDialog->setObjectName("ExportPackDialog");
        ExportPackDialog->resize(650, 532);
        ExportPackDialog->setSizeGripEnabled(true);
        verticalLayout_2 = new QVBoxLayout(ExportPackDialog);
        verticalLayout_2->setObjectName("verticalLayout_2");
        information = new QGroupBox(ExportPackDialog);
        information->setObjectName("information");
        verticalLayout = new QVBoxLayout(information);
        verticalLayout->setObjectName("verticalLayout");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        formLayout->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        nameLabel = new QLabel(information);
        nameLabel->setObjectName("nameLabel");

        formLayout->setWidget(0, QFormLayout::LabelRole, nameLabel);

        name = new QLineEdit(information);
        name->setObjectName("name");

        formLayout->setWidget(0, QFormLayout::FieldRole, name);

        versionLabel = new QLabel(information);
        versionLabel->setObjectName("versionLabel");

        formLayout->setWidget(1, QFormLayout::LabelRole, versionLabel);

        version = new QLineEdit(information);
        version->setObjectName("version");

        formLayout->setWidget(1, QFormLayout::FieldRole, version);

        authorLabel = new QLabel(information);
        authorLabel->setObjectName("authorLabel");

        formLayout->setWidget(2, QFormLayout::LabelRole, authorLabel);

        author = new QLineEdit(information);
        author->setObjectName("author");

        formLayout->setWidget(2, QFormLayout::FieldRole, author);


        verticalLayout->addLayout(formLayout);

        summaryLabel = new QLabel(information);
        summaryLabel->setObjectName("summaryLabel");

        verticalLayout->addWidget(summaryLabel);

        summary = new QPlainTextEdit(information);
        summary->setObjectName("summary");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(summary->sizePolicy().hasHeightForWidth());
        summary->setSizePolicy(sizePolicy);
        summary->setMinimumSize(QSize(0, 100));
        summary->setMaximumSize(QSize(16777215, 100));
        summary->setTabChangesFocus(true);

        verticalLayout->addWidget(summary);


        verticalLayout_2->addWidget(information);

        options = new QGroupBox(ExportPackDialog);
        options->setObjectName("options");
        verticalLayout_3 = new QVBoxLayout(options);
        verticalLayout_3->setObjectName("verticalLayout_3");
        recommendedMemoryWidget = new QWidget(options);
        recommendedMemoryWidget->setObjectName("recommendedMemoryWidget");
        horizontalLayout = new QHBoxLayout(recommendedMemoryWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        recommendedMemoryCheckBox = new QCheckBox(recommendedMemoryWidget);
        recommendedMemoryCheckBox->setObjectName("recommendedMemoryCheckBox");

        horizontalLayout->addWidget(recommendedMemoryCheckBox);

        recommendedMemory = new QSpinBox(recommendedMemoryWidget);
        recommendedMemory->setObjectName("recommendedMemory");
        recommendedMemory->setEnabled(false);
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(recommendedMemory->sizePolicy().hasHeightForWidth());
        recommendedMemory->setSizePolicy(sizePolicy1);
        recommendedMemory->setMinimum(8);
        recommendedMemory->setMaximum(32768);
        recommendedMemory->setSingleStep(128);

        horizontalLayout->addWidget(recommendedMemory);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_3->addWidget(recommendedMemoryWidget);

        filesLabel = new QLabel(options);
        filesLabel->setObjectName("filesLabel");

        verticalLayout_3->addWidget(filesLabel);

        files = new QTreeView(options);
        files->setObjectName("files");
        files->setAlternatingRowColors(true);
        files->setSelectionMode(QAbstractItemView::ExtendedSelection);
        files->setSortingEnabled(true);
        files->header()->setStretchLastSection(false);

        verticalLayout_3->addWidget(files);

        optionalFiles = new QCheckBox(options);
        optionalFiles->setObjectName("optionalFiles");
        optionalFiles->setChecked(true);

        verticalLayout_3->addWidget(optionalFiles);


        verticalLayout_2->addWidget(options);

        buttonBox = new QDialogButtonBox(ExportPackDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);

#if QT_CONFIG(shortcut)
        nameLabel->setBuddy(name);
        versionLabel->setBuddy(version);
        authorLabel->setBuddy(author);
        summaryLabel->setBuddy(summary);
        filesLabel->setBuddy(files);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(files, optionalFiles);

        retranslateUi(ExportPackDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, ExportPackDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, ExportPackDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(ExportPackDialog);
    } // setupUi

    void retranslateUi(QDialog *ExportPackDialog)
    {
        information->setTitle(QCoreApplication::translate("ExportPackDialog", "&Description", nullptr));
        nameLabel->setText(QCoreApplication::translate("ExportPackDialog", "&Name:", nullptr));
        versionLabel->setText(QCoreApplication::translate("ExportPackDialog", "&Version:", nullptr));
        version->setText(QCoreApplication::translate("ExportPackDialog", "1.0.0", nullptr));
        authorLabel->setText(QCoreApplication::translate("ExportPackDialog", "&Author:", nullptr));
        summaryLabel->setText(QCoreApplication::translate("ExportPackDialog", "&Summary", nullptr));
        options->setTitle(QCoreApplication::translate("ExportPackDialog", "&Options", nullptr));
        recommendedMemoryCheckBox->setText(QCoreApplication::translate("ExportPackDialog", "&Recommended Memory:", nullptr));
        recommendedMemory->setSuffix(QCoreApplication::translate("ExportPackDialog", " MiB", nullptr));
        filesLabel->setText(QCoreApplication::translate("ExportPackDialog", "&Files", nullptr));
        optionalFiles->setText(QCoreApplication::translate("ExportPackDialog", "&Mark disabled files as optional", nullptr));
        (void)ExportPackDialog;
    } // retranslateUi

};

namespace Ui {
    class ExportPackDialog: public Ui_ExportPackDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPORTPACKDIALOG_H
