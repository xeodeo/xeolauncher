/********************************************************************************
** Form generated from reading UI file 'ImportFTBPage.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMPORTFTBPAGE_H
#define UI_IMPORTFTBPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

namespace FTBImportAPP {

class Ui_ImportFTBPage
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLineEdit *searchEdit;
    QPushButton *browseButton;
    QTreeView *modpackList;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *sortByBox;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *FTBImportAPP__ImportFTBPage)
    {
        if (FTBImportAPP__ImportFTBPage->objectName().isEmpty())
            FTBImportAPP__ImportFTBPage->setObjectName("FTBImportAPP__ImportFTBPage");
        FTBImportAPP__ImportFTBPage->resize(1461, 1011);
        verticalLayout = new QVBoxLayout(FTBImportAPP__ImportFTBPage);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(FTBImportAPP__ImportFTBPage);
        label->setObjectName("label");
        QFont font;
        font.setItalic(true);
        label->setFont(font);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label->setWordWrap(true);

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        searchEdit = new QLineEdit(FTBImportAPP__ImportFTBPage);
        searchEdit->setObjectName("searchEdit");
        searchEdit->setClearButtonEnabled(true);

        horizontalLayout->addWidget(searchEdit);

        browseButton = new QPushButton(FTBImportAPP__ImportFTBPage);
        browseButton->setObjectName("browseButton");
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("viewfolder")));
        browseButton->setIcon(icon);
        browseButton->setFlat(true);

        horizontalLayout->addWidget(browseButton);


        verticalLayout->addLayout(horizontalLayout);

        modpackList = new QTreeView(FTBImportAPP__ImportFTBPage);
        modpackList->setObjectName("modpackList");
        modpackList->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        modpackList->setMaximumSize(QSize(16777215, 16777215));

        verticalLayout->addWidget(modpackList);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        sortByBox = new QComboBox(FTBImportAPP__ImportFTBPage);
        sortByBox->setObjectName("sortByBox");
        sortByBox->setMinimumSize(QSize(265, 0));

        horizontalLayout_2->addWidget(sortByBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(FTBImportAPP__ImportFTBPage);

        QMetaObject::connectSlotsByName(FTBImportAPP__ImportFTBPage);
    } // setupUi

    void retranslateUi(QWidget *FTBImportAPP__ImportFTBPage)
    {
        label->setText(QCoreApplication::translate("FTBImportAPP::ImportFTBPage", "Note: Many recent FTB modpacks are also available from CurseForge! Also, if your FTB instances are not in the default location, select it using the button next to search.", nullptr));
        searchEdit->setPlaceholderText(QCoreApplication::translate("FTBImportAPP::ImportFTBPage", "Search and filter...", nullptr));
#if QT_CONFIG(tooltip)
        browseButton->setToolTip(QCoreApplication::translate("FTBImportAPP::ImportFTBPage", "Select FTBApp instances directory", nullptr));
#endif // QT_CONFIG(tooltip)
        browseButton->setText(QString());
        (void)FTBImportAPP__ImportFTBPage;
    } // retranslateUi

};

} // namespace FTBImportAPP

namespace FTBImportAPP {
namespace Ui {
    class ImportFTBPage: public Ui_ImportFTBPage {};
} // namespace Ui
} // namespace FTBImportAPP

#endif // UI_IMPORTFTBPAGE_H
