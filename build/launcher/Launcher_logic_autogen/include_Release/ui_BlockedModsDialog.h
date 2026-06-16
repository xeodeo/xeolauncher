/********************************************************************************
** Form generated from reading UI file 'BlockedModsDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BLOCKEDMODSDIALOG_H
#define UI_BLOCKEDMODSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BlockedModsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *labelDescription;
    QLabel *labelExplain;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_3;
    QTextBrowser *textBrowserModsListing;
    QHBoxLayout *openMissingLayout;
    QPushButton *openMissingButton;
    QSpacerItem *openMissingSpacer;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_2;
    QTextBrowser *textBrowserWatched;
    QHBoxLayout *downloadFolderLayout;
    QPushButton *downloadFolderButton;
    QSpacerItem *downloadFolderSpacer;
    QHBoxLayout *bottomBoxH;
    QLabel *labelModsFound;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *BlockedModsDialog)
    {
        if (BlockedModsDialog->objectName().isEmpty())
            BlockedModsDialog->setObjectName("BlockedModsDialog");
        BlockedModsDialog->resize(800, 500);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(2);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(BlockedModsDialog->sizePolicy().hasHeightForWidth());
        BlockedModsDialog->setSizePolicy(sizePolicy);
        BlockedModsDialog->setMinimumSize(QSize(700, 350));
        BlockedModsDialog->setWindowTitle(QString::fromUtf8("BlockedModsDialog"));
        verticalLayout = new QVBoxLayout(BlockedModsDialog);
        verticalLayout->setObjectName("verticalLayout");
        labelDescription = new QLabel(BlockedModsDialog);
        labelDescription->setObjectName("labelDescription");
        labelDescription->setText(QString::fromUtf8("Placeholder description"));
        labelDescription->setTextFormat(Qt::RichText);
        labelDescription->setWordWrap(true);

        verticalLayout->addWidget(labelDescription);

        labelExplain = new QLabel(BlockedModsDialog);
        labelExplain->setObjectName("labelExplain");
        labelExplain->setWordWrap(true);

        verticalLayout->addWidget(labelExplain);

        tabWidget = new QTabWidget(BlockedModsDialog);
        tabWidget->setObjectName("tabWidget");
        tab = new QWidget();
        tab->setObjectName("tab");
        verticalLayout_3 = new QVBoxLayout(tab);
        verticalLayout_3->setObjectName("verticalLayout_3");
        textBrowserModsListing = new QTextBrowser(tab);
        textBrowserModsListing->setObjectName("textBrowserModsListing");
        textBrowserModsListing->setAcceptRichText(true);
        textBrowserModsListing->setOpenExternalLinks(true);

        verticalLayout_3->addWidget(textBrowserModsListing);

        openMissingLayout = new QHBoxLayout();
        openMissingLayout->setObjectName("openMissingLayout");
        openMissingButton = new QPushButton(tab);
        openMissingButton->setObjectName("openMissingButton");

        openMissingLayout->addWidget(openMissingButton);

        openMissingSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        openMissingLayout->addItem(openMissingSpacer);


        verticalLayout_3->addLayout(openMissingLayout);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        verticalLayout_2 = new QVBoxLayout(tab_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        textBrowserWatched = new QTextBrowser(tab_2);
        textBrowserWatched->setObjectName("textBrowserWatched");
        textBrowserWatched->setBaseSize(QSize(0, 12));
        textBrowserWatched->setOpenExternalLinks(true);
        textBrowserWatched->setOpenLinks(false);

        verticalLayout_2->addWidget(textBrowserWatched);

        downloadFolderLayout = new QHBoxLayout();
        downloadFolderLayout->setObjectName("downloadFolderLayout");
        downloadFolderButton = new QPushButton(tab_2);
        downloadFolderButton->setObjectName("downloadFolderButton");

        downloadFolderLayout->addWidget(downloadFolderButton);

        downloadFolderSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        downloadFolderLayout->addItem(downloadFolderSpacer);


        verticalLayout_2->addLayout(downloadFolderLayout);

        tabWidget->addTab(tab_2, QString());

        verticalLayout->addWidget(tabWidget);

        bottomBoxH = new QHBoxLayout();
        bottomBoxH->setObjectName("bottomBoxH");
        labelModsFound = new QLabel(BlockedModsDialog);
        labelModsFound->setObjectName("labelModsFound");

        bottomBoxH->addWidget(labelModsFound);

        buttonBox = new QDialogButtonBox(BlockedModsDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        bottomBoxH->addWidget(buttonBox);


        verticalLayout->addLayout(bottomBoxH);


        retranslateUi(BlockedModsDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, BlockedModsDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, BlockedModsDialog, qOverload<>(&QDialog::reject));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(BlockedModsDialog);
    } // setupUi

    void retranslateUi(QDialog *BlockedModsDialog)
    {
        labelExplain->setText(QCoreApplication::translate("BlockedModsDialog", "<html><head/><body><p>Your configured global mods folder and default downloads folder are automatically checked for the downloaded mods and they will be copied to the instance if found.</p><p>Optionally, you may drag and drop the downloaded mods onto this dialog or add a folder to watch if you did not download the mods to a default location.</p><p><span style=\" font-weight:600;\">Click 'Open Missing' to open all the download links in the browser. </span></p></body></html>", nullptr));
        openMissingButton->setText(QCoreApplication::translate("BlockedModsDialog", "Open Missing", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("BlockedModsDialog", "Blocked Mods", nullptr));
        downloadFolderButton->setText(QCoreApplication::translate("BlockedModsDialog", "Add Download Folder", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("BlockedModsDialog", "Watched Folders", nullptr));
        labelModsFound->setText(QString());
        (void)BlockedModsDialog;
    } // retranslateUi

};

namespace Ui {
    class BlockedModsDialog: public Ui_BlockedModsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BLOCKEDMODSDIALOG_H
