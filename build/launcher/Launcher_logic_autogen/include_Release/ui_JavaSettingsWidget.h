/********************************************************************************
** Form generated from reading UI file 'JavaSettingsWidget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JAVASETTINGSWIDGET_H
#define UI_JAVASETTINGSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_JavaSettingsWidget
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *javaInstallationGroupBox;
    QGridLayout *gridLayout_2;
    QCheckBox *autodetectJavaCheckBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *javaDetectBtn;
    QPushButton *javaBrowseBtn;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *javaTestBtn;
    QPushButton *javaDownloadBtn;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *verticalSpacer_4;
    QCheckBox *autodownloadJavaCheckBox;
    QCheckBox *skipCompatibilityCheckBox;
    QLineEdit *javaPathTextBox;
    QLabel *label_4;
    QCheckBox *skipWizardCheckBox;
    QSpacerItem *verticalSpacer_5;
    QGroupBox *memoryGroupBox;
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout;
    QLabel *labelMinMem;
    QHBoxLayout *horizontalLayout_3;
    QSpinBox *minMemSpinBox;
    QLabel *label;
    QLabel *labelMaxMem;
    QHBoxLayout *horizontalLayout_5;
    QSpinBox *maxMemSpinBox;
    QLabel *label_2;
    QLabel *label_11;
    QHBoxLayout *horizontalLayout_6;
    QSpinBox *permGenSpinBox;
    QLabel *label_3;
    QCheckBox *lowMemWarningCheckBox;
    QLabel *labelMaxMemNotice;
    QGroupBox *javaArgumentsGroupBox;
    QGridLayout *gridLayout_6;
    QPlainTextEdit *jvmArgsTextBox;

    void setupUi(QWidget *JavaSettingsWidget)
    {
        if (JavaSettingsWidget->objectName().isEmpty())
            JavaSettingsWidget->setObjectName("JavaSettingsWidget");
        JavaSettingsWidget->resize(500, 1000);
        verticalLayout = new QVBoxLayout(JavaSettingsWidget);
        verticalLayout->setObjectName("verticalLayout");
        javaInstallationGroupBox = new QGroupBox(JavaSettingsWidget);
        javaInstallationGroupBox->setObjectName("javaInstallationGroupBox");
        javaInstallationGroupBox->setEnabled(true);
        javaInstallationGroupBox->setCheckable(false);
        javaInstallationGroupBox->setChecked(false);
        gridLayout_2 = new QGridLayout(javaInstallationGroupBox);
        gridLayout_2->setObjectName("gridLayout_2");
        autodetectJavaCheckBox = new QCheckBox(javaInstallationGroupBox);
        autodetectJavaCheckBox->setObjectName("autodetectJavaCheckBox");

        gridLayout_2->addWidget(autodetectJavaCheckBox, 7, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        javaDetectBtn = new QPushButton(javaInstallationGroupBox);
        javaDetectBtn->setObjectName("javaDetectBtn");

        horizontalLayout->addWidget(javaDetectBtn);

        javaBrowseBtn = new QPushButton(javaInstallationGroupBox);
        javaBrowseBtn->setObjectName("javaBrowseBtn");

        horizontalLayout->addWidget(javaBrowseBtn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout_2->addLayout(horizontalLayout, 2, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        javaTestBtn = new QPushButton(javaInstallationGroupBox);
        javaTestBtn->setObjectName("javaTestBtn");

        horizontalLayout_4->addWidget(javaTestBtn);

        javaDownloadBtn = new QPushButton(javaInstallationGroupBox);
        javaDownloadBtn->setObjectName("javaDownloadBtn");

        horizontalLayout_4->addWidget(javaDownloadBtn);

        horizontalSpacer_7 = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);


        gridLayout_2->addLayout(horizontalLayout_4, 10, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(0, 6, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        gridLayout_2->addItem(verticalSpacer_4, 9, 0, 1, 1);

        autodownloadJavaCheckBox = new QCheckBox(javaInstallationGroupBox);
        autodownloadJavaCheckBox->setObjectName("autodownloadJavaCheckBox");

        gridLayout_2->addWidget(autodownloadJavaCheckBox, 8, 0, 1, 1);

        skipCompatibilityCheckBox = new QCheckBox(javaInstallationGroupBox);
        skipCompatibilityCheckBox->setObjectName("skipCompatibilityCheckBox");

        gridLayout_2->addWidget(skipCompatibilityCheckBox, 4, 0, 1, 1);

        javaPathTextBox = new QLineEdit(javaInstallationGroupBox);
        javaPathTextBox->setObjectName("javaPathTextBox");

        gridLayout_2->addWidget(javaPathTextBox, 1, 0, 1, 1);

        label_4 = new QLabel(javaInstallationGroupBox);
        label_4->setObjectName("label_4");

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1);

        skipWizardCheckBox = new QCheckBox(javaInstallationGroupBox);
        skipWizardCheckBox->setObjectName("skipWizardCheckBox");

        gridLayout_2->addWidget(skipWizardCheckBox, 5, 0, 1, 1);

        verticalSpacer_5 = new QSpacerItem(0, 6, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        gridLayout_2->addItem(verticalSpacer_5, 3, 0, 1, 1);


        verticalLayout->addWidget(javaInstallationGroupBox);

        memoryGroupBox = new QGroupBox(JavaSettingsWidget);
        memoryGroupBox->setObjectName("memoryGroupBox");
        memoryGroupBox->setEnabled(true);
        memoryGroupBox->setCheckable(false);
        memoryGroupBox->setChecked(false);
        verticalLayout_2 = new QVBoxLayout(memoryGroupBox);
        verticalLayout_2->setObjectName("verticalLayout_2");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        labelMinMem = new QLabel(memoryGroupBox);
        labelMinMem->setObjectName("labelMinMem");

        formLayout->setWidget(0, QFormLayout::LabelRole, labelMinMem);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        minMemSpinBox = new QSpinBox(memoryGroupBox);
        minMemSpinBox->setObjectName("minMemSpinBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(minMemSpinBox->sizePolicy().hasHeightForWidth());
        minMemSpinBox->setSizePolicy(sizePolicy);
        minMemSpinBox->setSuffix(QString::fromUtf8(" MiB"));
        minMemSpinBox->setMinimum(8);
        minMemSpinBox->setMaximum(1048576);
        minMemSpinBox->setSingleStep(128);
        minMemSpinBox->setValue(256);

        horizontalLayout_3->addWidget(minMemSpinBox);

        label = new QLabel(memoryGroupBox);
        label->setObjectName("label");

        horizontalLayout_3->addWidget(label);


        formLayout->setLayout(0, QFormLayout::FieldRole, horizontalLayout_3);

        labelMaxMem = new QLabel(memoryGroupBox);
        labelMaxMem->setObjectName("labelMaxMem");

        formLayout->setWidget(1, QFormLayout::LabelRole, labelMaxMem);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        maxMemSpinBox = new QSpinBox(memoryGroupBox);
        maxMemSpinBox->setObjectName("maxMemSpinBox");
        sizePolicy.setHeightForWidth(maxMemSpinBox->sizePolicy().hasHeightForWidth());
        maxMemSpinBox->setSizePolicy(sizePolicy);
        maxMemSpinBox->setSuffix(QString::fromUtf8(" MiB"));
        maxMemSpinBox->setMinimum(8);
        maxMemSpinBox->setMaximum(1048576);
        maxMemSpinBox->setSingleStep(128);
        maxMemSpinBox->setValue(1024);

        horizontalLayout_5->addWidget(maxMemSpinBox);

        label_2 = new QLabel(memoryGroupBox);
        label_2->setObjectName("label_2");

        horizontalLayout_5->addWidget(label_2);


        formLayout->setLayout(1, QFormLayout::FieldRole, horizontalLayout_5);

        label_11 = new QLabel(memoryGroupBox);
        label_11->setObjectName("label_11");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_11);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        permGenSpinBox = new QSpinBox(memoryGroupBox);
        permGenSpinBox->setObjectName("permGenSpinBox");
        sizePolicy.setHeightForWidth(permGenSpinBox->sizePolicy().hasHeightForWidth());
        permGenSpinBox->setSizePolicy(sizePolicy);
        permGenSpinBox->setSuffix(QString::fromUtf8(" MiB"));
        permGenSpinBox->setMinimum(4);
        permGenSpinBox->setMaximum(1048576);
        permGenSpinBox->setSingleStep(8);
        permGenSpinBox->setValue(64);

        horizontalLayout_6->addWidget(permGenSpinBox);

        label_3 = new QLabel(memoryGroupBox);
        label_3->setObjectName("label_3");

        horizontalLayout_6->addWidget(label_3);


        formLayout->setLayout(2, QFormLayout::FieldRole, horizontalLayout_6);


        verticalLayout_2->addLayout(formLayout);

        lowMemWarningCheckBox = new QCheckBox(memoryGroupBox);
        lowMemWarningCheckBox->setObjectName("lowMemWarningCheckBox");

        verticalLayout_2->addWidget(lowMemWarningCheckBox);

        labelMaxMemNotice = new QLabel(memoryGroupBox);
        labelMaxMemNotice->setObjectName("labelMaxMemNotice");

        verticalLayout_2->addWidget(labelMaxMemNotice);


        verticalLayout->addWidget(memoryGroupBox);

        javaArgumentsGroupBox = new QGroupBox(JavaSettingsWidget);
        javaArgumentsGroupBox->setObjectName("javaArgumentsGroupBox");
        javaArgumentsGroupBox->setEnabled(true);
        javaArgumentsGroupBox->setCheckable(false);
        javaArgumentsGroupBox->setChecked(false);
        gridLayout_6 = new QGridLayout(javaArgumentsGroupBox);
        gridLayout_6->setObjectName("gridLayout_6");
        jvmArgsTextBox = new QPlainTextEdit(javaArgumentsGroupBox);
        jvmArgsTextBox->setObjectName("jvmArgsTextBox");

        gridLayout_6->addWidget(jvmArgsTextBox, 1, 1, 1, 1);


        verticalLayout->addWidget(javaArgumentsGroupBox);

        verticalLayout->setStretch(2, 1);
#if QT_CONFIG(shortcut)
        label_4->setBuddy(javaPathTextBox);
        labelMinMem->setBuddy(minMemSpinBox);
        labelMaxMem->setBuddy(maxMemSpinBox);
        label_11->setBuddy(permGenSpinBox);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(javaPathTextBox, javaDetectBtn);
        QWidget::setTabOrder(javaDetectBtn, javaBrowseBtn);
        QWidget::setTabOrder(javaBrowseBtn, skipCompatibilityCheckBox);
        QWidget::setTabOrder(skipCompatibilityCheckBox, skipWizardCheckBox);
        QWidget::setTabOrder(skipWizardCheckBox, autodetectJavaCheckBox);
        QWidget::setTabOrder(autodetectJavaCheckBox, autodownloadJavaCheckBox);
        QWidget::setTabOrder(autodownloadJavaCheckBox, javaTestBtn);
        QWidget::setTabOrder(javaTestBtn, javaDownloadBtn);
        QWidget::setTabOrder(javaDownloadBtn, maxMemSpinBox);
        QWidget::setTabOrder(maxMemSpinBox, jvmArgsTextBox);

        retranslateUi(JavaSettingsWidget);

        QMetaObject::connectSlotsByName(JavaSettingsWidget);
    } // setupUi

    void retranslateUi(QWidget *JavaSettingsWidget)
    {
        JavaSettingsWidget->setWindowTitle(QCoreApplication::translate("JavaSettingsWidget", "Form", nullptr));
        javaInstallationGroupBox->setTitle(QCoreApplication::translate("JavaSettingsWidget", "Java Insta&llation", nullptr));
        autodetectJavaCheckBox->setText(QCoreApplication::translate("JavaSettingsWidget", "Auto-&detect Java version", nullptr));
        javaDetectBtn->setText(QCoreApplication::translate("JavaSettingsWidget", "&Detect", nullptr));
        javaBrowseBtn->setText(QCoreApplication::translate("JavaSettingsWidget", "&Browse", nullptr));
        javaTestBtn->setText(QCoreApplication::translate("JavaSettingsWidget", "Test S&ettings", nullptr));
        javaDownloadBtn->setText(QCoreApplication::translate("JavaSettingsWidget", "Open Java &Downloader", nullptr));
#if QT_CONFIG(tooltip)
        autodownloadJavaCheckBox->setToolTip(QCoreApplication::translate("JavaSettingsWidget", "Automatically downloads and selects the Java build recommended by Mojang.", nullptr));
#endif // QT_CONFIG(tooltip)
        autodownloadJavaCheckBox->setText(QCoreApplication::translate("JavaSettingsWidget", "Auto-download &Mojang Java", nullptr));
#if QT_CONFIG(tooltip)
        skipCompatibilityCheckBox->setToolTip(QCoreApplication::translate("JavaSettingsWidget", "If enabled, the launcher will not check if an instance is compatible with the selected Java version.", nullptr));
#endif // QT_CONFIG(tooltip)
        skipCompatibilityCheckBox->setText(QCoreApplication::translate("JavaSettingsWidget", "Skip Java compatibility checks", nullptr));
        label_4->setText(QCoreApplication::translate("JavaSettingsWidget", "Java &Executable", nullptr));
#if QT_CONFIG(tooltip)
        skipWizardCheckBox->setToolTip(QCoreApplication::translate("JavaSettingsWidget", "If enabled, the launcher won't prompt you to choose a Java version if one is not found on startup.", nullptr));
#endif // QT_CONFIG(tooltip)
        skipWizardCheckBox->setText(QCoreApplication::translate("JavaSettingsWidget", "Skip Java setup prompt on startup", nullptr));
        memoryGroupBox->setTitle(QCoreApplication::translate("JavaSettingsWidget", "Memor&y", nullptr));
        labelMinMem->setText(QCoreApplication::translate("JavaSettingsWidget", "M&inimum Memory Usage:", nullptr));
#if QT_CONFIG(tooltip)
        minMemSpinBox->setToolTip(QCoreApplication::translate("JavaSettingsWidget", "The amount of memory Minecraft is started with.", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("JavaSettingsWidget", "(-Xms)", nullptr));
        labelMaxMem->setText(QCoreApplication::translate("JavaSettingsWidget", "Ma&ximum Memory Usage:", nullptr));
#if QT_CONFIG(tooltip)
        maxMemSpinBox->setToolTip(QCoreApplication::translate("JavaSettingsWidget", "The maximum amount of memory Minecraft is allowed to use.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_2->setText(QCoreApplication::translate("JavaSettingsWidget", "(-Xmx)", nullptr));
        label_11->setText(QCoreApplication::translate("JavaSettingsWidget", "&PermGen Size:", nullptr));
#if QT_CONFIG(tooltip)
        permGenSpinBox->setToolTip(QCoreApplication::translate("JavaSettingsWidget", "The amount of memory available to store loaded Java classes.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_3->setText(QCoreApplication::translate("JavaSettingsWidget", "(-XX:PermSize)", nullptr));
        lowMemWarningCheckBox->setText(QCoreApplication::translate("JavaSettingsWidget", "Warn when there is not enough memory available", nullptr));
        labelMaxMemNotice->setText(QCoreApplication::translate("JavaSettingsWidget", "Memory Notice", nullptr));
        javaArgumentsGroupBox->setTitle(QCoreApplication::translate("JavaSettingsWidget", "Java Argumen&ts", nullptr));
    } // retranslateUi

};

namespace Ui {
    class JavaSettingsWidget: public Ui_JavaSettingsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JAVASETTINGSWIDGET_H
