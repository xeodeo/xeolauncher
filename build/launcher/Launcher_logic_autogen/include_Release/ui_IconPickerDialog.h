/********************************************************************************
** Form generated from reading UI file 'IconPickerDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ICONPICKERDIALOG_H
#define UI_ICONPICKERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_IconPickerDialog
{
public:
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout1;
    QHBoxLayout *horizontalLayout;
    QComboBox *contextCombo;
    QSpacerItem *horizontalSpacer;
    QLineEdit *searchLine;
    QListView *iconView;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *IconPickerDialog)
    {
        if (IconPickerDialog->objectName().isEmpty())
            IconPickerDialog->setObjectName("IconPickerDialog");
        IconPickerDialog->resize(676, 555);
        verticalLayout = new QVBoxLayout(IconPickerDialog);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout1 = new QVBoxLayout();
        verticalLayout1->setObjectName("verticalLayout1");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        contextCombo = new QComboBox(IconPickerDialog);
        contextCombo->setObjectName("contextCombo");

        horizontalLayout->addWidget(contextCombo);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        searchLine = new QLineEdit(IconPickerDialog);
        searchLine->setObjectName("searchLine");
        searchLine->setClearButtonEnabled(true);

        horizontalLayout->addWidget(searchLine);


        verticalLayout1->addLayout(horizontalLayout);


        verticalLayout->addLayout(verticalLayout1);

        iconView = new QListView(IconPickerDialog);
        iconView->setObjectName("iconView");
        iconView->setIconSize(QSize(60, 60));
        iconView->setMovement(QListView::Static);
        iconView->setResizeMode(QListView::Adjust);
        iconView->setViewMode(QListView::IconMode);
        iconView->setUniformItemSizes(true);

        verticalLayout->addWidget(iconView);

        buttonBox = new QDialogButtonBox(IconPickerDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(IconPickerDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, IconPickerDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, IconPickerDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(IconPickerDialog);
    } // setupUi

    void retranslateUi(QDialog *IconPickerDialog)
    {
        IconPickerDialog->setWindowTitle(QCoreApplication::translate("IconPickerDialog", "Pick icon", nullptr));
#if QT_CONFIG(accessibility)
        contextCombo->setAccessibleName(QCoreApplication::translate("IconPickerDialog", "Icon category", nullptr));
#endif // QT_CONFIG(accessibility)
        searchLine->setPlaceholderText(QCoreApplication::translate("IconPickerDialog", "Search Icons...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class IconPickerDialog: public Ui_IconPickerDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ICONPICKERDIALOG_H
