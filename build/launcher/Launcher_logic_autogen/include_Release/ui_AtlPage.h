/********************************************************************************
** Form generated from reading UI file 'AtlPage.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ATLPAGE_H
#define UI_ATLPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AtlPage
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLineEdit *searchEdit;
    QHBoxLayout *horizontalLayout;
    QTreeView *packView;
    QTextBrowser *packDescription;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *sortByBox;
    QLabel *label;
    QComboBox *versionSelectionBox;

    void setupUi(QWidget *AtlPage)
    {
        if (AtlPage->objectName().isEmpty())
            AtlPage->setObjectName("AtlPage");
        AtlPage->resize(837, 685);
        verticalLayout = new QVBoxLayout(AtlPage);
        verticalLayout->setObjectName("verticalLayout");
        label_2 = new QLabel(AtlPage);
        label_2->setObjectName("label_2");
        QFont font;
        font.setItalic(true);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);
        label_2->setWordWrap(true);

        verticalLayout->addWidget(label_2);

        searchEdit = new QLineEdit(AtlPage);
        searchEdit->setObjectName("searchEdit");
        searchEdit->setClearButtonEnabled(true);

        verticalLayout->addWidget(searchEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        packView = new QTreeView(AtlPage);
        packView->setObjectName("packView");
        packView->setAlternatingRowColors(true);
        packView->setIconSize(QSize(96, 48));
        packView->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);

        horizontalLayout->addWidget(packView);

        packDescription = new QTextBrowser(AtlPage);
        packDescription->setObjectName("packDescription");
        packDescription->setOpenExternalLinks(true);
        packDescription->setOpenLinks(true);

        horizontalLayout->addWidget(packDescription);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        sortByBox = new QComboBox(AtlPage);
        sortByBox->setObjectName("sortByBox");

        horizontalLayout_2->addWidget(sortByBox);

        label = new QLabel(AtlPage);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label);

        versionSelectionBox = new QComboBox(AtlPage);
        versionSelectionBox->setObjectName("versionSelectionBox");

        horizontalLayout_2->addWidget(versionSelectionBox);


        verticalLayout->addLayout(horizontalLayout_2);

        QWidget::setTabOrder(searchEdit, packView);
        QWidget::setTabOrder(packView, packDescription);
        QWidget::setTabOrder(packDescription, sortByBox);
        QWidget::setTabOrder(sortByBox, versionSelectionBox);

        retranslateUi(AtlPage);

        QMetaObject::connectSlotsByName(AtlPage);
    } // setupUi

    void retranslateUi(QWidget *AtlPage)
    {
        label_2->setText(QCoreApplication::translate("AtlPage", "Warning: This is still a work in progress. If you run into issues with the imported modpack, it may be a bug.", nullptr));
        searchEdit->setPlaceholderText(QCoreApplication::translate("AtlPage", "Search and filter...", nullptr));
        label->setText(QCoreApplication::translate("AtlPage", "Version selected:", nullptr));
        (void)AtlPage;
    } // retranslateUi

};

namespace Ui {
    class AtlPage: public Ui_AtlPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ATLPAGE_H
