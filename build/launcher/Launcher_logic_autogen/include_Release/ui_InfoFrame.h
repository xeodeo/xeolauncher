/********************************************************************************
** Form generated from reading UI file 'InfoFrame.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFOFRAME_H
#define UI_INFOFRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InfoFrame
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *iconLabel;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout;
    QLabel *nameLabel;
    QLabel *descriptionLabel;
    QLabel *issueTrackerLabel;
    QLabel *licenseLabel;

    void setupUi(QFrame *InfoFrame)
    {
        if (InfoFrame->objectName().isEmpty())
            InfoFrame->setObjectName("InfoFrame");
        InfoFrame->resize(527, 120);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(InfoFrame->sizePolicy().hasHeightForWidth());
        InfoFrame->setSizePolicy(sizePolicy);
        InfoFrame->setMaximumSize(QSize(16777215, 120));
        horizontalLayout = new QHBoxLayout(InfoFrame);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        iconLabel = new QLabel(InfoFrame);
        iconLabel->setObjectName("iconLabel");
        iconLabel->setMinimumSize(QSize(0, 0));
        iconLabel->setMaximumSize(QSize(64, 64));
        iconLabel->setText(QString::fromUtf8(""));
        iconLabel->setScaledContents(false);
        iconLabel->setMargin(0);

        horizontalLayout->addWidget(iconLabel);

        scrollArea = new QScrollArea(InfoFrame);
        scrollArea->setObjectName("scrollArea");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy1);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName("scrollAreaWidgetContents_2");
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 455, 118));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout->setObjectName("verticalLayout");
        nameLabel = new QLabel(scrollAreaWidgetContents_2);
        nameLabel->setObjectName("nameLabel");
        nameLabel->setText(QString::fromUtf8(""));
        nameLabel->setTextFormat(Qt::RichText);
        nameLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        nameLabel->setWordWrap(true);
        nameLabel->setOpenExternalLinks(true);
        nameLabel->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse|Qt::TextBrowserInteraction|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout->addWidget(nameLabel);

        descriptionLabel = new QLabel(scrollAreaWidgetContents_2);
        descriptionLabel->setObjectName("descriptionLabel");
#if QT_CONFIG(tooltip)
        descriptionLabel->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
        descriptionLabel->setText(QString::fromUtf8(""));
        descriptionLabel->setTextFormat(Qt::RichText);
        descriptionLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        descriptionLabel->setWordWrap(true);
        descriptionLabel->setOpenExternalLinks(true);
        descriptionLabel->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse|Qt::TextBrowserInteraction|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout->addWidget(descriptionLabel);

        issueTrackerLabel = new QLabel(scrollAreaWidgetContents_2);
        issueTrackerLabel->setObjectName("issueTrackerLabel");
        issueTrackerLabel->setTextFormat(Qt::RichText);
        issueTrackerLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        issueTrackerLabel->setWordWrap(true);
        issueTrackerLabel->setOpenExternalLinks(true);
        issueTrackerLabel->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse|Qt::TextBrowserInteraction|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout->addWidget(issueTrackerLabel);

        licenseLabel = new QLabel(scrollAreaWidgetContents_2);
        licenseLabel->setObjectName("licenseLabel");
        licenseLabel->setTextFormat(Qt::RichText);
        licenseLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        licenseLabel->setWordWrap(true);
        licenseLabel->setOpenExternalLinks(true);
        licenseLabel->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse|Qt::TextBrowserInteraction|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout->addWidget(licenseLabel);

        scrollArea->setWidget(scrollAreaWidgetContents_2);

        horizontalLayout->addWidget(scrollArea);


        retranslateUi(InfoFrame);

        QMetaObject::connectSlotsByName(InfoFrame);
    } // setupUi

    void retranslateUi(QFrame *InfoFrame)
    {
        issueTrackerLabel->setText(QString());
        licenseLabel->setText(QString());
        (void)InfoFrame;
    } // retranslateUi

};

namespace Ui {
    class InfoFrame: public Ui_InfoFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFOFRAME_H
