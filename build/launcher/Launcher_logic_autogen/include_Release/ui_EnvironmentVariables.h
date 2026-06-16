/********************************************************************************
** Form generated from reading UI file 'EnvironmentVariables.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENVIRONMENTVARIABLES_H
#define UI_ENVIRONMENTVARIABLES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EnvironmentVariables
{
public:
    QVBoxLayout *verticalLayout;
    QCheckBox *overrideCheckBox;
    QWidget *settingsWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *buttons;
    QPushButton *add;
    QPushButton *remove;
    QSpacerItem *horizontalSpacer;
    QPushButton *clear;
    QTreeWidget *list;

    void setupUi(QWidget *EnvironmentVariables)
    {
        if (EnvironmentVariables->objectName().isEmpty())
            EnvironmentVariables->setObjectName("EnvironmentVariables");
        EnvironmentVariables->resize(565, 410);
        verticalLayout = new QVBoxLayout(EnvironmentVariables);
        verticalLayout->setObjectName("verticalLayout");
        overrideCheckBox = new QCheckBox(EnvironmentVariables);
        overrideCheckBox->setObjectName("overrideCheckBox");
        overrideCheckBox->setChecked(true);

        verticalLayout->addWidget(overrideCheckBox);

        settingsWidget = new QWidget(EnvironmentVariables);
        settingsWidget->setObjectName("settingsWidget");
        settingsWidget->setEnabled(true);
        verticalLayout_2 = new QVBoxLayout(settingsWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        buttons = new QHBoxLayout();
        buttons->setObjectName("buttons");
        add = new QPushButton(settingsWidget);
        add->setObjectName("add");

        buttons->addWidget(add);

        remove = new QPushButton(settingsWidget);
        remove->setObjectName("remove");

        buttons->addWidget(remove);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        buttons->addItem(horizontalSpacer);

        clear = new QPushButton(settingsWidget);
        clear->setObjectName("clear");

        buttons->addWidget(clear);


        verticalLayout_2->addLayout(buttons);

        list = new QTreeWidget(settingsWidget);
        list->setObjectName("list");
        list->setAlternatingRowColors(true);
        list->setSelectionMode(QAbstractItemView::ExtendedSelection);
        list->setRootIsDecorated(false);
        list->setItemsExpandable(false);
        list->setAnimated(true);
        list->setExpandsOnDoubleClick(false);

        verticalLayout_2->addWidget(list);


        verticalLayout->addWidget(settingsWidget);


        retranslateUi(EnvironmentVariables);

        QMetaObject::connectSlotsByName(EnvironmentVariables);
    } // setupUi

    void retranslateUi(QWidget *EnvironmentVariables)
    {
        EnvironmentVariables->setWindowTitle(QCoreApplication::translate("EnvironmentVariables", "Form", nullptr));
        overrideCheckBox->setText(QCoreApplication::translate("EnvironmentVariables", "Override &Global Settings", nullptr));
        add->setText(QCoreApplication::translate("EnvironmentVariables", "&Add", nullptr));
        remove->setText(QCoreApplication::translate("EnvironmentVariables", "&Remove", nullptr));
        clear->setText(QCoreApplication::translate("EnvironmentVariables", "&Clear", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = list->headerItem();
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("EnvironmentVariables", "Value", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("EnvironmentVariables", "Name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EnvironmentVariables: public Ui_EnvironmentVariables {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENVIRONMENTVARIABLES_H
