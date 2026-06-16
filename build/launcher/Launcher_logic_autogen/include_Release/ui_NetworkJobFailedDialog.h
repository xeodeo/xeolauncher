/********************************************************************************
** Form generated from reading UI file 'NetworkJobFailedDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NETWORKJOBFAILEDDIALOG_H
#define UI_NETWORKJOBFAILEDDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_NetworkJobFailedDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *failLabel;
    QLabel *requestCountLabel;
    QTreeWidget *detailsTable;
    QLabel *userActionLabel;
    QDialogButtonBox *dialogButtonBox;

    void setupUi(QDialog *NetworkJobFailedDialog)
    {
        if (NetworkJobFailedDialog->objectName().isEmpty())
            NetworkJobFailedDialog->setObjectName("NetworkJobFailedDialog");
        NetworkJobFailedDialog->resize(450, 350);
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::DialogWarning));
        NetworkJobFailedDialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(NetworkJobFailedDialog);
        verticalLayout->setObjectName("verticalLayout");
        failLabel = new QLabel(NetworkJobFailedDialog);
        failLabel->setObjectName("failLabel");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(failLabel->sizePolicy().hasHeightForWidth());
        failLabel->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(failLabel);

        requestCountLabel = new QLabel(NetworkJobFailedDialog);
        requestCountLabel->setObjectName("requestCountLabel");
        sizePolicy.setHeightForWidth(requestCountLabel->sizePolicy().hasHeightForWidth());
        requestCountLabel->setSizePolicy(sizePolicy);
        requestCountLabel->setText(QString::fromUtf8("(request count)"));

        verticalLayout->addWidget(requestCountLabel);

        detailsTable = new QTreeWidget(NetworkJobFailedDialog);
        detailsTable->setObjectName("detailsTable");
        detailsTable->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        detailsTable->setAlternatingRowColors(true);
        detailsTable->setVerticalScrollMode(QAbstractItemView::ScrollMode::ScrollPerPixel);
        detailsTable->setIndentation(0);
        detailsTable->header()->setStretchLastSection(false);

        verticalLayout->addWidget(detailsTable);

        userActionLabel = new QLabel(NetworkJobFailedDialog);
        userActionLabel->setObjectName("userActionLabel");
        sizePolicy.setHeightForWidth(userActionLabel->sizePolicy().hasHeightForWidth());
        userActionLabel->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(userActionLabel);

        dialogButtonBox = new QDialogButtonBox(NetworkJobFailedDialog);
        dialogButtonBox->setObjectName("dialogButtonBox");
        dialogButtonBox->setStandardButtons(QDialogButtonBox::StandardButton::Abort|QDialogButtonBox::StandardButton::Retry);

        verticalLayout->addWidget(dialogButtonBox);


        retranslateUi(NetworkJobFailedDialog);

        QMetaObject::connectSlotsByName(NetworkJobFailedDialog);
    } // setupUi

    void retranslateUi(QDialog *NetworkJobFailedDialog)
    {
        NetworkJobFailedDialog->setWindowTitle(QCoreApplication::translate("NetworkJobFailedDialog", "Network error", nullptr));
        failLabel->setText(QCoreApplication::translate("NetworkJobFailedDialog", "A network operation has failed: %1", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = detailsTable->headerItem();
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("NetworkJobFailedDialog", "Error", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("NetworkJobFailedDialog", "URL", nullptr));
        userActionLabel->setText(QCoreApplication::translate("NetworkJobFailedDialog", "What would you like to do?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NetworkJobFailedDialog: public Ui_NetworkJobFailedDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NETWORKJOBFAILEDDIALOG_H
