/********************************************************************************
** Form generated from reading UI file 'ProxyPage.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROXYPAGE_H
#define UI_PROXYPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProxyPage
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *proxyPlainTextWarningLabel_2;
    QGroupBox *proxyTypeBox;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *proxyDefaultBtn;
    QRadioButton *proxyNoneBtn;
    QRadioButton *proxySOCKS5Btn;
    QRadioButton *proxyHTTPBtn;
    QGroupBox *proxyAddrBox;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *proxyAddrEdit;
    QSpinBox *proxyPortEdit;
    QSpacerItem *horizontalSpacer;
    QGroupBox *proxyAuthBox;
    QGridLayout *gridLayout;
    QLabel *proxyUsernameLabel;
    QLineEdit *proxyUserEdit;
    QLabel *proxyPasswordLabel;
    QLineEdit *proxyPassEdit;
    QLabel *proxyPlainTextWarningLabel;
    QSpacerItem *verticalSpacer;
    QButtonGroup *proxyGroup;

    void setupUi(QWidget *ProxyPage)
    {
        if (ProxyPage->objectName().isEmpty())
            ProxyPage->setObjectName("ProxyPage");
        ProxyPage->resize(598, 617);
        QSizePolicy sizePolicy(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ProxyPage->sizePolicy().hasHeightForWidth());
        ProxyPage->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(ProxyPage);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, -1, 0);
        proxyPlainTextWarningLabel_2 = new QLabel(ProxyPage);
        proxyPlainTextWarningLabel_2->setObjectName("proxyPlainTextWarningLabel_2");
        proxyPlainTextWarningLabel_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        proxyPlainTextWarningLabel_2->setWordWrap(true);

        verticalLayout_2->addWidget(proxyPlainTextWarningLabel_2);

        proxyTypeBox = new QGroupBox(ProxyPage);
        proxyTypeBox->setObjectName("proxyTypeBox");
        verticalLayout_3 = new QVBoxLayout(proxyTypeBox);
        verticalLayout_3->setObjectName("verticalLayout_3");
        proxyDefaultBtn = new QRadioButton(proxyTypeBox);
        proxyGroup = new QButtonGroup(ProxyPage);
        proxyGroup->setObjectName("proxyGroup");
        proxyGroup->addButton(proxyDefaultBtn);
        proxyDefaultBtn->setObjectName("proxyDefaultBtn");

        verticalLayout_3->addWidget(proxyDefaultBtn);

        proxyNoneBtn = new QRadioButton(proxyTypeBox);
        proxyGroup->addButton(proxyNoneBtn);
        proxyNoneBtn->setObjectName("proxyNoneBtn");

        verticalLayout_3->addWidget(proxyNoneBtn);

        proxySOCKS5Btn = new QRadioButton(proxyTypeBox);
        proxyGroup->addButton(proxySOCKS5Btn);
        proxySOCKS5Btn->setObjectName("proxySOCKS5Btn");

        verticalLayout_3->addWidget(proxySOCKS5Btn);

        proxyHTTPBtn = new QRadioButton(proxyTypeBox);
        proxyGroup->addButton(proxyHTTPBtn);
        proxyHTTPBtn->setObjectName("proxyHTTPBtn");

        verticalLayout_3->addWidget(proxyHTTPBtn);


        verticalLayout_2->addWidget(proxyTypeBox);

        proxyAddrBox = new QGroupBox(ProxyPage);
        proxyAddrBox->setObjectName("proxyAddrBox");
        horizontalLayout_2 = new QHBoxLayout(proxyAddrBox);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        proxyAddrEdit = new QLineEdit(proxyAddrBox);
        proxyAddrEdit->setObjectName("proxyAddrEdit");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(proxyAddrEdit->sizePolicy().hasHeightForWidth());
        proxyAddrEdit->setSizePolicy(sizePolicy1);
        proxyAddrEdit->setMinimumSize(QSize(300, 0));
        proxyAddrEdit->setPlaceholderText(QString::fromUtf8("127.0.0.1"));

        horizontalLayout_2->addWidget(proxyAddrEdit);

        proxyPortEdit = new QSpinBox(proxyAddrBox);
        proxyPortEdit->setObjectName("proxyPortEdit");
        proxyPortEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        proxyPortEdit->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        proxyPortEdit->setMaximum(65535);
        proxyPortEdit->setValue(8080);

        horizontalLayout_2->addWidget(proxyPortEdit);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout_2->addWidget(proxyAddrBox);

        proxyAuthBox = new QGroupBox(ProxyPage);
        proxyAuthBox->setObjectName("proxyAuthBox");
        gridLayout = new QGridLayout(proxyAuthBox);
        gridLayout->setObjectName("gridLayout");
        proxyUsernameLabel = new QLabel(proxyAuthBox);
        proxyUsernameLabel->setObjectName("proxyUsernameLabel");

        gridLayout->addWidget(proxyUsernameLabel, 0, 0, 1, 1);

        proxyUserEdit = new QLineEdit(proxyAuthBox);
        proxyUserEdit->setObjectName("proxyUserEdit");

        gridLayout->addWidget(proxyUserEdit, 0, 1, 1, 1);

        proxyPasswordLabel = new QLabel(proxyAuthBox);
        proxyPasswordLabel->setObjectName("proxyPasswordLabel");

        gridLayout->addWidget(proxyPasswordLabel, 1, 0, 1, 1);

        proxyPassEdit = new QLineEdit(proxyAuthBox);
        proxyPassEdit->setObjectName("proxyPassEdit");
        proxyPassEdit->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(proxyPassEdit, 1, 1, 1, 1);

        proxyPlainTextWarningLabel = new QLabel(proxyAuthBox);
        proxyPlainTextWarningLabel->setObjectName("proxyPlainTextWarningLabel");
        proxyPlainTextWarningLabel->setWordWrap(true);

        gridLayout->addWidget(proxyPlainTextWarningLabel, 2, 0, 1, 2);


        verticalLayout_2->addWidget(proxyAuthBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

#if QT_CONFIG(shortcut)
        proxyUsernameLabel->setBuddy(proxyUserEdit);
        proxyPasswordLabel->setBuddy(proxyPassEdit);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(proxyDefaultBtn, proxyNoneBtn);
        QWidget::setTabOrder(proxyNoneBtn, proxySOCKS5Btn);
        QWidget::setTabOrder(proxySOCKS5Btn, proxyHTTPBtn);
        QWidget::setTabOrder(proxyHTTPBtn, proxyAddrEdit);
        QWidget::setTabOrder(proxyAddrEdit, proxyPortEdit);
        QWidget::setTabOrder(proxyPortEdit, proxyUserEdit);
        QWidget::setTabOrder(proxyUserEdit, proxyPassEdit);

        retranslateUi(ProxyPage);

        QMetaObject::connectSlotsByName(ProxyPage);
    } // setupUi

    void retranslateUi(QWidget *ProxyPage)
    {
        proxyPlainTextWarningLabel_2->setText(QCoreApplication::translate("ProxyPage", "This only applies to the launcher. Minecraft does not accept proxy settings.", nullptr));
        proxyTypeBox->setTitle(QCoreApplication::translate("ProxyPage", "Type", nullptr));
#if QT_CONFIG(tooltip)
        proxyDefaultBtn->setToolTip(QCoreApplication::translate("ProxyPage", "Uses your system's default proxy settings.", nullptr));
#endif // QT_CONFIG(tooltip)
        proxyDefaultBtn->setText(QCoreApplication::translate("ProxyPage", "Use s&ystem settings", nullptr));
        proxyNoneBtn->setText(QCoreApplication::translate("ProxyPage", "&None", nullptr));
        proxySOCKS5Btn->setText(QCoreApplication::translate("ProxyPage", "&SOCKS5", nullptr));
        proxyHTTPBtn->setText(QCoreApplication::translate("ProxyPage", "&HTTP", nullptr));
        proxyAddrBox->setTitle(QCoreApplication::translate("ProxyPage", "&Address and Port", nullptr));
        proxyAuthBox->setTitle(QCoreApplication::translate("ProxyPage", "Authentication", nullptr));
        proxyUsernameLabel->setText(QCoreApplication::translate("ProxyPage", "&Username:", nullptr));
        proxyPasswordLabel->setText(QCoreApplication::translate("ProxyPage", "&Password:", nullptr));
        proxyPlainTextWarningLabel->setText(QCoreApplication::translate("ProxyPage", "Note: Proxy username and password are stored in plain text inside the launcher's configuration file!", nullptr));
        (void)ProxyPage;
    } // retranslateUi

};

namespace Ui {
    class ProxyPage: public Ui_ProxyPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROXYPAGE_H
