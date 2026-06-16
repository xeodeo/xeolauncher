/********************************************************************************
** Form generated from reading UI file 'ExternalToolsPage.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXTERNALTOOLSPAGE_H
#define UI_EXTERNALTOOLSPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ExternalToolsPage
{
public:
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *editorsBox;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout;
    QLineEdit *jsonEditorTextBox;
    QPushButton *jsonEditorBrowseBtn;
    QLabel *label_4;
    QSpacerItem *verticalSpacer_7;
    QLabel *mceditLabel;
    QHBoxLayout *horizontalLayout_6;
    QLineEdit *mceditPathEdit;
    QPushButton *mceditPathBtn;
    QPushButton *mceditCheckBtn;
    QLabel *mceditLink;
    QGroupBox *profilersBox;
    QVBoxLayout *verticalLayout_4;
    QLabel *labelJsonEditor;
    QSpacerItem *verticalSpacer_9;
    QLabel *label;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *jprofilerPathEdit;
    QPushButton *jprofilerPathBtn;
    QPushButton *jprofilerCheckBtn;
    QLabel *jprofilerLink;
    QSpacerItem *verticalSpacer_8;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *jvisualvmPathEdit;
    QPushButton *jvisualvmPathBtn;
    QPushButton *jvisualvmCheckBtn;
    QLabel *jvisualvmLink;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *ExternalToolsPage)
    {
        if (ExternalToolsPage->objectName().isEmpty())
            ExternalToolsPage->setObjectName("ExternalToolsPage");
        ExternalToolsPage->resize(673, 823);
        verticalLayout = new QVBoxLayout(ExternalToolsPage);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(ExternalToolsPage);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName("scrollAreaWidgetContents_2");
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 669, 819));
        verticalLayout_3 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_3->setObjectName("verticalLayout_3");
        editorsBox = new QGroupBox(scrollAreaWidgetContents_2);
        editorsBox->setObjectName("editorsBox");
        verticalLayout_2 = new QVBoxLayout(editorsBox);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_3 = new QLabel(editorsBox);
        label_3->setObjectName("label_3");

        verticalLayout_2->addWidget(label_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        jsonEditorTextBox = new QLineEdit(editorsBox);
        jsonEditorTextBox->setObjectName("jsonEditorTextBox");

        horizontalLayout->addWidget(jsonEditorTextBox);

        jsonEditorBrowseBtn = new QPushButton(editorsBox);
        jsonEditorBrowseBtn->setObjectName("jsonEditorBrowseBtn");

        horizontalLayout->addWidget(jsonEditorBrowseBtn);


        verticalLayout_2->addLayout(horizontalLayout);

        label_4 = new QLabel(editorsBox);
        label_4->setObjectName("label_4");

        verticalLayout_2->addWidget(label_4);

        verticalSpacer_7 = new QSpacerItem(0, 6, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_7);

        mceditLabel = new QLabel(editorsBox);
        mceditLabel->setObjectName("mceditLabel");

        verticalLayout_2->addWidget(mceditLabel);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        mceditPathEdit = new QLineEdit(editorsBox);
        mceditPathEdit->setObjectName("mceditPathEdit");

        horizontalLayout_6->addWidget(mceditPathEdit);

        mceditPathBtn = new QPushButton(editorsBox);
        mceditPathBtn->setObjectName("mceditPathBtn");

        horizontalLayout_6->addWidget(mceditPathBtn);


        verticalLayout_2->addLayout(horizontalLayout_6);

        mceditCheckBtn = new QPushButton(editorsBox);
        mceditCheckBtn->setObjectName("mceditCheckBtn");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mceditCheckBtn->sizePolicy().hasHeightForWidth());
        mceditCheckBtn->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(mceditCheckBtn);

        mceditLink = new QLabel(editorsBox);
        mceditLink->setObjectName("mceditLink");
        mceditLink->setText(QString::fromUtf8("<html><head/><body><p><a href=\"https://www.mcedit.net/\">MCEdit Website</a> - Used as world editor in the instance Worlds menu.</p></body></html>"));

        verticalLayout_2->addWidget(mceditLink);


        verticalLayout_3->addWidget(editorsBox);

        profilersBox = new QGroupBox(scrollAreaWidgetContents_2);
        profilersBox->setObjectName("profilersBox");
        verticalLayout_4 = new QVBoxLayout(profilersBox);
        verticalLayout_4->setObjectName("verticalLayout_4");
        labelJsonEditor = new QLabel(profilersBox);
        labelJsonEditor->setObjectName("labelJsonEditor");

        verticalLayout_4->addWidget(labelJsonEditor);

        verticalSpacer_9 = new QSpacerItem(0, 6, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_4->addItem(verticalSpacer_9);

        label = new QLabel(profilersBox);
        label->setObjectName("label");

        verticalLayout_4->addWidget(label);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        jprofilerPathEdit = new QLineEdit(profilersBox);
        jprofilerPathEdit->setObjectName("jprofilerPathEdit");

        horizontalLayout_4->addWidget(jprofilerPathEdit);

        jprofilerPathBtn = new QPushButton(profilersBox);
        jprofilerPathBtn->setObjectName("jprofilerPathBtn");

        horizontalLayout_4->addWidget(jprofilerPathBtn);


        verticalLayout_4->addLayout(horizontalLayout_4);

        jprofilerCheckBtn = new QPushButton(profilersBox);
        jprofilerCheckBtn->setObjectName("jprofilerCheckBtn");
        sizePolicy.setHeightForWidth(jprofilerCheckBtn->sizePolicy().hasHeightForWidth());
        jprofilerCheckBtn->setSizePolicy(sizePolicy);

        verticalLayout_4->addWidget(jprofilerCheckBtn);

        jprofilerLink = new QLabel(profilersBox);
        jprofilerLink->setObjectName("jprofilerLink");
        jprofilerLink->setText(QString::fromUtf8("<html><head/><body><p><a href=\"https://www.ej-technologies.com/products/jprofiler/overview.html\">JProfiler Website</a></p></body></html>"));

        verticalLayout_4->addWidget(jprofilerLink);

        verticalSpacer_8 = new QSpacerItem(0, 6, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_4->addItem(verticalSpacer_8);

        label_2 = new QLabel(profilersBox);
        label_2->setObjectName("label_2");

        verticalLayout_4->addWidget(label_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        jvisualvmPathEdit = new QLineEdit(profilersBox);
        jvisualvmPathEdit->setObjectName("jvisualvmPathEdit");

        horizontalLayout_5->addWidget(jvisualvmPathEdit);

        jvisualvmPathBtn = new QPushButton(profilersBox);
        jvisualvmPathBtn->setObjectName("jvisualvmPathBtn");

        horizontalLayout_5->addWidget(jvisualvmPathBtn);


        verticalLayout_4->addLayout(horizontalLayout_5);

        jvisualvmCheckBtn = new QPushButton(profilersBox);
        jvisualvmCheckBtn->setObjectName("jvisualvmCheckBtn");
        sizePolicy.setHeightForWidth(jvisualvmCheckBtn->sizePolicy().hasHeightForWidth());
        jvisualvmCheckBtn->setSizePolicy(sizePolicy);

        verticalLayout_4->addWidget(jvisualvmCheckBtn);

        jvisualvmLink = new QLabel(profilersBox);
        jvisualvmLink->setObjectName("jvisualvmLink");
        jvisualvmLink->setText(QString::fromUtf8("<html><head/><body><p><a href=\"https://visualvm.github.io/\">VisualVM Website</a></p></body></html>"));

        verticalLayout_4->addWidget(jvisualvmLink);


        verticalLayout_3->addWidget(profilersBox);

        verticalSpacer = new QSpacerItem(0, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents_2);

        verticalLayout->addWidget(scrollArea);

#if QT_CONFIG(shortcut)
        label_3->setBuddy(jsonEditorTextBox);
        mceditLabel->setBuddy(mceditPathEdit);
        labelJsonEditor->setBuddy(jsonEditorTextBox);
        label->setBuddy(jprofilerPathEdit);
        label_2->setBuddy(jvisualvmPathEdit);
#endif // QT_CONFIG(shortcut)

        retranslateUi(ExternalToolsPage);

        QMetaObject::connectSlotsByName(ExternalToolsPage);
    } // setupUi

    void retranslateUi(QWidget *ExternalToolsPage)
    {
        editorsBox->setTitle(QCoreApplication::translate("ExternalToolsPage", "&Editors", nullptr));
        label_3->setText(QCoreApplication::translate("ExternalToolsPage", "&Text Editor", nullptr));
        jsonEditorBrowseBtn->setText(QCoreApplication::translate("ExternalToolsPage", "Browse", nullptr));
        label_4->setText(QCoreApplication::translate("ExternalToolsPage", "Used to edit component JSON files.", nullptr));
        mceditLabel->setText(QCoreApplication::translate("ExternalToolsPage", "&MCEdit", nullptr));
        mceditPathBtn->setText(QCoreApplication::translate("ExternalToolsPage", "Browse", nullptr));
        mceditCheckBtn->setText(QCoreApplication::translate("ExternalToolsPage", "Check", nullptr));
        profilersBox->setTitle(QCoreApplication::translate("ExternalToolsPage", "&Profilers", nullptr));
        labelJsonEditor->setText(QCoreApplication::translate("ExternalToolsPage", "Profilers are accessible through the Launch dropdown menu.", nullptr));
        label->setText(QCoreApplication::translate("ExternalToolsPage", "J&Profiler", nullptr));
        jprofilerPathBtn->setText(QCoreApplication::translate("ExternalToolsPage", "Browse", nullptr));
        jprofilerCheckBtn->setText(QCoreApplication::translate("ExternalToolsPage", "Check", nullptr));
        label_2->setText(QCoreApplication::translate("ExternalToolsPage", "&VisualVM", nullptr));
        jvisualvmPathBtn->setText(QCoreApplication::translate("ExternalToolsPage", "Browse", nullptr));
        jvisualvmCheckBtn->setText(QCoreApplication::translate("ExternalToolsPage", "Check", nullptr));
        (void)ExternalToolsPage;
    } // retranslateUi

};

namespace Ui {
    class ExternalToolsPage: public Ui_ExternalToolsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXTERNALTOOLSPAGE_H
