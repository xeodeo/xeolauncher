/********************************************************************************
** Form generated from reading UI file 'MSALoginDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MSALOGINDIALOG_H
#define UI_MSALOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MSALoginDialog
{
public:
    QVBoxLayout *verticalLayout_6;
    QStackedWidget *stackedWidget2;
    QWidget *loadingPage2;
    QVBoxLayout *verticalLayout_31;
    QSpacerItem *verticalSpacer_4;
    QLabel *loadingLabel2;
    QLabel *status2;
    QSpacerItem *verticalSpacer_31;
    QWidget *mpPage1;
    QVBoxLayout *verticalLayout_21;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *loginButton;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_5;
    QFrame *line_3;
    QLabel *orLabel;
    QFrame *line_4;
    QStackedWidget *stackedWidget;
    QWidget *loadingPage;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_41;
    QLabel *loadingLabel;
    QLabel *status;
    QSpacerItem *verticalSpacer_3;
    QWidget *mpPage;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *qr;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *code;
    QPushButton *copyCode;
    QSpacerItem *horizontalSpacer_4;
    QLabel *qrMessage;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *MSALoginDialog)
    {
        if (MSALoginDialog->objectName().isEmpty())
            MSALoginDialog->setObjectName("MSALoginDialog");
        MSALoginDialog->resize(440, 447);
        MSALoginDialog->setMinimumSize(QSize(0, 430));
        verticalLayout_6 = new QVBoxLayout(MSALoginDialog);
        verticalLayout_6->setObjectName("verticalLayout_6");
        stackedWidget2 = new QStackedWidget(MSALoginDialog);
        stackedWidget2->setObjectName("stackedWidget2");
        loadingPage2 = new QWidget();
        loadingPage2->setObjectName("loadingPage2");
        verticalLayout_31 = new QVBoxLayout(loadingPage2);
        verticalLayout_31->setObjectName("verticalLayout_31");
        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_31->addItem(verticalSpacer_4);

        loadingLabel2 = new QLabel(loadingPage2);
        loadingLabel2->setObjectName("loadingLabel2");
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        loadingLabel2->setFont(font);
        loadingLabel2->setAlignment(Qt::AlignCenter);
        loadingLabel2->setWordWrap(true);

        verticalLayout_31->addWidget(loadingLabel2);

        status2 = new QLabel(loadingPage2);
        status2->setObjectName("status2");
        status2->setAlignment(Qt::AlignCenter);
        status2->setWordWrap(true);

        verticalLayout_31->addWidget(status2);

        verticalSpacer_31 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_31->addItem(verticalSpacer_31);

        stackedWidget2->addWidget(loadingPage2);
        mpPage1 = new QWidget();
        mpPage1->setObjectName("mpPage1");
        verticalLayout_21 = new QVBoxLayout(mpPage1);
        verticalLayout_21->setObjectName("verticalLayout_21");
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_5);

        loginButton = new QPushButton(mpPage1);
        loginButton->setObjectName("loginButton");
        loginButton->setMinimumSize(QSize(250, 40));

        horizontalLayout_7->addWidget(loginButton);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_6);


        verticalLayout_21->addLayout(horizontalLayout_7);

        stackedWidget2->addWidget(mpPage1);

        verticalLayout_6->addWidget(stackedWidget2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        line_3 = new QFrame(MSALoginDialog);
        line_3->setObjectName("line_3");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(line_3->sizePolicy().hasHeightForWidth());
        line_3->setSizePolicy(sizePolicy);
        line_3->setFrameShape(QFrame::Shape::HLine);
        line_3->setFrameShadow(QFrame::Shadow::Sunken);

        horizontalLayout_5->addWidget(line_3);

        orLabel = new QLabel(MSALoginDialog);
        orLabel->setObjectName("orLabel");
        QFont font1;
        font1.setPointSize(16);
        orLabel->setFont(font1);
        orLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(orLabel);

        line_4 = new QFrame(MSALoginDialog);
        line_4->setObjectName("line_4");
        sizePolicy.setHeightForWidth(line_4->sizePolicy().hasHeightForWidth());
        line_4->setSizePolicy(sizePolicy);
        line_4->setFrameShape(QFrame::Shape::HLine);
        line_4->setFrameShadow(QFrame::Shadow::Sunken);

        horizontalLayout_5->addWidget(line_4);


        verticalLayout_6->addLayout(horizontalLayout_5);

        stackedWidget = new QStackedWidget(MSALoginDialog);
        stackedWidget->setObjectName("stackedWidget");
        loadingPage = new QWidget();
        loadingPage->setObjectName("loadingPage");
        verticalLayout_3 = new QVBoxLayout(loadingPage);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalSpacer_41 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_41);

        loadingLabel = new QLabel(loadingPage);
        loadingLabel->setObjectName("loadingLabel");
        loadingLabel->setFont(font);
        loadingLabel->setAlignment(Qt::AlignCenter);
        loadingLabel->setWordWrap(true);

        verticalLayout_3->addWidget(loadingLabel);

        status = new QLabel(loadingPage);
        status->setObjectName("status");
        status->setAlignment(Qt::AlignCenter);
        status->setWordWrap(true);

        verticalLayout_3->addWidget(status);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        stackedWidget->addWidget(loadingPage);
        mpPage = new QWidget();
        mpPage->setObjectName("mpPage");
        verticalLayout_2 = new QVBoxLayout(mpPage);
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        qr = new QLabel(mpPage);
        qr->setObjectName("qr");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(qr->sizePolicy().hasHeightForWidth());
        qr->setSizePolicy(sizePolicy1);
        qr->setMinimumSize(QSize(150, 150));
        qr->setMaximumSize(QSize(150, 150));
        qr->setScaledContents(true);
        qr->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(qr);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        code = new QLabel(mpPage);
        code->setObjectName("code");
        QFont font2;
        font2.setPointSize(30);
        font2.setBold(true);
        code->setFont(font2);
        code->setCursor(QCursor(Qt::CursorShape::IBeamCursor));
        code->setAlignment(Qt::AlignCenter);
        code->setTextInteractionFlags(Qt::TextBrowserInteraction);

        horizontalLayout_2->addWidget(code);

        copyCode = new QPushButton(mpPage);
        copyCode->setObjectName("copyCode");
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("copy");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8("."), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        }
        copyCode->setIcon(icon);
        copyCode->setIconSize(QSize(22, 22));
        copyCode->setFlat(true);

        horizontalLayout_2->addWidget(copyCode);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout_2->addLayout(horizontalLayout_2);

        qrMessage = new QLabel(mpPage);
        qrMessage->setObjectName("qrMessage");
        qrMessage->setAlignment(Qt::AlignCenter);
        qrMessage->setWordWrap(true);
        qrMessage->setOpenExternalLinks(true);
        qrMessage->setTextInteractionFlags(Qt::TextBrowserInteraction);

        verticalLayout_2->addWidget(qrMessage);

        stackedWidget->addWidget(mpPage);

        verticalLayout_6->addWidget(stackedWidget);

        buttonBox = new QDialogButtonBox(MSALoginDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel);

        verticalLayout_6->addWidget(buttonBox);


        retranslateUi(MSALoginDialog);

        stackedWidget2->setCurrentIndex(1);
        loginButton->setDefault(true);
        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MSALoginDialog);
    } // setupUi

    void retranslateUi(QDialog *MSALoginDialog)
    {
        MSALoginDialog->setWindowTitle(QCoreApplication::translate("MSALoginDialog", "Add Microsoft Account", nullptr));
        loadingLabel2->setText(QCoreApplication::translate("MSALoginDialog", "Please wait...", nullptr));
        status2->setText(QCoreApplication::translate("MSALoginDialog", "Status", nullptr));
        loginButton->setText(QCoreApplication::translate("MSALoginDialog", "Sign in with Microsoft", nullptr));
        orLabel->setText(QCoreApplication::translate("MSALoginDialog", "Or", nullptr));
        loadingLabel->setText(QCoreApplication::translate("MSALoginDialog", "Please wait...", nullptr));
        status->setText(QCoreApplication::translate("MSALoginDialog", "Status", nullptr));
        qr->setText(QString());
        code->setText(QCoreApplication::translate("MSALoginDialog", "CODE", nullptr));
#if QT_CONFIG(tooltip)
        copyCode->setToolTip(QCoreApplication::translate("MSALoginDialog", "Copy code to clipboard", nullptr));
#endif // QT_CONFIG(tooltip)
        copyCode->setText(QString());
        qrMessage->setText(QCoreApplication::translate("MSALoginDialog", "Info", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MSALoginDialog: public Ui_MSALoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MSALOGINDIALOG_H
