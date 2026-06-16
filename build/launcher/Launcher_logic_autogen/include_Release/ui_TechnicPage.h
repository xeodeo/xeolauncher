/********************************************************************************
** Form generated from reading UI file 'TechnicPage.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TECHNICPAGE_H
#define UI_TECHNICPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TechnicPage
{
public:
    QVBoxLayout *verticalLayout;
    QLineEdit *searchEdit;
    QHBoxLayout *horizontalLayout;
    QListView *packView;
    QTextBrowser *packDescription;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QComboBox *versionSelectionBox;

    void setupUi(QWidget *TechnicPage)
    {
        if (TechnicPage->objectName().isEmpty())
            TechnicPage->setObjectName("TechnicPage");
        TechnicPage->resize(546, 405);
        verticalLayout = new QVBoxLayout(TechnicPage);
        verticalLayout->setObjectName("verticalLayout");
        searchEdit = new QLineEdit(TechnicPage);
        searchEdit->setObjectName("searchEdit");

        verticalLayout->addWidget(searchEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        packView = new QListView(TechnicPage);
        packView->setObjectName("packView");
        packView->setAlternatingRowColors(true);
        packView->setIconSize(QSize(48, 48));
        packView->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);

        horizontalLayout->addWidget(packView);

        packDescription = new QTextBrowser(TechnicPage);
        packDescription->setObjectName("packDescription");
        packDescription->setOpenExternalLinks(true);

        horizontalLayout->addWidget(packDescription);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer = new QSpacerItem(1, 1, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        label = new QLabel(TechnicPage);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label);

        versionSelectionBox = new QComboBox(TechnicPage);
        versionSelectionBox->setObjectName("versionSelectionBox");

        horizontalLayout_2->addWidget(versionSelectionBox);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(TechnicPage);

        QMetaObject::connectSlotsByName(TechnicPage);
    } // setupUi

    void retranslateUi(QWidget *TechnicPage)
    {
        searchEdit->setPlaceholderText(QCoreApplication::translate("TechnicPage", "Search and filter...", nullptr));
        label->setText(QCoreApplication::translate("TechnicPage", "Version selected:", nullptr));
        (void)TechnicPage;
    } // retranslateUi

};

namespace Ui {
    class TechnicPage: public Ui_TechnicPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TECHNICPAGE_H
