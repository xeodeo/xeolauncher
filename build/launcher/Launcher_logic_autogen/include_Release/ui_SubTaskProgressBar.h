/********************************************************************************
** Form generated from reading UI file 'SubTaskProgressBar.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUBTASKPROGRESSBAR_H
#define UI_SUBTASKPROGRESSBAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SubTaskProgressBar
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *statusLabel;
    QLabel *statusDetailsLabel;
    QProgressBar *progressBar;

    void setupUi(QWidget *SubTaskProgressBar)
    {
        if (SubTaskProgressBar->objectName().isEmpty())
            SubTaskProgressBar->setObjectName("SubTaskProgressBar");
        SubTaskProgressBar->resize(312, 86);
        QSizePolicy sizePolicy(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SubTaskProgressBar->sizePolicy().hasHeightForWidth());
        SubTaskProgressBar->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(SubTaskProgressBar);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(8);
        horizontalLayout->setObjectName("horizontalLayout");
        statusLabel = new QLabel(SubTaskProgressBar);
        statusLabel->setObjectName("statusLabel");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(statusLabel->sizePolicy().hasHeightForWidth());
        statusLabel->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(8);
        statusLabel->setFont(font);
        statusLabel->setWordWrap(true);
        statusLabel->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse|Qt::TextBrowserInteraction|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        horizontalLayout->addWidget(statusLabel);

        statusDetailsLabel = new QLabel(SubTaskProgressBar);
        statusDetailsLabel->setObjectName("statusDetailsLabel");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(statusDetailsLabel->sizePolicy().hasHeightForWidth());
        statusDetailsLabel->setSizePolicy(sizePolicy2);
        statusDetailsLabel->setFont(font);
        statusDetailsLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        statusDetailsLabel->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse|Qt::TextBrowserInteraction|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        horizontalLayout->addWidget(statusDetailsLabel);

        horizontalLayout->setStretch(0, 1);

        verticalLayout->addLayout(horizontalLayout);

        progressBar = new QProgressBar(SubTaskProgressBar);
        progressBar->setObjectName("progressBar");
        progressBar->setFont(font);
        progressBar->setValue(24);
        progressBar->setTextVisible(true);

        verticalLayout->addWidget(progressBar);


        retranslateUi(SubTaskProgressBar);

        QMetaObject::connectSlotsByName(SubTaskProgressBar);
    } // setupUi

    void retranslateUi(QWidget *SubTaskProgressBar)
    {
        SubTaskProgressBar->setWindowTitle(QCoreApplication::translate("SubTaskProgressBar", "Form", nullptr));
        statusLabel->setText(QCoreApplication::translate("SubTaskProgressBar", "Sub Task Status...", nullptr));
        statusDetailsLabel->setText(QCoreApplication::translate("SubTaskProgressBar", "Status Details", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SubTaskProgressBar: public Ui_SubTaskProgressBar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUBTASKPROGRESSBAR_H
