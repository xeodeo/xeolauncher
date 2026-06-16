/********************************************************************************
** Form generated from reading UI file 'ManagedPackPage.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGEDPACKPAGE_H
#define UI_MANAGEDPACKPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ui/widgets/ProjectDescriptionPage.h"

QT_BEGIN_NAMESPACE

class Ui_ManagedPackPage
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *packInformationBox;
    QFormLayout *formLayout_2;
    QHBoxLayout *packNameLayout;
    QLabel *packNameLabel;
    QLabel *packName;
    QHBoxLayout *packVersionLayout;
    QLabel *packVersionLabel;
    QLabel *packVersion;
    QHBoxLayout *packOriginLayout;
    QLabel *packOriginLabel;
    QLabel *packOrigin;
    QFrame *line;
    QHBoxLayout *horizontalLayout;
    QLabel *updateToVersionLabel;
    QComboBox *versionsComboBox;
    QLineEdit *urlLine;
    QPushButton *updateButton;
    QPushButton *updateFromFileButton;
    QGroupBox *changelogBox;
    QVBoxLayout *verticalLayout_3;
    ProjectDescriptionPage *changelogTextBrowser;
    QPushButton *reloadButton;

    void setupUi(QWidget *ManagedPackPage)
    {
        if (ManagedPackPage->objectName().isEmpty())
            ManagedPackPage->setObjectName("ManagedPackPage");
        ManagedPackPage->resize(731, 538);
        gridLayout = new QGridLayout(ManagedPackPage);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 6, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        packInformationBox = new QGroupBox(ManagedPackPage);
        packInformationBox->setObjectName("packInformationBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(packInformationBox->sizePolicy().hasHeightForWidth());
        packInformationBox->setSizePolicy(sizePolicy);
        formLayout_2 = new QFormLayout(packInformationBox);
        formLayout_2->setObjectName("formLayout_2");
        packNameLayout = new QHBoxLayout();
        packNameLayout->setObjectName("packNameLayout");
        packNameLabel = new QLabel(packInformationBox);
        packNameLabel->setObjectName("packNameLabel");

        packNameLayout->addWidget(packNameLabel);

        packName = new QLabel(packInformationBox);
        packName->setObjectName("packName");
        packName->setText(QString::fromUtf8("placeholder"));

        packNameLayout->addWidget(packName);


        formLayout_2->setLayout(0, QFormLayout::LabelRole, packNameLayout);

        packVersionLayout = new QHBoxLayout();
        packVersionLayout->setObjectName("packVersionLayout");
        packVersionLabel = new QLabel(packInformationBox);
        packVersionLabel->setObjectName("packVersionLabel");

        packVersionLayout->addWidget(packVersionLabel);

        packVersion = new QLabel(packInformationBox);
        packVersion->setObjectName("packVersion");
        packVersion->setCursor(QCursor(Qt::CursorShape::IBeamCursor));
        packVersion->setText(QString::fromUtf8("placeholder"));
        packVersion->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        packVersionLayout->addWidget(packVersion);


        formLayout_2->setLayout(1, QFormLayout::LabelRole, packVersionLayout);

        packOriginLayout = new QHBoxLayout();
        packOriginLayout->setObjectName("packOriginLayout");
        packOriginLabel = new QLabel(packInformationBox);
        packOriginLabel->setObjectName("packOriginLabel");

        packOriginLayout->addWidget(packOriginLabel);

        packOrigin = new QLabel(packInformationBox);
        packOrigin->setObjectName("packOrigin");
        packOrigin->setCursor(QCursor(Qt::CursorShape::IBeamCursor));
        packOrigin->setText(QString::fromUtf8("placeholder"));
        packOrigin->setTextFormat(Qt::RichText);
        packOrigin->setOpenExternalLinks(true);
        packOrigin->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        packOriginLayout->addWidget(packOrigin);


        formLayout_2->setLayout(2, QFormLayout::LabelRole, packOriginLayout);


        verticalLayout_2->addWidget(packInformationBox);

        line = new QFrame(ManagedPackPage);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout_2->addWidget(line);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        updateToVersionLabel = new QLabel(ManagedPackPage);
        updateToVersionLabel->setObjectName("updateToVersionLabel");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(updateToVersionLabel->sizePolicy().hasHeightForWidth());
        updateToVersionLabel->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(updateToVersionLabel);

        versionsComboBox = new QComboBox(ManagedPackPage);
        versionsComboBox->setObjectName("versionsComboBox");

        horizontalLayout->addWidget(versionsComboBox);

        urlLine = new QLineEdit(ManagedPackPage);
        urlLine->setObjectName("urlLine");

        horizontalLayout->addWidget(urlLine);

        updateButton = new QPushButton(ManagedPackPage);
        updateButton->setObjectName("updateButton");
        updateButton->setEnabled(false);
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(updateButton->sizePolicy().hasHeightForWidth());
        updateButton->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(updateButton);

        updateFromFileButton = new QPushButton(ManagedPackPage);
        updateFromFileButton->setObjectName("updateFromFileButton");
        sizePolicy2.setHeightForWidth(updateFromFileButton->sizePolicy().hasHeightForWidth());
        updateFromFileButton->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(updateFromFileButton);


        verticalLayout_2->addLayout(horizontalLayout);

        changelogBox = new QGroupBox(ManagedPackPage);
        changelogBox->setObjectName("changelogBox");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(changelogBox->sizePolicy().hasHeightForWidth());
        changelogBox->setSizePolicy(sizePolicy3);
        verticalLayout_3 = new QVBoxLayout(changelogBox);
        verticalLayout_3->setObjectName("verticalLayout_3");
        changelogTextBrowser = new ProjectDescriptionPage(changelogBox);
        changelogTextBrowser->setObjectName("changelogTextBrowser");
        changelogTextBrowser->setOpenLinks(false);

        verticalLayout_3->addWidget(changelogTextBrowser);


        verticalLayout_2->addWidget(changelogBox);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);

        reloadButton = new QPushButton(ManagedPackPage);
        reloadButton->setObjectName("reloadButton");

        gridLayout->addWidget(reloadButton, 1, 0, 1, 1);


        retranslateUi(ManagedPackPage);

        QMetaObject::connectSlotsByName(ManagedPackPage);
    } // setupUi

    void retranslateUi(QWidget *ManagedPackPage)
    {
        packInformationBox->setTitle(QCoreApplication::translate("ManagedPackPage", "Pack Information", nullptr));
        packNameLabel->setText(QCoreApplication::translate("ManagedPackPage", "Pack Name:", nullptr));
        packVersionLabel->setText(QCoreApplication::translate("ManagedPackPage", "Current version:", nullptr));
        packOriginLabel->setText(QCoreApplication::translate("ManagedPackPage", "Provider information:", nullptr));
        updateToVersionLabel->setText(QCoreApplication::translate("ManagedPackPage", "Update to version:", nullptr));
        updateButton->setText(QCoreApplication::translate("ManagedPackPage", "Fetching versions...", nullptr));
        updateFromFileButton->setText(QCoreApplication::translate("ManagedPackPage", "Update From File", nullptr));
        changelogBox->setTitle(QCoreApplication::translate("ManagedPackPage", "Changelog", nullptr));
        changelogTextBrowser->setPlaceholderText(QCoreApplication::translate("ManagedPackPage", "No changelog available for this version!", nullptr));
        reloadButton->setText(QCoreApplication::translate("ManagedPackPage", "Reload page", nullptr));
        (void)ManagedPackPage;
    } // retranslateUi

};

namespace Ui {
    class ManagedPackPage: public Ui_ManagedPackPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGEDPACKPAGE_H
