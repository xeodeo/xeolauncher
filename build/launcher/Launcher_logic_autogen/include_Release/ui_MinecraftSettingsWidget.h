/********************************************************************************
** Form generated from reading UI file 'MinecraftSettingsWidget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MINECRAFTSETTINGSWIDGET_H
#define UI_MINECRAFTSETTINGSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ui/widgets/CustomCommands.h"
#include "ui/widgets/EnvironmentVariables.h"

QT_BEGIN_NAMESPACE

class Ui_MinecraftSettingsWidget
{
public:
    QVBoxLayout *verticalLayout;
    QCommandLinkButton *openGlobalSettingsButton;
    QTabWidget *settingsTabs;
    QWidget *generalPage;
    QVBoxLayout *verticalLayout_3;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *windowSizeGroupBox;
    QGridLayout *gridLayout;
    QLabel *maximizedWarning;
    QCheckBox *quitAfterGameStopCheck;
    QCheckBox *maximizedCheckBox;
    QCheckBox *closeAfterLaunchCheck;
    QSpinBox *windowWidthSpinBox;
    QSpacerItem *verticalSpacer_3;
    QSpinBox *windowHeightSpinBox;
    QLabel *labelWindowWidth;
    QLabel *label;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QGroupBox *consoleSettingsBox;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *showConsoleCheck;
    QCheckBox *showConsoleErrorCheck;
    QCheckBox *autoCloseConsoleCheck;
    QGroupBox *globalDataPacksGroupBox;
    QVBoxLayout *verticalLayout_18;
    QLabel *label_3;
    QSpacerItem *verticalSpacer_4;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *dataPacksPathEdit;
    QPushButton *dataPacksPathBrowse;
    QGroupBox *gameTimeGroupBox;
    QVBoxLayout *verticalLayout_10;
    QCheckBox *showGameTime;
    QCheckBox *recordGameTime;
    QCheckBox *showGlobalGameTime;
    QCheckBox *showGameTimeWithoutDays;
    QGroupBox *instanceAccountGroupBox;
    QHBoxLayout *horizontalLayout;
    QLabel *instanceAccountNameLabel;
    QComboBox *instanceAccountSelector;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *serverJoinGroupBox;
    QGridLayout *gridLayout_2;
    QComboBox *worldsCb;
    QRadioButton *worldJoinButton;
    QRadioButton *serverJoinAddressButton;
    QLineEdit *serverJoinAddress;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *loaderGroup;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *neoForge;
    QCheckBox *forge;
    QCheckBox *fabric;
    QCheckBox *quilt;
    QCheckBox *liteLoader;
    QCheckBox *babric;
    QCheckBox *btaBabric;
    QCheckBox *legacyFabric;
    QCheckBox *ornithe;
    QCheckBox *rift;
    QSpacerItem *verticalSpacer_2;
    QWidget *javaPage;
    QVBoxLayout *verticalLayout_11;
    QScrollArea *javaScrollArea;
    QWidget *scrollAreaWidgetContents_3;
    QWidget *tweaksPage;
    QVBoxLayout *verticalLayout_8;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_7;
    QGroupBox *legacySettingsGroupBox;
    QVBoxLayout *verticalLayout_17;
    QCheckBox *onlineFixes;
    QGroupBox *nativeWorkaroundsGroupBox;
    QFormLayout *formLayout_2;
    QLabel *labelGLFWPath;
    QSpacerItem *verticalSpacer_6;
    QLabel *labelOpenALPath;
    QLineEdit *lineEditGLFWPath;
    QCheckBox *useNativeGLFWCheck;
    QCheckBox *useNativeOpenALCheck;
    QLineEdit *lineEditOpenALPath;
    QGroupBox *perfomanceGroupBox;
    QVBoxLayout *verticalLayout_13;
    QCheckBox *enableFeralGamemodeCheck;
    QCheckBox *enableMangoHud;
    QCheckBox *useDiscreteGpuCheck;
    QCheckBox *useZink;
    QSpacerItem *verticalSpacer;
    QWidget *customCommandsPage;
    QVBoxLayout *verticalLayout_6;
    CustomCommands *customCommands;
    QWidget *environmentVariablesPage;
    QVBoxLayout *verticalLayout_16;
    EnvironmentVariables *environmentVariables;

    void setupUi(QWidget *MinecraftSettingsWidget)
    {
        if (MinecraftSettingsWidget->objectName().isEmpty())
            MinecraftSettingsWidget->setObjectName("MinecraftSettingsWidget");
        MinecraftSettingsWidget->resize(653, 600);
        verticalLayout = new QVBoxLayout(MinecraftSettingsWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 6, 0);
        openGlobalSettingsButton = new QCommandLinkButton(MinecraftSettingsWidget);
        openGlobalSettingsButton->setObjectName("openGlobalSettingsButton");

        verticalLayout->addWidget(openGlobalSettingsButton);

        settingsTabs = new QTabWidget(MinecraftSettingsWidget);
        settingsTabs->setObjectName("settingsTabs");
        generalPage = new QWidget();
        generalPage->setObjectName("generalPage");
        verticalLayout_3 = new QVBoxLayout(generalPage);
        verticalLayout_3->setObjectName("verticalLayout_3");
        scrollArea = new QScrollArea(generalPage);
        scrollArea->setObjectName("scrollArea");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 623, 1352));
        verticalLayout_5 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_5->setObjectName("verticalLayout_5");
        windowSizeGroupBox = new QGroupBox(scrollAreaWidgetContents);
        windowSizeGroupBox->setObjectName("windowSizeGroupBox");
        windowSizeGroupBox->setEnabled(true);
        windowSizeGroupBox->setCheckable(false);
        windowSizeGroupBox->setChecked(false);
        gridLayout = new QGridLayout(windowSizeGroupBox);
        gridLayout->setObjectName("gridLayout");
        maximizedWarning = new QLabel(windowSizeGroupBox);
        maximizedWarning->setObjectName("maximizedWarning");

        gridLayout->addWidget(maximizedWarning, 1, 0, 1, 6);

        quitAfterGameStopCheck = new QCheckBox(windowSizeGroupBox);
        quitAfterGameStopCheck->setObjectName("quitAfterGameStopCheck");

        gridLayout->addWidget(quitAfterGameStopCheck, 5, 0, 1, 6);

        maximizedCheckBox = new QCheckBox(windowSizeGroupBox);
        maximizedCheckBox->setObjectName("maximizedCheckBox");

        gridLayout->addWidget(maximizedCheckBox, 0, 0, 1, 6);

        closeAfterLaunchCheck = new QCheckBox(windowSizeGroupBox);
        closeAfterLaunchCheck->setObjectName("closeAfterLaunchCheck");

        gridLayout->addWidget(closeAfterLaunchCheck, 4, 0, 1, 6);

        windowWidthSpinBox = new QSpinBox(windowSizeGroupBox);
        windowWidthSpinBox->setObjectName("windowWidthSpinBox");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(windowWidthSpinBox->sizePolicy().hasHeightForWidth());
        windowWidthSpinBox->setSizePolicy(sizePolicy1);
        windowWidthSpinBox->setMinimum(1);
        windowWidthSpinBox->setMaximum(65536);
        windowWidthSpinBox->setSingleStep(1);
        windowWidthSpinBox->setValue(854);

        gridLayout->addWidget(windowWidthSpinBox, 2, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(0, 6, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        gridLayout->addItem(verticalSpacer_3, 3, 0, 1, 1);

        windowHeightSpinBox = new QSpinBox(windowSizeGroupBox);
        windowHeightSpinBox->setObjectName("windowHeightSpinBox");
        sizePolicy1.setHeightForWidth(windowHeightSpinBox->sizePolicy().hasHeightForWidth());
        windowHeightSpinBox->setSizePolicy(sizePolicy1);
        windowHeightSpinBox->setMinimum(1);
        windowHeightSpinBox->setMaximum(65536);
        windowHeightSpinBox->setValue(480);

        gridLayout->addWidget(windowHeightSpinBox, 2, 3, 1, 1);

        labelWindowWidth = new QLabel(windowSizeGroupBox);
        labelWindowWidth->setObjectName("labelWindowWidth");

        gridLayout->addWidget(labelWindowWidth, 2, 0, 1, 1);

        label = new QLabel(windowSizeGroupBox);
        label->setObjectName("label");

        gridLayout->addWidget(label, 2, 2, 1, 1);

        label_2 = new QLabel(windowSizeGroupBox);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 2, 4, 1, 1);

        horizontalSpacer = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 5, 1, 1);


        verticalLayout_5->addWidget(windowSizeGroupBox);

        consoleSettingsBox = new QGroupBox(scrollAreaWidgetContents);
        consoleSettingsBox->setObjectName("consoleSettingsBox");
        consoleSettingsBox->setEnabled(true);
        consoleSettingsBox->setCheckable(false);
        consoleSettingsBox->setChecked(false);
        verticalLayout_2 = new QVBoxLayout(consoleSettingsBox);
        verticalLayout_2->setObjectName("verticalLayout_2");
        showConsoleCheck = new QCheckBox(consoleSettingsBox);
        showConsoleCheck->setObjectName("showConsoleCheck");

        verticalLayout_2->addWidget(showConsoleCheck);

        showConsoleErrorCheck = new QCheckBox(consoleSettingsBox);
        showConsoleErrorCheck->setObjectName("showConsoleErrorCheck");

        verticalLayout_2->addWidget(showConsoleErrorCheck);

        autoCloseConsoleCheck = new QCheckBox(consoleSettingsBox);
        autoCloseConsoleCheck->setObjectName("autoCloseConsoleCheck");

        verticalLayout_2->addWidget(autoCloseConsoleCheck);


        verticalLayout_5->addWidget(consoleSettingsBox);

        globalDataPacksGroupBox = new QGroupBox(scrollAreaWidgetContents);
        globalDataPacksGroupBox->setObjectName("globalDataPacksGroupBox");
        globalDataPacksGroupBox->setCheckable(true);
        globalDataPacksGroupBox->setChecked(true);
        verticalLayout_18 = new QVBoxLayout(globalDataPacksGroupBox);
        verticalLayout_18->setObjectName("verticalLayout_18");
        label_3 = new QLabel(globalDataPacksGroupBox);
        label_3->setObjectName("label_3");

        verticalLayout_18->addWidget(label_3);

        verticalSpacer_4 = new QSpacerItem(0, 6, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_18->addItem(verticalSpacer_4);

        label_4 = new QLabel(globalDataPacksGroupBox);
        label_4->setObjectName("label_4");

        verticalLayout_18->addWidget(label_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        dataPacksPathEdit = new QLineEdit(globalDataPacksGroupBox);
        dataPacksPathEdit->setObjectName("dataPacksPathEdit");

        horizontalLayout_2->addWidget(dataPacksPathEdit);

        dataPacksPathBrowse = new QPushButton(globalDataPacksGroupBox);
        dataPacksPathBrowse->setObjectName("dataPacksPathBrowse");

        horizontalLayout_2->addWidget(dataPacksPathBrowse);


        verticalLayout_18->addLayout(horizontalLayout_2);


        verticalLayout_5->addWidget(globalDataPacksGroupBox);

        gameTimeGroupBox = new QGroupBox(scrollAreaWidgetContents);
        gameTimeGroupBox->setObjectName("gameTimeGroupBox");
        gameTimeGroupBox->setEnabled(true);
        gameTimeGroupBox->setCheckable(false);
        gameTimeGroupBox->setChecked(false);
        verticalLayout_10 = new QVBoxLayout(gameTimeGroupBox);
        verticalLayout_10->setObjectName("verticalLayout_10");
        showGameTime = new QCheckBox(gameTimeGroupBox);
        showGameTime->setObjectName("showGameTime");

        verticalLayout_10->addWidget(showGameTime);

        recordGameTime = new QCheckBox(gameTimeGroupBox);
        recordGameTime->setObjectName("recordGameTime");

        verticalLayout_10->addWidget(recordGameTime);

        showGlobalGameTime = new QCheckBox(gameTimeGroupBox);
        showGlobalGameTime->setObjectName("showGlobalGameTime");

        verticalLayout_10->addWidget(showGlobalGameTime);

        showGameTimeWithoutDays = new QCheckBox(gameTimeGroupBox);
        showGameTimeWithoutDays->setObjectName("showGameTimeWithoutDays");

        verticalLayout_10->addWidget(showGameTimeWithoutDays);


        verticalLayout_5->addWidget(gameTimeGroupBox);

        instanceAccountGroupBox = new QGroupBox(scrollAreaWidgetContents);
        instanceAccountGroupBox->setObjectName("instanceAccountGroupBox");
        instanceAccountGroupBox->setCheckable(true);
        instanceAccountGroupBox->setChecked(false);
        horizontalLayout = new QHBoxLayout(instanceAccountGroupBox);
        horizontalLayout->setObjectName("horizontalLayout");
        instanceAccountNameLabel = new QLabel(instanceAccountGroupBox);
        instanceAccountNameLabel->setObjectName("instanceAccountNameLabel");

        horizontalLayout->addWidget(instanceAccountNameLabel);

        instanceAccountSelector = new QComboBox(instanceAccountGroupBox);
        instanceAccountSelector->setObjectName("instanceAccountSelector");
        sizePolicy1.setHeightForWidth(instanceAccountSelector->sizePolicy().hasHeightForWidth());
        instanceAccountSelector->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(instanceAccountSelector);

        horizontalSpacer_2 = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_5->addWidget(instanceAccountGroupBox);

        serverJoinGroupBox = new QGroupBox(scrollAreaWidgetContents);
        serverJoinGroupBox->setObjectName("serverJoinGroupBox");
        serverJoinGroupBox->setCheckable(true);
        serverJoinGroupBox->setChecked(false);
        gridLayout_2 = new QGridLayout(serverJoinGroupBox);
        gridLayout_2->setObjectName("gridLayout_2");
        worldsCb = new QComboBox(serverJoinGroupBox);
        worldsCb->setObjectName("worldsCb");
        sizePolicy1.setHeightForWidth(worldsCb->sizePolicy().hasHeightForWidth());
        worldsCb->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(worldsCb, 1, 1, 1, 1);

        worldJoinButton = new QRadioButton(serverJoinGroupBox);
        worldJoinButton->setObjectName("worldJoinButton");

        gridLayout_2->addWidget(worldJoinButton, 1, 0, 1, 1);

        serverJoinAddressButton = new QRadioButton(serverJoinGroupBox);
        serverJoinAddressButton->setObjectName("serverJoinAddressButton");

        gridLayout_2->addWidget(serverJoinAddressButton, 0, 0, 1, 1);

        serverJoinAddress = new QLineEdit(serverJoinGroupBox);
        serverJoinAddress->setObjectName("serverJoinAddress");
        serverJoinAddress->setMaximumSize(QSize(200, 16777215));

        gridLayout_2->addWidget(serverJoinAddress, 0, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 0, 2, 1, 1);


        verticalLayout_5->addWidget(serverJoinGroupBox);

        loaderGroup = new QGroupBox(scrollAreaWidgetContents);
        loaderGroup->setObjectName("loaderGroup");
        loaderGroup->setCheckable(true);
        loaderGroup->setChecked(false);
        verticalLayout_4 = new QVBoxLayout(loaderGroup);
        verticalLayout_4->setObjectName("verticalLayout_4");
        neoForge = new QCheckBox(loaderGroup);
        neoForge->setObjectName("neoForge");

        verticalLayout_4->addWidget(neoForge);

        forge = new QCheckBox(loaderGroup);
        forge->setObjectName("forge");

        verticalLayout_4->addWidget(forge);

        fabric = new QCheckBox(loaderGroup);
        fabric->setObjectName("fabric");

        verticalLayout_4->addWidget(fabric);

        quilt = new QCheckBox(loaderGroup);
        quilt->setObjectName("quilt");

        verticalLayout_4->addWidget(quilt);

        liteLoader = new QCheckBox(loaderGroup);
        liteLoader->setObjectName("liteLoader");

        verticalLayout_4->addWidget(liteLoader);

        babric = new QCheckBox(loaderGroup);
        babric->setObjectName("babric");

        verticalLayout_4->addWidget(babric);

        btaBabric = new QCheckBox(loaderGroup);
        btaBabric->setObjectName("btaBabric");

        verticalLayout_4->addWidget(btaBabric);

        legacyFabric = new QCheckBox(loaderGroup);
        legacyFabric->setObjectName("legacyFabric");

        verticalLayout_4->addWidget(legacyFabric);

        ornithe = new QCheckBox(loaderGroup);
        ornithe->setObjectName("ornithe");

        verticalLayout_4->addWidget(ornithe);

        rift = new QCheckBox(loaderGroup);
        rift->setObjectName("rift");

        verticalLayout_4->addWidget(rift);


        verticalLayout_5->addWidget(loaderGroup);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_2);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_3->addWidget(scrollArea);

        settingsTabs->addTab(generalPage, QString());
        javaPage = new QWidget();
        javaPage->setObjectName("javaPage");
        verticalLayout_11 = new QVBoxLayout(javaPage);
        verticalLayout_11->setObjectName("verticalLayout_11");
        javaScrollArea = new QScrollArea(javaPage);
        javaScrollArea->setObjectName("javaScrollArea");
        javaScrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName("scrollAreaWidgetContents_3");
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 623, 484));
        javaScrollArea->setWidget(scrollAreaWidgetContents_3);

        verticalLayout_11->addWidget(javaScrollArea);

        settingsTabs->addTab(javaPage, QString());
        tweaksPage = new QWidget();
        tweaksPage->setObjectName("tweaksPage");
        verticalLayout_8 = new QVBoxLayout(tweaksPage);
        verticalLayout_8->setObjectName("verticalLayout_8");
        scrollArea_2 = new QScrollArea(tweaksPage);
        scrollArea_2->setObjectName("scrollArea_2");
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName("scrollAreaWidgetContents_2");
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 609, 499));
        verticalLayout_7 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_7->setObjectName("verticalLayout_7");
        legacySettingsGroupBox = new QGroupBox(scrollAreaWidgetContents_2);
        legacySettingsGroupBox->setObjectName("legacySettingsGroupBox");
        legacySettingsGroupBox->setCheckable(false);
        legacySettingsGroupBox->setChecked(false);
        verticalLayout_17 = new QVBoxLayout(legacySettingsGroupBox);
        verticalLayout_17->setObjectName("verticalLayout_17");
        onlineFixes = new QCheckBox(legacySettingsGroupBox);
        onlineFixes->setObjectName("onlineFixes");

        verticalLayout_17->addWidget(onlineFixes);


        verticalLayout_7->addWidget(legacySettingsGroupBox);

        nativeWorkaroundsGroupBox = new QGroupBox(scrollAreaWidgetContents_2);
        nativeWorkaroundsGroupBox->setObjectName("nativeWorkaroundsGroupBox");
        nativeWorkaroundsGroupBox->setEnabled(true);
        nativeWorkaroundsGroupBox->setCheckable(false);
        nativeWorkaroundsGroupBox->setChecked(false);
        formLayout_2 = new QFormLayout(nativeWorkaroundsGroupBox);
        formLayout_2->setObjectName("formLayout_2");
        formLayout_2->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        labelGLFWPath = new QLabel(nativeWorkaroundsGroupBox);
        labelGLFWPath->setObjectName("labelGLFWPath");

        formLayout_2->setWidget(2, QFormLayout::LabelRole, labelGLFWPath);

        verticalSpacer_6 = new QSpacerItem(0, 6, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        formLayout_2->setItem(4, QFormLayout::LabelRole, verticalSpacer_6);

        labelOpenALPath = new QLabel(nativeWorkaroundsGroupBox);
        labelOpenALPath->setObjectName("labelOpenALPath");

        formLayout_2->setWidget(6, QFormLayout::LabelRole, labelOpenALPath);

        lineEditGLFWPath = new QLineEdit(nativeWorkaroundsGroupBox);
        lineEditGLFWPath->setObjectName("lineEditGLFWPath");
        lineEditGLFWPath->setEnabled(false);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, lineEditGLFWPath);

        useNativeGLFWCheck = new QCheckBox(nativeWorkaroundsGroupBox);
        useNativeGLFWCheck->setObjectName("useNativeGLFWCheck");

        formLayout_2->setWidget(1, QFormLayout::SpanningRole, useNativeGLFWCheck);

        useNativeOpenALCheck = new QCheckBox(nativeWorkaroundsGroupBox);
        useNativeOpenALCheck->setObjectName("useNativeOpenALCheck");

        formLayout_2->setWidget(5, QFormLayout::SpanningRole, useNativeOpenALCheck);

        lineEditOpenALPath = new QLineEdit(nativeWorkaroundsGroupBox);
        lineEditOpenALPath->setObjectName("lineEditOpenALPath");
        lineEditOpenALPath->setEnabled(false);

        formLayout_2->setWidget(6, QFormLayout::FieldRole, lineEditOpenALPath);


        verticalLayout_7->addWidget(nativeWorkaroundsGroupBox);

        perfomanceGroupBox = new QGroupBox(scrollAreaWidgetContents_2);
        perfomanceGroupBox->setObjectName("perfomanceGroupBox");
        perfomanceGroupBox->setEnabled(true);
        perfomanceGroupBox->setCheckable(false);
        perfomanceGroupBox->setChecked(false);
        verticalLayout_13 = new QVBoxLayout(perfomanceGroupBox);
        verticalLayout_13->setObjectName("verticalLayout_13");
        enableFeralGamemodeCheck = new QCheckBox(perfomanceGroupBox);
        enableFeralGamemodeCheck->setObjectName("enableFeralGamemodeCheck");

        verticalLayout_13->addWidget(enableFeralGamemodeCheck);

        enableMangoHud = new QCheckBox(perfomanceGroupBox);
        enableMangoHud->setObjectName("enableMangoHud");

        verticalLayout_13->addWidget(enableMangoHud);

        useDiscreteGpuCheck = new QCheckBox(perfomanceGroupBox);
        useDiscreteGpuCheck->setObjectName("useDiscreteGpuCheck");

        verticalLayout_13->addWidget(useDiscreteGpuCheck);

        useZink = new QCheckBox(perfomanceGroupBox);
        useZink->setObjectName("useZink");

        verticalLayout_13->addWidget(useZink);


        verticalLayout_7->addWidget(perfomanceGroupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_7->addItem(verticalSpacer);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_8->addWidget(scrollArea_2);

        settingsTabs->addTab(tweaksPage, QString());
        customCommandsPage = new QWidget();
        customCommandsPage->setObjectName("customCommandsPage");
        verticalLayout_6 = new QVBoxLayout(customCommandsPage);
        verticalLayout_6->setObjectName("verticalLayout_6");
        customCommands = new CustomCommands(customCommandsPage);
        customCommands->setObjectName("customCommands");

        verticalLayout_6->addWidget(customCommands);

        settingsTabs->addTab(customCommandsPage, QString());
        environmentVariablesPage = new QWidget();
        environmentVariablesPage->setObjectName("environmentVariablesPage");
        verticalLayout_16 = new QVBoxLayout(environmentVariablesPage);
        verticalLayout_16->setObjectName("verticalLayout_16");
        verticalLayout_16->setContentsMargins(0, 0, 0, 0);
        environmentVariables = new EnvironmentVariables(environmentVariablesPage);
        environmentVariables->setObjectName("environmentVariables");

        verticalLayout_16->addWidget(environmentVariables);

        settingsTabs->addTab(environmentVariablesPage, QString());

        verticalLayout->addWidget(settingsTabs);

#if QT_CONFIG(shortcut)
        labelWindowWidth->setBuddy(windowWidthSpinBox);
        labelGLFWPath->setBuddy(lineEditGLFWPath);
        labelOpenALPath->setBuddy(lineEditOpenALPath);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(openGlobalSettingsButton, settingsTabs);
        QWidget::setTabOrder(settingsTabs, scrollArea);
        QWidget::setTabOrder(scrollArea, maximizedCheckBox);
        QWidget::setTabOrder(maximizedCheckBox, windowHeightSpinBox);
        QWidget::setTabOrder(windowHeightSpinBox, windowWidthSpinBox);
        QWidget::setTabOrder(windowWidthSpinBox, closeAfterLaunchCheck);
        QWidget::setTabOrder(closeAfterLaunchCheck, quitAfterGameStopCheck);
        QWidget::setTabOrder(quitAfterGameStopCheck, showConsoleCheck);
        QWidget::setTabOrder(showConsoleCheck, showConsoleErrorCheck);
        QWidget::setTabOrder(showConsoleErrorCheck, autoCloseConsoleCheck);
        QWidget::setTabOrder(autoCloseConsoleCheck, showGameTime);
        QWidget::setTabOrder(showGameTime, recordGameTime);
        QWidget::setTabOrder(recordGameTime, showGlobalGameTime);
        QWidget::setTabOrder(showGlobalGameTime, showGameTimeWithoutDays);
        QWidget::setTabOrder(showGameTimeWithoutDays, instanceAccountGroupBox);
        QWidget::setTabOrder(instanceAccountGroupBox, instanceAccountSelector);
        QWidget::setTabOrder(instanceAccountSelector, serverJoinGroupBox);
        QWidget::setTabOrder(serverJoinGroupBox, serverJoinAddressButton);
        QWidget::setTabOrder(serverJoinAddressButton, serverJoinAddress);
        QWidget::setTabOrder(serverJoinAddress, worldJoinButton);
        QWidget::setTabOrder(worldJoinButton, worldsCb);
        QWidget::setTabOrder(worldsCb, javaScrollArea);
        QWidget::setTabOrder(javaScrollArea, scrollArea_2);
        QWidget::setTabOrder(scrollArea_2, onlineFixes);
        QWidget::setTabOrder(onlineFixes, useNativeGLFWCheck);
        QWidget::setTabOrder(useNativeGLFWCheck, lineEditGLFWPath);
        QWidget::setTabOrder(lineEditGLFWPath, useNativeOpenALCheck);
        QWidget::setTabOrder(useNativeOpenALCheck, lineEditOpenALPath);
        QWidget::setTabOrder(lineEditOpenALPath, enableFeralGamemodeCheck);
        QWidget::setTabOrder(enableFeralGamemodeCheck, enableMangoHud);
        QWidget::setTabOrder(enableMangoHud, useDiscreteGpuCheck);
        QWidget::setTabOrder(useDiscreteGpuCheck, useZink);

        retranslateUi(MinecraftSettingsWidget);

        settingsTabs->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MinecraftSettingsWidget);
    } // setupUi

    void retranslateUi(QWidget *MinecraftSettingsWidget)
    {
        openGlobalSettingsButton->setText(QCoreApplication::translate("MinecraftSettingsWidget", "Open &Global Settings", nullptr));
        openGlobalSettingsButton->setDescription(QCoreApplication::translate("MinecraftSettingsWidget", "The settings here are overrides for global settings.", nullptr));
        windowSizeGroupBox->setTitle(QCoreApplication::translate("MinecraftSettingsWidget", "Game &Window", nullptr));
#if QT_CONFIG(tooltip)
        maximizedWarning->setToolTip(QCoreApplication::translate("MinecraftSettingsWidget", "The base game only supports resolution. In order to simulate the maximized behavior the current implementation approximates the maximum display size.", nullptr));
#endif // QT_CONFIG(tooltip)
        maximizedWarning->setText(QCoreApplication::translate("MinecraftSettingsWidget", "<html><head/><body><p><span style=\" font-weight:600; color:#f5c211;\">Warning</span><span style=\" color:#f5c211;\">: The maximized option may not be fully supported on all Minecraft versions.</span></p></body></html>", nullptr));
        quitAfterGameStopCheck->setText(QCoreApplication::translate("MinecraftSettingsWidget", "When the game window closes, quit the launcher", nullptr));
        maximizedCheckBox->setText(QCoreApplication::translate("MinecraftSettingsWidget", "Start Minecraft maximized", nullptr));
        closeAfterLaunchCheck->setText(QCoreApplication::translate("MinecraftSettingsWidget", "When the game window opens, hide the launcher", nullptr));
        windowWidthSpinBox->setSuffix(QString());
        windowHeightSpinBox->setSuffix(QString());
        labelWindowWidth->setText(QCoreApplication::translate("MinecraftSettingsWidget", "&Window Size:", nullptr));
        label->setText(QCoreApplication::translate("MinecraftSettingsWidget", "\303\227", nullptr));
        label_2->setText(QCoreApplication::translate("MinecraftSettingsWidget", "pixels", nullptr));
        consoleSettingsBox->setTitle(QCoreApplication::translate("MinecraftSettingsWidget", "&Console Window", nullptr));
        showConsoleCheck->setText(QCoreApplication::translate("MinecraftSettingsWidget", "When the game is launched, show the console window", nullptr));
        showConsoleErrorCheck->setText(QCoreApplication::translate("MinecraftSettingsWidget", "When the game crashes, show the console window", nullptr));
        autoCloseConsoleCheck->setText(QCoreApplication::translate("MinecraftSettingsWidget", "When the game quits, hide the console window", nullptr));
        globalDataPacksGroupBox->setTitle(QCoreApplication::translate("MinecraftSettingsWidget", "&Global Data Packs", nullptr));
        label_3->setText(QCoreApplication::translate("MinecraftSettingsWidget", "Allows installing data packs across all worlds if an applicable mod is installed.\n"
"It is most likely you will need to change the path - please refer to the mod's website.", nullptr));
        label_4->setText(QCoreApplication::translate("MinecraftSettingsWidget", "Folder Path", nullptr));
        dataPacksPathEdit->setPlaceholderText(QCoreApplication::translate("MinecraftSettingsWidget", "datapacks", nullptr));
        dataPacksPathBrowse->setText(QCoreApplication::translate("MinecraftSettingsWidget", "Browse", nullptr));
        gameTimeGroupBox->setTitle(QCoreApplication::translate("MinecraftSettingsWidget", "Game &Time", nullptr));
        showGameTime->setText(QCoreApplication::translate("MinecraftSettingsWidget", "Show time spent &playing instances", nullptr));
        recordGameTime->setText(QCoreApplication::translate("MinecraftSettingsWidget", "&Record time spent playing instances", nullptr));
        showGlobalGameTime->setText(QCoreApplication::translate("MinecraftSettingsWidget", "Show the &total time played across instances", nullptr));
        showGameTimeWithoutDays->setText(QCoreApplication::translate("MinecraftSettingsWidget", "Always show durations in &hours", nullptr));
        instanceAccountGroupBox->setTitle(QCoreApplication::translate("MinecraftSettingsWidget", "Override &Default Account", nullptr));
        instanceAccountNameLabel->setText(QCoreApplication::translate("MinecraftSettingsWidget", "Account:", nullptr));
        serverJoinGroupBox->setTitle(QCoreApplication::translate("MinecraftSettingsWidget", "Enable Auto-&join", nullptr));
        worldJoinButton->setText(QCoreApplication::translate("MinecraftSettingsWidget", "Singleplayer world:", nullptr));
        serverJoinAddressButton->setText(QCoreApplication::translate("MinecraftSettingsWidget", "Server address:", nullptr));
        loaderGroup->setTitle(QCoreApplication::translate("MinecraftSettingsWidget", "Override Mod Download &Loaders", nullptr));
        neoForge->setText(QCoreApplication::translate("MinecraftSettingsWidget", "NeoForge", nullptr));
        forge->setText(QCoreApplication::translate("MinecraftSettingsWidget", "Forge", nullptr));
        fabric->setText(QCoreApplication::translate("MinecraftSettingsWidget", "Fabric", nullptr));
        quilt->setText(QCoreApplication::translate("MinecraftSettingsWidget", "Quilt", nullptr));
        liteLoader->setText(QCoreApplication::translate("MinecraftSettingsWidget", "LiteLoader", nullptr));
        babric->setText(QCoreApplication::translate("MinecraftSettingsWidget", "Babric", nullptr));
        btaBabric->setText(QCoreApplication::translate("MinecraftSettingsWidget", "BTA (Babric)", nullptr));
        legacyFabric->setText(QCoreApplication::translate("MinecraftSettingsWidget", "Legacy Fabric", nullptr));
        ornithe->setText(QCoreApplication::translate("MinecraftSettingsWidget", "Ornithe", nullptr));
        rift->setText(QCoreApplication::translate("MinecraftSettingsWidget", "Rift", nullptr));
        settingsTabs->setTabText(settingsTabs->indexOf(generalPage), QCoreApplication::translate("MinecraftSettingsWidget", "General", nullptr));
        settingsTabs->setTabText(settingsTabs->indexOf(javaPage), QCoreApplication::translate("MinecraftSettingsWidget", "Java", nullptr));
        legacySettingsGroupBox->setTitle(QCoreApplication::translate("MinecraftSettingsWidget", "&Legacy Tweaks", nullptr));
#if QT_CONFIG(tooltip)
        onlineFixes->setToolTip(QCoreApplication::translate("MinecraftSettingsWidget", "<html><head/><body><p>Emulates usages of old online services which are no longer operating.</p><p>Current fixes include: skin and online mode support.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        onlineFixes->setText(QCoreApplication::translate("MinecraftSettingsWidget", "Enable online fixes (experimental)", nullptr));
        nativeWorkaroundsGroupBox->setTitle(QCoreApplication::translate("MinecraftSettingsWidget", "&Native Libraries", nullptr));
        labelGLFWPath->setText(QCoreApplication::translate("MinecraftSettingsWidget", "&GLFW library path:", nullptr));
        labelOpenALPath->setText(QCoreApplication::translate("MinecraftSettingsWidget", "&OpenAL library path:", nullptr));
        useNativeGLFWCheck->setText(QCoreApplication::translate("MinecraftSettingsWidget", "Use system installation of GLFW", nullptr));
        useNativeOpenALCheck->setText(QCoreApplication::translate("MinecraftSettingsWidget", "Use system installation of OpenAL", nullptr));
        perfomanceGroupBox->setTitle(QCoreApplication::translate("MinecraftSettingsWidget", "&Performance", nullptr));
#if QT_CONFIG(tooltip)
        enableFeralGamemodeCheck->setToolTip(QCoreApplication::translate("MinecraftSettingsWidget", "<html><head/><body><p>Enable Feral Interactive's GameMode, to potentially improve gaming performance.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        enableFeralGamemodeCheck->setText(QCoreApplication::translate("MinecraftSettingsWidget", "Enable Feral GameMode", nullptr));
#if QT_CONFIG(tooltip)
        enableMangoHud->setToolTip(QCoreApplication::translate("MinecraftSettingsWidget", "<html><head/><body><p>Enable MangoHud's advanced performance overlay.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        enableMangoHud->setText(QCoreApplication::translate("MinecraftSettingsWidget", "Enable MangoHud", nullptr));
#if QT_CONFIG(tooltip)
        useDiscreteGpuCheck->setToolTip(QCoreApplication::translate("MinecraftSettingsWidget", "<html><head/><body><p>Use the discrete GPU instead of the primary GPU.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        useDiscreteGpuCheck->setText(QCoreApplication::translate("MinecraftSettingsWidget", "Use discrete GPU", nullptr));
#if QT_CONFIG(tooltip)
        useZink->setToolTip(QCoreApplication::translate("MinecraftSettingsWidget", "Use Zink, a Mesa OpenGL driver that implements OpenGL on top of Vulkan. Performance may vary depending on the situation. Note: If no suitable Vulkan driver is found, software rendering will be used.", nullptr));
#endif // QT_CONFIG(tooltip)
        useZink->setText(QCoreApplication::translate("MinecraftSettingsWidget", "Use Zink", nullptr));
        settingsTabs->setTabText(settingsTabs->indexOf(tweaksPage), QCoreApplication::translate("MinecraftSettingsWidget", "Tweaks", nullptr));
        settingsTabs->setTabText(settingsTabs->indexOf(customCommandsPage), QCoreApplication::translate("MinecraftSettingsWidget", "Custom Commands", nullptr));
        settingsTabs->setTabText(settingsTabs->indexOf(environmentVariablesPage), QCoreApplication::translate("MinecraftSettingsWidget", "Environment Variables", nullptr));
        (void)MinecraftSettingsWidget;
    } // retranslateUi

};

namespace Ui {
    class MinecraftSettingsWidget: public Ui_MinecraftSettingsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MINECRAFTSETTINGSWIDGET_H
