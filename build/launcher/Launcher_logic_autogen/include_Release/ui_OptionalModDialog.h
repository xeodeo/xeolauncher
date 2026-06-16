/********************************************************************************
** Form generated from reading UI file 'OptionalModDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTIONALMODDIALOG_H
#define UI_OPTIONALMODDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_OptionalModDialog
{
public:
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QListWidget *list;
    QHBoxLayout *horizontalLayout;
    QPushButton *selectAllButton;
    QPushButton *clearAllButton;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *OptionalModDialog)
    {
        if (OptionalModDialog->objectName().isEmpty())
            OptionalModDialog->setObjectName("OptionalModDialog");
        OptionalModDialog->resize(550, 310);
        gridLayout_2 = new QGridLayout(OptionalModDialog);
        gridLayout_2->setObjectName("gridLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        list = new QListWidget(OptionalModDialog);
        list->setObjectName("list");
        list->setDefaultDropAction(Qt::IgnoreAction);
        list->setAlternatingRowColors(true);
        list->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);

        verticalLayout->addWidget(list);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        selectAllButton = new QPushButton(OptionalModDialog);
        selectAllButton->setObjectName("selectAllButton");

        horizontalLayout->addWidget(selectAllButton);

        clearAllButton = new QPushButton(OptionalModDialog);
        clearAllButton->setObjectName("clearAllButton");

        horizontalLayout->addWidget(clearAllButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(OptionalModDialog);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(OptionalModDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        gridLayout_2->addLayout(verticalLayout, 1, 0, 1, 1);


        retranslateUi(OptionalModDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, OptionalModDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, OptionalModDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(OptionalModDialog);
    } // setupUi

    void retranslateUi(QDialog *OptionalModDialog)
    {
        OptionalModDialog->setWindowTitle(QCoreApplication::translate("OptionalModDialog", "Select Optional Mods", nullptr));
        selectAllButton->setText(QCoreApplication::translate("OptionalModDialog", "Select All", nullptr));
        clearAllButton->setText(QCoreApplication::translate("OptionalModDialog", "Deselect All", nullptr));
        label->setText(QCoreApplication::translate("OptionalModDialog", "Unchecked mods will be disabled.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OptionalModDialog: public Ui_OptionalModDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTIONALMODDIALOG_H
