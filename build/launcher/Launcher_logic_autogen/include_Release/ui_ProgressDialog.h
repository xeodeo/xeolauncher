/********************************************************************************
** Form generated from reading UI file 'ProgressDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROGRESSDIALOG_H
#define UI_PROGRESSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProgressDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *globalStatusLabel;
    QLabel *globalStatusDetailsLabel;
    QProgressBar *globalProgressBar;
    QScrollArea *taskProgressScrollArea;
    QWidget *taskProgressContainer;
    QVBoxLayout *taskProgressLayout;
    QPushButton *skipButton;

    void setupUi(QDialog *ProgressDialog)
    {
        if (ProgressDialog->objectName().isEmpty())
            ProgressDialog->setObjectName("ProgressDialog");
        ProgressDialog->resize(480, 210);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(ProgressDialog->sizePolicy().hasHeightForWidth());
        ProgressDialog->setSizePolicy(sizePolicy);
        ProgressDialog->setMinimumSize(QSize(480, 210));
        ProgressDialog->setSizeGripEnabled(true);
        verticalLayout = new QVBoxLayout(ProgressDialog);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        globalStatusLabel = new QLabel(ProgressDialog);
        globalStatusLabel->setObjectName("globalStatusLabel");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(globalStatusLabel->sizePolicy().hasHeightForWidth());
        globalStatusLabel->setSizePolicy(sizePolicy1);
        globalStatusLabel->setMinimumSize(QSize(0, 15));
        globalStatusLabel->setWordWrap(true);

        horizontalLayout->addWidget(globalStatusLabel);

        globalStatusDetailsLabel = new QLabel(ProgressDialog);
        globalStatusDetailsLabel->setObjectName("globalStatusDetailsLabel");
        globalStatusDetailsLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(globalStatusDetailsLabel);

        horizontalLayout->setStretch(0, 1);

        verticalLayout->addLayout(horizontalLayout);

        globalProgressBar = new QProgressBar(ProgressDialog);
        globalProgressBar->setObjectName("globalProgressBar");
        globalProgressBar->setEnabled(true);
        globalProgressBar->setMinimumSize(QSize(0, 24));
        globalProgressBar->setValue(24);

        verticalLayout->addWidget(globalProgressBar);

        taskProgressScrollArea = new QScrollArea(ProgressDialog);
        taskProgressScrollArea->setObjectName("taskProgressScrollArea");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(taskProgressScrollArea->sizePolicy().hasHeightForWidth());
        taskProgressScrollArea->setSizePolicy(sizePolicy2);
        taskProgressScrollArea->setMinimumSize(QSize(0, 100));
        taskProgressScrollArea->setFrameShape(QFrame::StyledPanel);
        taskProgressScrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        taskProgressScrollArea->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        taskProgressScrollArea->setWidgetResizable(true);
        taskProgressContainer = new QWidget();
        taskProgressContainer->setObjectName("taskProgressContainer");
        taskProgressContainer->setGeometry(QRect(0, 0, 460, 108));
        taskProgressLayout = new QVBoxLayout(taskProgressContainer);
        taskProgressLayout->setSpacing(2);
        taskProgressLayout->setObjectName("taskProgressLayout");
        taskProgressScrollArea->setWidget(taskProgressContainer);

        verticalLayout->addWidget(taskProgressScrollArea);

        skipButton = new QPushButton(ProgressDialog);
        skipButton->setObjectName("skipButton");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(skipButton->sizePolicy().hasHeightForWidth());
        skipButton->setSizePolicy(sizePolicy3);

        verticalLayout->addWidget(skipButton);


        retranslateUi(ProgressDialog);

        QMetaObject::connectSlotsByName(ProgressDialog);
    } // setupUi

    void retranslateUi(QDialog *ProgressDialog)
    {
        ProgressDialog->setWindowTitle(QCoreApplication::translate("ProgressDialog", "Please wait...", nullptr));
        globalStatusLabel->setText(QCoreApplication::translate("ProgressDialog", "Global Task Status...", nullptr));
        globalStatusDetailsLabel->setText(QCoreApplication::translate("ProgressDialog", "Global Status Details...", nullptr));
        skipButton->setText(QCoreApplication::translate("ProgressDialog", "Skip", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProgressDialog: public Ui_ProgressDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROGRESSDIALOG_H
