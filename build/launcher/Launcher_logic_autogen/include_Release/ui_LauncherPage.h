/********************************************************************************
** Form generated from reading UI file 'LauncherPage.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAUNCHERPAGE_H
#define UI_LAUNCHERPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LauncherPage
{
public:
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_8;
    QGroupBox *userInterfaceBox;
    QVBoxLayout *verticalLayout_2;
    QLabel *instanceSortingLabel;
    QRadioButton *sortByNameBtn;
    QRadioButton *sortLastLaunchedBtn;
    QSpacerItem *verticalSpacer;
    QLabel *renamingBehaviorLabel;
    QRadioButton *askToRenameDirBtn;
    QRadioButton *alwaysRenameDirBtn;
    QRadioButton *neverRenameDirBtn;
    QSpacerItem *verticalSpacer_2;
    QCheckBox *preferMenuBarCheckBox;
    QGroupBox *updateSettingsBox;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *updateIntervalLabel;
    QSpinBox *updateIntervalSpinBox;
    QSpacerItem *horizontalSpacer;
    QCheckBox *autoUpdateCheckBox;
    QGroupBox *foldersBox;
    QGridLayout *gridLayout;
    QLineEdit *skinsDirTextBox;
    QPushButton *skinsDirBrowseBtn;
    QLabel *labelJavaDir;
    QPushButton *iconsDirBrowseBtn;
    QLabel *labelSkinsDir;
    QLabel *labelModsDir;
    QPushButton *javaDirBrowseBtn;
    QLabel *labelDownloadsDir;
    QLineEdit *downloadsDirTextBox;
    QLineEdit *modsDirTextBox;
    QLabel *labelInstDir;
    QPushButton *instDirBrowseBtn;
    QPushButton *downloadsDirBrowseBtn;
    QLineEdit *instDirTextBox;
    QPushButton *modsDirBrowseBtn;
    QLineEdit *javaDirTextBox;
    QLineEdit *iconsDirTextBox;
    QLabel *labelIconsDir;
    QGroupBox *modsBox;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *downloadsDirWatchRecursiveCheckBox;
    QCheckBox *downloadsDirMoveCheckBox;
    QCheckBox *metadataEnableBtn;
    QLabel *metadataWarningLabel;
    QCheckBox *dependenciesEnableBtn;
    QCheckBox *showModIncompatCheckBox;
    QCheckBox *modpackUpdatePromptBtn;
    QGroupBox *instanceBox;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *downloadGameFilesBtn;
    QGroupBox *groupBox_2;
    QFormLayout *formLayout;
    QLabel *lineLimitLabel;
    QSpinBox *lineLimitSpinBox;
    QCheckBox *checkStopLogging;
    QGroupBox *tasksBox;
    QGridLayout *gridLayout_3;
    QSpinBox *numberOfManualRetriesSpinBox;
    QSpinBox *numberOfConcurrentDownloadsSpinBox;
    QSpinBox *timeoutSecondsSpinBox;
    QLabel *numberOfManualRetriesLabel;
    QLabel *numberOfConcurrentDownloadsLabel;
    QLabel *timeoutSecondsLabel;
    QSpinBox *numberOfConcurrentTasksSpinBox;
    QLabel *numberOfConcurrentTasksLabel;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_FeaturesTab;
    QButtonGroup *renamingBehaviorGroup;
    QButtonGroup *sortingModeGroup;

    void setupUi(QWidget *LauncherPage)
    {
        if (LauncherPage->objectName().isEmpty())
            LauncherPage->setObjectName("LauncherPage");
        LauncherPage->resize(767, 796);
        QSizePolicy sizePolicy(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LauncherPage->sizePolicy().hasHeightForWidth());
        LauncherPage->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(LauncherPage);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(LauncherPage);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAsNeeded);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, -149, 746, 1222));
        verticalLayout_8 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_8->setObjectName("verticalLayout_8");
        userInterfaceBox = new QGroupBox(scrollAreaWidgetContents);
        userInterfaceBox->setObjectName("userInterfaceBox");
        userInterfaceBox->setEnabled(true);
        verticalLayout_2 = new QVBoxLayout(userInterfaceBox);
        verticalLayout_2->setObjectName("verticalLayout_2");
        instanceSortingLabel = new QLabel(userInterfaceBox);
        instanceSortingLabel->setObjectName("instanceSortingLabel");

        verticalLayout_2->addWidget(instanceSortingLabel);

        sortByNameBtn = new QRadioButton(userInterfaceBox);
        sortingModeGroup = new QButtonGroup(LauncherPage);
        sortingModeGroup->setObjectName("sortingModeGroup");
        sortingModeGroup->addButton(sortByNameBtn);
        sortByNameBtn->setObjectName("sortByNameBtn");

        verticalLayout_2->addWidget(sortByNameBtn);

        sortLastLaunchedBtn = new QRadioButton(userInterfaceBox);
        sortingModeGroup->addButton(sortLastLaunchedBtn);
        sortLastLaunchedBtn->setObjectName("sortLastLaunchedBtn");

        verticalLayout_2->addWidget(sortLastLaunchedBtn);

        verticalSpacer = new QSpacerItem(0, 6, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_2->addItem(verticalSpacer);

        renamingBehaviorLabel = new QLabel(userInterfaceBox);
        renamingBehaviorLabel->setObjectName("renamingBehaviorLabel");

        verticalLayout_2->addWidget(renamingBehaviorLabel);

        askToRenameDirBtn = new QRadioButton(userInterfaceBox);
        renamingBehaviorGroup = new QButtonGroup(LauncherPage);
        renamingBehaviorGroup->setObjectName("renamingBehaviorGroup");
        renamingBehaviorGroup->addButton(askToRenameDirBtn);
        askToRenameDirBtn->setObjectName("askToRenameDirBtn");

        verticalLayout_2->addWidget(askToRenameDirBtn);

        alwaysRenameDirBtn = new QRadioButton(userInterfaceBox);
        renamingBehaviorGroup->addButton(alwaysRenameDirBtn);
        alwaysRenameDirBtn->setObjectName("alwaysRenameDirBtn");

        verticalLayout_2->addWidget(alwaysRenameDirBtn);

        neverRenameDirBtn = new QRadioButton(userInterfaceBox);
        renamingBehaviorGroup->addButton(neverRenameDirBtn);
        neverRenameDirBtn->setObjectName("neverRenameDirBtn");

        verticalLayout_2->addWidget(neverRenameDirBtn);

        verticalSpacer_2 = new QSpacerItem(0, 6, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_2);

        preferMenuBarCheckBox = new QCheckBox(userInterfaceBox);
        preferMenuBarCheckBox->setObjectName("preferMenuBarCheckBox");

        verticalLayout_2->addWidget(preferMenuBarCheckBox);


        verticalLayout_8->addWidget(userInterfaceBox);

        updateSettingsBox = new QGroupBox(scrollAreaWidgetContents);
        updateSettingsBox->setObjectName("updateSettingsBox");
        gridLayout_2 = new QGridLayout(updateSettingsBox);
        gridLayout_2->setObjectName("gridLayout_2");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        updateIntervalLabel = new QLabel(updateSettingsBox);
        updateIntervalLabel->setObjectName("updateIntervalLabel");

        horizontalLayout_2->addWidget(updateIntervalLabel);

        updateIntervalSpinBox = new QSpinBox(updateSettingsBox);
        updateIntervalSpinBox->setObjectName("updateIntervalSpinBox");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(updateIntervalSpinBox->sizePolicy().hasHeightForWidth());
        updateIntervalSpinBox->setSizePolicy(sizePolicy1);
        updateIntervalSpinBox->setMinimum(0);
        updateIntervalSpinBox->setMaximum(168);

        horizontalLayout_2->addWidget(updateIntervalSpinBox);

        horizontalSpacer = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        gridLayout_2->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        autoUpdateCheckBox = new QCheckBox(updateSettingsBox);
        autoUpdateCheckBox->setObjectName("autoUpdateCheckBox");

        gridLayout_2->addWidget(autoUpdateCheckBox, 0, 0, 1, 2);


        verticalLayout_8->addWidget(updateSettingsBox);

        foldersBox = new QGroupBox(scrollAreaWidgetContents);
        foldersBox->setObjectName("foldersBox");
        gridLayout = new QGridLayout(foldersBox);
        gridLayout->setObjectName("gridLayout");
        skinsDirTextBox = new QLineEdit(foldersBox);
        skinsDirTextBox->setObjectName("skinsDirTextBox");

        gridLayout->addWidget(skinsDirTextBox, 4, 1, 1, 1);

        skinsDirBrowseBtn = new QPushButton(foldersBox);
        skinsDirBrowseBtn->setObjectName("skinsDirBrowseBtn");

        gridLayout->addWidget(skinsDirBrowseBtn, 4, 2, 1, 1);

        labelJavaDir = new QLabel(foldersBox);
        labelJavaDir->setObjectName("labelJavaDir");

        gridLayout->addWidget(labelJavaDir, 3, 0, 1, 1);

        iconsDirBrowseBtn = new QPushButton(foldersBox);
        iconsDirBrowseBtn->setObjectName("iconsDirBrowseBtn");

        gridLayout->addWidget(iconsDirBrowseBtn, 2, 2, 1, 1);

        labelSkinsDir = new QLabel(foldersBox);
        labelSkinsDir->setObjectName("labelSkinsDir");

        gridLayout->addWidget(labelSkinsDir, 4, 0, 1, 1);

        labelModsDir = new QLabel(foldersBox);
        labelModsDir->setObjectName("labelModsDir");

        gridLayout->addWidget(labelModsDir, 1, 0, 1, 1);

        javaDirBrowseBtn = new QPushButton(foldersBox);
        javaDirBrowseBtn->setObjectName("javaDirBrowseBtn");

        gridLayout->addWidget(javaDirBrowseBtn, 3, 2, 1, 1);

        labelDownloadsDir = new QLabel(foldersBox);
        labelDownloadsDir->setObjectName("labelDownloadsDir");

        gridLayout->addWidget(labelDownloadsDir, 5, 0, 1, 1);

        downloadsDirTextBox = new QLineEdit(foldersBox);
        downloadsDirTextBox->setObjectName("downloadsDirTextBox");

        gridLayout->addWidget(downloadsDirTextBox, 5, 1, 1, 1);

        modsDirTextBox = new QLineEdit(foldersBox);
        modsDirTextBox->setObjectName("modsDirTextBox");

        gridLayout->addWidget(modsDirTextBox, 1, 1, 1, 1);

        labelInstDir = new QLabel(foldersBox);
        labelInstDir->setObjectName("labelInstDir");

        gridLayout->addWidget(labelInstDir, 0, 0, 1, 1);

        instDirBrowseBtn = new QPushButton(foldersBox);
        instDirBrowseBtn->setObjectName("instDirBrowseBtn");

        gridLayout->addWidget(instDirBrowseBtn, 0, 2, 1, 1);

        downloadsDirBrowseBtn = new QPushButton(foldersBox);
        downloadsDirBrowseBtn->setObjectName("downloadsDirBrowseBtn");

        gridLayout->addWidget(downloadsDirBrowseBtn, 5, 2, 1, 1);

        instDirTextBox = new QLineEdit(foldersBox);
        instDirTextBox->setObjectName("instDirTextBox");

        gridLayout->addWidget(instDirTextBox, 0, 1, 1, 1);

        modsDirBrowseBtn = new QPushButton(foldersBox);
        modsDirBrowseBtn->setObjectName("modsDirBrowseBtn");

        gridLayout->addWidget(modsDirBrowseBtn, 1, 2, 1, 1);

        javaDirTextBox = new QLineEdit(foldersBox);
        javaDirTextBox->setObjectName("javaDirTextBox");

        gridLayout->addWidget(javaDirTextBox, 3, 1, 1, 1);

        iconsDirTextBox = new QLineEdit(foldersBox);
        iconsDirTextBox->setObjectName("iconsDirTextBox");

        gridLayout->addWidget(iconsDirTextBox, 2, 1, 1, 1);

        labelIconsDir = new QLabel(foldersBox);
        labelIconsDir->setObjectName("labelIconsDir");

        gridLayout->addWidget(labelIconsDir, 2, 0, 1, 1);


        verticalLayout_8->addWidget(foldersBox);

        modsBox = new QGroupBox(scrollAreaWidgetContents);
        modsBox->setObjectName("modsBox");
        verticalLayout_4 = new QVBoxLayout(modsBox);
        verticalLayout_4->setObjectName("verticalLayout_4");
        downloadsDirWatchRecursiveCheckBox = new QCheckBox(modsBox);
        downloadsDirWatchRecursiveCheckBox->setObjectName("downloadsDirWatchRecursiveCheckBox");

        verticalLayout_4->addWidget(downloadsDirWatchRecursiveCheckBox);

        downloadsDirMoveCheckBox = new QCheckBox(modsBox);
        downloadsDirMoveCheckBox->setObjectName("downloadsDirMoveCheckBox");

        verticalLayout_4->addWidget(downloadsDirMoveCheckBox);

        metadataEnableBtn = new QCheckBox(modsBox);
        metadataEnableBtn->setObjectName("metadataEnableBtn");

        verticalLayout_4->addWidget(metadataEnableBtn);

        metadataWarningLabel = new QLabel(modsBox);
        metadataWarningLabel->setObjectName("metadataWarningLabel");
        metadataWarningLabel->setWordWrap(true);

        verticalLayout_4->addWidget(metadataWarningLabel);

        dependenciesEnableBtn = new QCheckBox(modsBox);
        dependenciesEnableBtn->setObjectName("dependenciesEnableBtn");

        verticalLayout_4->addWidget(dependenciesEnableBtn);

        showModIncompatCheckBox = new QCheckBox(modsBox);
        showModIncompatCheckBox->setObjectName("showModIncompatCheckBox");

        verticalLayout_4->addWidget(showModIncompatCheckBox);

        modpackUpdatePromptBtn = new QCheckBox(modsBox);
        modpackUpdatePromptBtn->setObjectName("modpackUpdatePromptBtn");

        verticalLayout_4->addWidget(modpackUpdatePromptBtn);


        verticalLayout_8->addWidget(modsBox);

        instanceBox = new QGroupBox(scrollAreaWidgetContents);
        instanceBox->setObjectName("instanceBox");
        verticalLayout_3 = new QVBoxLayout(instanceBox);
        verticalLayout_3->setObjectName("verticalLayout_3");
        downloadGameFilesBtn = new QCheckBox(instanceBox);
        downloadGameFilesBtn->setObjectName("downloadGameFilesBtn");

        verticalLayout_3->addWidget(downloadGameFilesBtn);


        verticalLayout_8->addWidget(instanceBox);

        groupBox_2 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_2->setObjectName("groupBox_2");
        formLayout = new QFormLayout(groupBox_2);
        formLayout->setObjectName("formLayout");
        formLayout->setLabelAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        lineLimitLabel = new QLabel(groupBox_2);
        lineLimitLabel->setObjectName("lineLimitLabel");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lineLimitLabel->sizePolicy().hasHeightForWidth());
        lineLimitLabel->setSizePolicy(sizePolicy2);

        formLayout->setWidget(0, QFormLayout::LabelRole, lineLimitLabel);

        lineLimitSpinBox = new QSpinBox(groupBox_2);
        lineLimitSpinBox->setObjectName("lineLimitSpinBox");
        sizePolicy1.setHeightForWidth(lineLimitSpinBox->sizePolicy().hasHeightForWidth());
        lineLimitSpinBox->setSizePolicy(sizePolicy1);
        lineLimitSpinBox->setMinimum(10000);
        lineLimitSpinBox->setMaximum(1000000);
        lineLimitSpinBox->setSingleStep(10000);
        lineLimitSpinBox->setValue(100000);

        formLayout->setWidget(0, QFormLayout::FieldRole, lineLimitSpinBox);

        checkStopLogging = new QCheckBox(groupBox_2);
        checkStopLogging->setObjectName("checkStopLogging");

        formLayout->setWidget(1, QFormLayout::SpanningRole, checkStopLogging);


        verticalLayout_8->addWidget(groupBox_2);

        tasksBox = new QGroupBox(scrollAreaWidgetContents);
        tasksBox->setObjectName("tasksBox");
        gridLayout_3 = new QGridLayout(tasksBox);
        gridLayout_3->setObjectName("gridLayout_3");
        numberOfManualRetriesSpinBox = new QSpinBox(tasksBox);
        numberOfManualRetriesSpinBox->setObjectName("numberOfManualRetriesSpinBox");
        sizePolicy1.setHeightForWidth(numberOfManualRetriesSpinBox->sizePolicy().hasHeightForWidth());
        numberOfManualRetriesSpinBox->setSizePolicy(sizePolicy1);
        numberOfManualRetriesSpinBox->setMinimumSize(QSize(60, 0));
        numberOfManualRetriesSpinBox->setMinimum(0);

        gridLayout_3->addWidget(numberOfManualRetriesSpinBox, 2, 1, 1, 1);

        numberOfConcurrentDownloadsSpinBox = new QSpinBox(tasksBox);
        numberOfConcurrentDownloadsSpinBox->setObjectName("numberOfConcurrentDownloadsSpinBox");
        sizePolicy1.setHeightForWidth(numberOfConcurrentDownloadsSpinBox->sizePolicy().hasHeightForWidth());
        numberOfConcurrentDownloadsSpinBox->setSizePolicy(sizePolicy1);
        numberOfConcurrentDownloadsSpinBox->setMinimumSize(QSize(60, 0));
        numberOfConcurrentDownloadsSpinBox->setMinimum(1);

        gridLayout_3->addWidget(numberOfConcurrentDownloadsSpinBox, 1, 1, 1, 1);

        timeoutSecondsSpinBox = new QSpinBox(tasksBox);
        timeoutSecondsSpinBox->setObjectName("timeoutSecondsSpinBox");
        sizePolicy1.setHeightForWidth(timeoutSecondsSpinBox->sizePolicy().hasHeightForWidth());
        timeoutSecondsSpinBox->setSizePolicy(sizePolicy1);
        timeoutSecondsSpinBox->setMinimumSize(QSize(60, 0));

        gridLayout_3->addWidget(timeoutSecondsSpinBox, 3, 1, 1, 1);

        numberOfManualRetriesLabel = new QLabel(tasksBox);
        numberOfManualRetriesLabel->setObjectName("numberOfManualRetriesLabel");

        gridLayout_3->addWidget(numberOfManualRetriesLabel, 2, 0, 1, 1);

        numberOfConcurrentDownloadsLabel = new QLabel(tasksBox);
        numberOfConcurrentDownloadsLabel->setObjectName("numberOfConcurrentDownloadsLabel");

        gridLayout_3->addWidget(numberOfConcurrentDownloadsLabel, 1, 0, 1, 1);

        timeoutSecondsLabel = new QLabel(tasksBox);
        timeoutSecondsLabel->setObjectName("timeoutSecondsLabel");

        gridLayout_3->addWidget(timeoutSecondsLabel, 3, 0, 1, 1);

        numberOfConcurrentTasksSpinBox = new QSpinBox(tasksBox);
        numberOfConcurrentTasksSpinBox->setObjectName("numberOfConcurrentTasksSpinBox");
        sizePolicy1.setHeightForWidth(numberOfConcurrentTasksSpinBox->sizePolicy().hasHeightForWidth());
        numberOfConcurrentTasksSpinBox->setSizePolicy(sizePolicy1);
        numberOfConcurrentTasksSpinBox->setMinimumSize(QSize(60, 0));
        numberOfConcurrentTasksSpinBox->setMinimum(1);

        gridLayout_3->addWidget(numberOfConcurrentTasksSpinBox, 0, 1, 1, 1);

        numberOfConcurrentTasksLabel = new QLabel(tasksBox);
        numberOfConcurrentTasksLabel->setObjectName("numberOfConcurrentTasksLabel");

        gridLayout_3->addWidget(numberOfConcurrentTasksLabel, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 0, 2, 1, 1);


        verticalLayout_8->addWidget(tasksBox);

        verticalSpacer_FeaturesTab = new QSpacerItem(0, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_FeaturesTab);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

#if QT_CONFIG(shortcut)
        labelJavaDir->setBuddy(javaDirTextBox);
        labelSkinsDir->setBuddy(skinsDirTextBox);
        labelModsDir->setBuddy(modsDirTextBox);
        labelDownloadsDir->setBuddy(downloadsDirTextBox);
        labelInstDir->setBuddy(instDirTextBox);
        labelIconsDir->setBuddy(iconsDirTextBox);
        lineLimitLabel->setBuddy(lineLimitSpinBox);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(scrollArea, preferMenuBarCheckBox);
        QWidget::setTabOrder(preferMenuBarCheckBox, autoUpdateCheckBox);
        QWidget::setTabOrder(autoUpdateCheckBox, updateIntervalSpinBox);
        QWidget::setTabOrder(updateIntervalSpinBox, instDirTextBox);
        QWidget::setTabOrder(instDirTextBox, instDirBrowseBtn);
        QWidget::setTabOrder(instDirBrowseBtn, modsDirTextBox);
        QWidget::setTabOrder(modsDirTextBox, modsDirBrowseBtn);
        QWidget::setTabOrder(modsDirBrowseBtn, iconsDirTextBox);
        QWidget::setTabOrder(iconsDirTextBox, iconsDirBrowseBtn);
        QWidget::setTabOrder(iconsDirBrowseBtn, javaDirTextBox);
        QWidget::setTabOrder(javaDirTextBox, javaDirBrowseBtn);
        QWidget::setTabOrder(javaDirBrowseBtn, skinsDirTextBox);
        QWidget::setTabOrder(skinsDirTextBox, skinsDirBrowseBtn);
        QWidget::setTabOrder(skinsDirBrowseBtn, downloadsDirTextBox);
        QWidget::setTabOrder(downloadsDirTextBox, downloadsDirBrowseBtn);
        QWidget::setTabOrder(downloadsDirBrowseBtn, downloadsDirWatchRecursiveCheckBox);
        QWidget::setTabOrder(downloadsDirWatchRecursiveCheckBox, downloadsDirMoveCheckBox);
        QWidget::setTabOrder(downloadsDirMoveCheckBox, metadataEnableBtn);
        QWidget::setTabOrder(metadataEnableBtn, dependenciesEnableBtn);
        QWidget::setTabOrder(dependenciesEnableBtn, modpackUpdatePromptBtn);
        QWidget::setTabOrder(modpackUpdatePromptBtn, lineLimitSpinBox);
        QWidget::setTabOrder(lineLimitSpinBox, checkStopLogging);
        QWidget::setTabOrder(checkStopLogging, numberOfConcurrentTasksSpinBox);
        QWidget::setTabOrder(numberOfConcurrentTasksSpinBox, numberOfConcurrentDownloadsSpinBox);
        QWidget::setTabOrder(numberOfConcurrentDownloadsSpinBox, numberOfManualRetriesSpinBox);
        QWidget::setTabOrder(numberOfManualRetriesSpinBox, timeoutSecondsSpinBox);

        retranslateUi(LauncherPage);

        QMetaObject::connectSlotsByName(LauncherPage);
    } // setupUi

    void retranslateUi(QWidget *LauncherPage)
    {
        userInterfaceBox->setTitle(QCoreApplication::translate("LauncherPage", "User Interface", nullptr));
        instanceSortingLabel->setText(QCoreApplication::translate("LauncherPage", "Instance Sorting", nullptr));
        sortByNameBtn->setText(QCoreApplication::translate("LauncherPage", "By &name", nullptr));
        sortLastLaunchedBtn->setText(QCoreApplication::translate("LauncherPage", "&By last launched", nullptr));
        renamingBehaviorLabel->setText(QCoreApplication::translate("LauncherPage", "Instance Renaming", nullptr));
        askToRenameDirBtn->setText(QCoreApplication::translate("LauncherPage", "Ask what to do", nullptr));
        alwaysRenameDirBtn->setText(QCoreApplication::translate("LauncherPage", "Always rename the folder", nullptr));
        neverRenameDirBtn->setText(QCoreApplication::translate("LauncherPage", "Never rename the folder", nullptr));
#if QT_CONFIG(tooltip)
        preferMenuBarCheckBox->setToolTip(QCoreApplication::translate("LauncherPage", "The menubar is more friendly for keyboard-driven interaction.", nullptr));
#endif // QT_CONFIG(tooltip)
        preferMenuBarCheckBox->setText(QCoreApplication::translate("LauncherPage", "&Replace toolbar with menubar", nullptr));
        updateSettingsBox->setTitle(QCoreApplication::translate("LauncherPage", "Updater", nullptr));
        updateIntervalLabel->setText(QCoreApplication::translate("LauncherPage", "How Often?", nullptr));
#if QT_CONFIG(tooltip)
        updateIntervalSpinBox->setToolTip(QCoreApplication::translate("LauncherPage", "Set to 0 to only check on launch", nullptr));
#endif // QT_CONFIG(tooltip)
        updateIntervalSpinBox->setSpecialValueText(QCoreApplication::translate("LauncherPage", "On Launch", nullptr));
        updateIntervalSpinBox->setSuffix(QCoreApplication::translate("LauncherPage", " hours", nullptr));
        updateIntervalSpinBox->setPrefix(QCoreApplication::translate("LauncherPage", "Every ", nullptr));
        autoUpdateCheckBox->setText(QCoreApplication::translate("LauncherPage", "Check for updates automatically", nullptr));
        foldersBox->setTitle(QCoreApplication::translate("LauncherPage", "Folders", nullptr));
        skinsDirBrowseBtn->setText(QCoreApplication::translate("LauncherPage", "Browse", nullptr));
#if QT_CONFIG(tooltip)
        labelJavaDir->setToolTip(QCoreApplication::translate("LauncherPage", "Folder where Prism Launcher stores automatically downloaded Java versions. Do NOT set this to your system Java installation.", nullptr));
#endif // QT_CONFIG(tooltip)
        labelJavaDir->setText(QCoreApplication::translate("LauncherPage", "&Auto Java Download:", nullptr));
        iconsDirBrowseBtn->setText(QCoreApplication::translate("LauncherPage", "Browse", nullptr));
        labelSkinsDir->setText(QCoreApplication::translate("LauncherPage", "&Skins:", nullptr));
        labelModsDir->setText(QCoreApplication::translate("LauncherPage", "&Mods:", nullptr));
        javaDirBrowseBtn->setText(QCoreApplication::translate("LauncherPage", "Browse", nullptr));
        labelDownloadsDir->setText(QCoreApplication::translate("LauncherPage", "&Downloads:", nullptr));
        labelInstDir->setText(QCoreApplication::translate("LauncherPage", "I&nstances:", nullptr));
        instDirBrowseBtn->setText(QCoreApplication::translate("LauncherPage", "Browse", nullptr));
        downloadsDirBrowseBtn->setText(QCoreApplication::translate("LauncherPage", "Browse", nullptr));
        modsDirBrowseBtn->setText(QCoreApplication::translate("LauncherPage", "Browse", nullptr));
        labelIconsDir->setText(QCoreApplication::translate("LauncherPage", "&Icons:", nullptr));
        modsBox->setTitle(QCoreApplication::translate("LauncherPage", "Mods and Modpacks", nullptr));
#if QT_CONFIG(tooltip)
        downloadsDirWatchRecursiveCheckBox->setToolTip(QCoreApplication::translate("LauncherPage", "When enabled, in addition to the downloads folder, its sub folders will also be searched when looking for resources (e.g. when looking for blocked mods on CurseForge).", nullptr));
#endif // QT_CONFIG(tooltip)
        downloadsDirWatchRecursiveCheckBox->setText(QCoreApplication::translate("LauncherPage", "Check &subfolders for blocked mods", nullptr));
#if QT_CONFIG(tooltip)
        downloadsDirMoveCheckBox->setToolTip(QCoreApplication::translate("LauncherPage", "When enabled, it will move blocked resources instead of copying them.", nullptr));
#endif // QT_CONFIG(tooltip)
        downloadsDirMoveCheckBox->setText(QCoreApplication::translate("LauncherPage", "Move blocked mods instead of copying them", nullptr));
#if QT_CONFIG(tooltip)
        metadataEnableBtn->setToolTip(QCoreApplication::translate("LauncherPage", "Store version information provided by mod providers (like Modrinth or CurseForge) for mods.", nullptr));
#endif // QT_CONFIG(tooltip)
        metadataEnableBtn->setText(QCoreApplication::translate("LauncherPage", "Keep track of mod metadata", nullptr));
        metadataWarningLabel->setText(QCoreApplication::translate("LauncherPage", "<html><head/><body><p><span style=\" font-weight:600; color:#f5c211;\">Warning</span><span style=\" color:#f5c211;\">: Disabling mod metadata may also disable some QoL features, such as mod updating!</span></p></body></html>", nullptr));
#if QT_CONFIG(tooltip)
        dependenciesEnableBtn->setToolTip(QCoreApplication::translate("LauncherPage", "Automatically detect, install, and update mod dependencies.", nullptr));
#endif // QT_CONFIG(tooltip)
        dependenciesEnableBtn->setText(QCoreApplication::translate("LauncherPage", "Install dependencies automatically", nullptr));
#if QT_CONFIG(tooltip)
        showModIncompatCheckBox->setToolTip(QCoreApplication::translate("LauncherPage", "Currently this just shows mods which are not marked as compatible with the current Minecraft version.", nullptr));
#endif // QT_CONFIG(tooltip)
        showModIncompatCheckBox->setText(QCoreApplication::translate("LauncherPage", "Detect and show mod incompatibilities (experimental)", nullptr));
#if QT_CONFIG(tooltip)
        modpackUpdatePromptBtn->setToolTip(QCoreApplication::translate("LauncherPage", "When creating a new modpack instance, suggest updating an existing instance instead.", nullptr));
#endif // QT_CONFIG(tooltip)
        modpackUpdatePromptBtn->setText(QCoreApplication::translate("LauncherPage", "Suggest to update an existing instance during modpack installation", nullptr));
        instanceBox->setTitle(QCoreApplication::translate("LauncherPage", "Instance Creation", nullptr));
#if QT_CONFIG(tooltip)
        downloadGameFilesBtn->setToolTip(QCoreApplication::translate("LauncherPage", "Downloads required game files while creating the instance. Disable this to skip the initial download and fetch files when the instance is launched instead.", nullptr));
#endif // QT_CONFIG(tooltip)
        downloadGameFilesBtn->setText(QCoreApplication::translate("LauncherPage", "Download game files during instance creation", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("LauncherPage", "Console", nullptr));
        lineLimitLabel->setText(QCoreApplication::translate("LauncherPage", "Log History &Limit:", nullptr));
        lineLimitSpinBox->setSuffix(QCoreApplication::translate("LauncherPage", " lines", nullptr));
        checkStopLogging->setText(QCoreApplication::translate("LauncherPage", "&Stop logging when log overflows", nullptr));
        tasksBox->setTitle(QCoreApplication::translate("LauncherPage", "Tasks", nullptr));
        timeoutSecondsSpinBox->setSuffix(QCoreApplication::translate("LauncherPage", "s", nullptr));
        numberOfManualRetriesLabel->setText(QCoreApplication::translate("LauncherPage", "Retry Limit:", nullptr));
        numberOfConcurrentDownloadsLabel->setText(QCoreApplication::translate("LauncherPage", "Concurrent Download Limit:", nullptr));
#if QT_CONFIG(tooltip)
        timeoutSecondsLabel->setToolTip(QCoreApplication::translate("LauncherPage", "Seconds to wait until the requests are terminated", nullptr));
#endif // QT_CONFIG(tooltip)
        timeoutSecondsLabel->setText(QCoreApplication::translate("LauncherPage", "HTTP Timeout:", nullptr));
        numberOfConcurrentTasksLabel->setText(QCoreApplication::translate("LauncherPage", "Concurrent Task Limit:", nullptr));
        (void)LauncherPage;
    } // retranslateUi

};

namespace Ui {
    class LauncherPage: public Ui_LauncherPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAUNCHERPAGE_H
