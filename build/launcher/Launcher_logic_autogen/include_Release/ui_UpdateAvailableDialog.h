/********************************************************************************
** Form generated from reading UI file 'UpdateAvailableDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATEAVAILABLEDIALOG_H
#define UI_UPDATEAVAILABLEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_UpdateAvailableDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *leftsideLayout;
    QLabel *icon;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *mainLayout;
    QLabel *headerLabel;
    QLabel *versionAvailableLabel;
    QLabel *releaseNotesLabel;
    QTextBrowser *releaseNotes;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *skipButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *delayButton;
    QPushButton *installButton;

    void setupUi(QDialog *UpdateAvailableDialog)
    {
        if (UpdateAvailableDialog->objectName().isEmpty())
            UpdateAvailableDialog->setObjectName("UpdateAvailableDialog");
        UpdateAvailableDialog->resize(636, 352);
        verticalLayout_3 = new QVBoxLayout(UpdateAvailableDialog);
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        leftsideLayout = new QVBoxLayout();
        leftsideLayout->setObjectName("leftsideLayout");
        icon = new QLabel(UpdateAvailableDialog);
        icon->setObjectName("icon");
        icon->setMinimumSize(QSize(64, 64));

        leftsideLayout->addWidget(icon);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        leftsideLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(leftsideLayout);

        mainLayout = new QVBoxLayout();
        mainLayout->setObjectName("mainLayout");
        mainLayout->setContentsMargins(9, 9, 9, 9);
        headerLabel = new QLabel(UpdateAvailableDialog);
        headerLabel->setObjectName("headerLabel");
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        headerLabel->setFont(font);

        mainLayout->addWidget(headerLabel);

        versionAvailableLabel = new QLabel(UpdateAvailableDialog);
        versionAvailableLabel->setObjectName("versionAvailableLabel");

        mainLayout->addWidget(versionAvailableLabel);

        releaseNotesLabel = new QLabel(UpdateAvailableDialog);
        releaseNotesLabel->setObjectName("releaseNotesLabel");
        QFont font1;
        font1.setBold(true);
        releaseNotesLabel->setFont(font1);

        mainLayout->addWidget(releaseNotesLabel);

        releaseNotes = new QTextBrowser(UpdateAvailableDialog);
        releaseNotes->setObjectName("releaseNotes");

        mainLayout->addWidget(releaseNotes);


        horizontalLayout->addLayout(mainLayout);

        horizontalLayout->setStretch(1, 1);

        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        skipButton = new QPushButton(UpdateAvailableDialog);
        skipButton->setObjectName("skipButton");

        horizontalLayout_2->addWidget(skipButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        delayButton = new QPushButton(UpdateAvailableDialog);
        delayButton->setObjectName("delayButton");
        delayButton->setCheckable(false);
        delayButton->setChecked(false);

        horizontalLayout_2->addWidget(delayButton);

        installButton = new QPushButton(UpdateAvailableDialog);
        installButton->setObjectName("installButton");

        horizontalLayout_2->addWidget(installButton);


        verticalLayout_3->addLayout(horizontalLayout_2);


        retranslateUi(UpdateAvailableDialog);

        installButton->setDefault(true);


        QMetaObject::connectSlotsByName(UpdateAvailableDialog);
    } // setupUi

    void retranslateUi(QDialog *UpdateAvailableDialog)
    {
        UpdateAvailableDialog->setWindowTitle(QCoreApplication::translate("UpdateAvailableDialog", "Update Available", nullptr));
        icon->setText(QString());
        headerLabel->setText(QCoreApplication::translate("UpdateAvailableDialog", "A new version is available!", nullptr));
        versionAvailableLabel->setText(QCoreApplication::translate("UpdateAvailableDialog", "Version %1 is now available - you have %2 . Would you like to download it now?", nullptr));
        releaseNotesLabel->setText(QCoreApplication::translate("UpdateAvailableDialog", "Release Notes:", nullptr));
        skipButton->setText(QCoreApplication::translate("UpdateAvailableDialog", "Skip This Version", nullptr));
        delayButton->setText(QCoreApplication::translate("UpdateAvailableDialog", "Remind Me Later", nullptr));
        installButton->setText(QCoreApplication::translate("UpdateAvailableDialog", "Install Update", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UpdateAvailableDialog: public Ui_UpdateAvailableDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATEAVAILABLEDIALOG_H
