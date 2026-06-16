/********************************************************************************
** Form generated from reading UI file 'JavaPage.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JAVAPAGE_H
#define UI_JAVAPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ui/widgets/JavaSettingsWidget.h"
#include "ui/widgets/VersionSelectWidget.h"

QT_BEGIN_NAMESPACE

class Ui_JavaPage
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *general;
    QVBoxLayout *verticalLayout_2;
    QScrollArea *generalScrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_4;
    JavaSettingsWidget *javaSettings;
    QWidget *management;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *downloadJavaButton;
    QPushButton *removeJavaButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *refreshJavaButton;
    VersionSelectWidget *managedJavaList;

    void setupUi(QWidget *JavaPage)
    {
        if (JavaPage->objectName().isEmpty())
            JavaPage->setObjectName("JavaPage");
        JavaPage->resize(559, 659);
        QSizePolicy sizePolicy(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(JavaPage->sizePolicy().hasHeightForWidth());
        JavaPage->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(JavaPage);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 6, 0);
        tabWidget = new QTabWidget(JavaPage);
        tabWidget->setObjectName("tabWidget");
        general = new QWidget();
        general->setObjectName("general");
        verticalLayout_2 = new QVBoxLayout(general);
        verticalLayout_2->setObjectName("verticalLayout_2");
        generalScrollArea = new QScrollArea(general);
        generalScrollArea->setObjectName("generalScrollArea");
        generalScrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 535, 612));
        verticalLayout_4 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        javaSettings = new JavaSettingsWidget(scrollAreaWidgetContents);
        javaSettings->setObjectName("javaSettings");

        verticalLayout_4->addWidget(javaSettings);

        generalScrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_2->addWidget(generalScrollArea);

        tabWidget->addTab(general, QString());
        tabWidget->setTabText(tabWidget->indexOf(general), QString::fromUtf8("General"));
        management = new QWidget();
        management->setObjectName("management");
        verticalLayout_3 = new QVBoxLayout(management);
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        downloadJavaButton = new QPushButton(management);
        downloadJavaButton->setObjectName("downloadJavaButton");

        horizontalLayout->addWidget(downloadJavaButton);

        removeJavaButton = new QPushButton(management);
        removeJavaButton->setObjectName("removeJavaButton");

        horizontalLayout->addWidget(removeJavaButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        refreshJavaButton = new QPushButton(management);
        refreshJavaButton->setObjectName("refreshJavaButton");

        horizontalLayout->addWidget(refreshJavaButton);


        verticalLayout_3->addLayout(horizontalLayout);

        managedJavaList = new VersionSelectWidget(management);
        managedJavaList->setObjectName("managedJavaList");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(managedJavaList->sizePolicy().hasHeightForWidth());
        managedJavaList->setSizePolicy(sizePolicy1);

        verticalLayout_3->addWidget(managedJavaList);

        tabWidget->addTab(management, QString());

        verticalLayout->addWidget(tabWidget);


        retranslateUi(JavaPage);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(JavaPage);
    } // setupUi

    void retranslateUi(QWidget *JavaPage)
    {
        downloadJavaButton->setText(QCoreApplication::translate("JavaPage", "Download", nullptr));
        removeJavaButton->setText(QCoreApplication::translate("JavaPage", "Remove", nullptr));
        refreshJavaButton->setText(QCoreApplication::translate("JavaPage", "Refresh", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(management), QCoreApplication::translate("JavaPage", "Installations", nullptr));
        (void)JavaPage;
    } // retranslateUi

};

namespace Ui {
    class JavaPage: public Ui_JavaPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JAVAPAGE_H
