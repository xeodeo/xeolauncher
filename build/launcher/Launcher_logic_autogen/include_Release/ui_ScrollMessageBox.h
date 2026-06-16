/********************************************************************************
** Form generated from reading UI file 'ScrollMessageBox.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCROLLMESSAGEBOX_H
#define UI_SCROLLMESSAGEBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_ScrollMessageBox
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QHBoxLayout *bottomHBoxLayout;
    QCheckBox *optionCheckBox;
    QDialogButtonBox *buttonBox;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *ScrollMessageBox)
    {
        if (ScrollMessageBox->objectName().isEmpty())
            ScrollMessageBox->setObjectName("ScrollMessageBox");
        ScrollMessageBox->resize(500, 455);
        ScrollMessageBox->setWindowTitle(QString::fromUtf8("ScrollMessageBox"));
        gridLayout = new QGridLayout(ScrollMessageBox);
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(ScrollMessageBox);
        label->setObjectName("label");
        label->setText(QString::fromUtf8(""));
        label->setTextFormat(Qt::RichText);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        bottomHBoxLayout = new QHBoxLayout();
        bottomHBoxLayout->setObjectName("bottomHBoxLayout");
        optionCheckBox = new QCheckBox(ScrollMessageBox);
        optionCheckBox->setObjectName("optionCheckBox");
        optionCheckBox->setVisible(false);

        bottomHBoxLayout->addWidget(optionCheckBox);

        buttonBox = new QDialogButtonBox(ScrollMessageBox);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        bottomHBoxLayout->addWidget(buttonBox);


        gridLayout->addLayout(bottomHBoxLayout, 2, 0, 1, 1);

        textBrowser = new QTextBrowser(ScrollMessageBox);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setAcceptRichText(true);
        textBrowser->setOpenExternalLinks(true);

        gridLayout->addWidget(textBrowser, 1, 0, 1, 1);


        retranslateUi(ScrollMessageBox);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, ScrollMessageBox, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, ScrollMessageBox, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(ScrollMessageBox);
    } // setupUi

    void retranslateUi(QDialog *ScrollMessageBox)
    {
        (void)ScrollMessageBox;
    } // retranslateUi

};

namespace Ui {
    class ScrollMessageBox: public Ui_ScrollMessageBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCROLLMESSAGEBOX_H
