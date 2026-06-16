/********************************************************************************
** Form generated from reading UI file 'AppearanceWidget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPEARANCEWIDGET_H
#define UI_APPEARANCEWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AppearanceWidget
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *themingBox;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;
    QPushButton *catPackFolder;
    QPushButton *widgetStyleFolder;
    QPushButton *iconsFolder;
    QLabel *catPackLabel;
    QComboBox *catPackComboBox;
    QComboBox *iconsComboBox;
    QComboBox *widgetStyleComboBox;
    QPushButton *reloadThemesButton;
    QLabel *widgetStyleLabel;
    QLabel *iconsLabel;
    QGroupBox *settingsBox;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label;
    QFontComboBox *consoleFont;
    QSpinBox *fontSizeBox;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;
    QLabel *catOpacityLabel;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget;
    QGridLayout *gridLayout_4;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_4;
    QSlider *catOpacitySlider;
    QSpacerItem *verticalSpacer;
    QLabel *catFitLabel;
    QComboBox *catFitComboBox;
    QGroupBox *previewBox;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *catPreview;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QPushButton *icon1;
    QPushButton *icon2;
    QPushButton *icon3;
    QPushButton *icon4;
    QPushButton *icon5;
    QPushButton *icon6;
    QPushButton *icon7;
    QPushButton *icon8;
    QPushButton *icon9;
    QPushButton *icon10;
    QSpacerItem *horizontalSpacer;
    QTextEdit *consolePreview;

    void setupUi(QWidget *AppearanceWidget)
    {
        if (AppearanceWidget->objectName().isEmpty())
            AppearanceWidget->setObjectName("AppearanceWidget");
        AppearanceWidget->resize(600, 583);
        AppearanceWidget->setMinimumSize(QSize(300, 0));
        verticalLayout = new QVBoxLayout(AppearanceWidget);
        verticalLayout->setObjectName("verticalLayout");
        themingBox = new QGroupBox(AppearanceWidget);
        themingBox->setObjectName("themingBox");
        themingBox->setFlat(false);
        verticalLayout_2 = new QVBoxLayout(themingBox);
        verticalLayout_2->setObjectName("verticalLayout_2");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        catPackFolder = new QPushButton(themingBox);
        catPackFolder->setObjectName("catPackFolder");

        gridLayout->addWidget(catPackFolder, 2, 3, 1, 1);

        widgetStyleFolder = new QPushButton(themingBox);
        widgetStyleFolder->setObjectName("widgetStyleFolder");

        gridLayout->addWidget(widgetStyleFolder, 0, 3, 1, 1);

        iconsFolder = new QPushButton(themingBox);
        iconsFolder->setObjectName("iconsFolder");

        gridLayout->addWidget(iconsFolder, 1, 3, 1, 1);

        catPackLabel = new QLabel(themingBox);
        catPackLabel->setObjectName("catPackLabel");

        gridLayout->addWidget(catPackLabel, 2, 0, 1, 1);

        catPackComboBox = new QComboBox(themingBox);
        catPackComboBox->setObjectName("catPackComboBox");

        gridLayout->addWidget(catPackComboBox, 2, 2, 1, 1);

        iconsComboBox = new QComboBox(themingBox);
        iconsComboBox->setObjectName("iconsComboBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(iconsComboBox->sizePolicy().hasHeightForWidth());
        iconsComboBox->setSizePolicy(sizePolicy);
        iconsComboBox->setFocusPolicy(Qt::FocusPolicy::StrongFocus);

        gridLayout->addWidget(iconsComboBox, 1, 2, 1, 1);

        widgetStyleComboBox = new QComboBox(themingBox);
        widgetStyleComboBox->setObjectName("widgetStyleComboBox");
        sizePolicy.setHeightForWidth(widgetStyleComboBox->sizePolicy().hasHeightForWidth());
        widgetStyleComboBox->setSizePolicy(sizePolicy);
        widgetStyleComboBox->setFocusPolicy(Qt::FocusPolicy::StrongFocus);

        gridLayout->addWidget(widgetStyleComboBox, 0, 2, 1, 1);

        reloadThemesButton = new QPushButton(themingBox);
        reloadThemesButton->setObjectName("reloadThemesButton");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(reloadThemesButton->sizePolicy().hasHeightForWidth());
        reloadThemesButton->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(reloadThemesButton, 3, 2, 1, 1);

        widgetStyleLabel = new QLabel(themingBox);
        widgetStyleLabel->setObjectName("widgetStyleLabel");

        gridLayout->addWidget(widgetStyleLabel, 0, 0, 1, 1);

        iconsLabel = new QLabel(themingBox);
        iconsLabel->setObjectName("iconsLabel");

        gridLayout->addWidget(iconsLabel, 1, 0, 1, 1);


        verticalLayout_2->addLayout(gridLayout);


        verticalLayout->addWidget(themingBox);

        settingsBox = new QGroupBox(AppearanceWidget);
        settingsBox->setObjectName("settingsBox");
        verticalLayout_5 = new QVBoxLayout(settingsBox);
        verticalLayout_5->setObjectName("verticalLayout_5");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label = new QLabel(settingsBox);
        label->setObjectName("label");

        horizontalLayout_5->addWidget(label);

        consoleFont = new QFontComboBox(settingsBox);
        consoleFont->setObjectName("consoleFont");

        horizontalLayout_5->addWidget(consoleFont);

        fontSizeBox = new QSpinBox(settingsBox);
        fontSizeBox->setObjectName("fontSizeBox");
        sizePolicy1.setHeightForWidth(fontSizeBox->sizePolicy().hasHeightForWidth());
        fontSizeBox->setSizePolicy(sizePolicy1);
        fontSizeBox->setMinimum(5);
        fontSizeBox->setMaximum(16);
        fontSizeBox->setValue(11);

        horizontalLayout_5->addWidget(fontSizeBox);

        horizontalSpacer_2 = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);


        verticalLayout_5->addLayout(horizontalLayout_5);

        verticalSpacer_2 = new QSpacerItem(0, 6, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_5->addItem(verticalSpacer_2);

        catOpacityLabel = new QLabel(settingsBox);
        catOpacityLabel->setObjectName("catOpacityLabel");

        verticalLayout_5->addWidget(catOpacityLabel);

        widget_2 = new QWidget(settingsBox);
        widget_2->setObjectName("widget_2");
        widget_2->setMaximumSize(QSize(300, 16777215));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);

        verticalLayout_5->addWidget(widget_2);

        widget = new QWidget(settingsBox);
        widget->setObjectName("widget");
        widget->setMaximumSize(QSize(300, 16777215));
        gridLayout_4 = new QGridLayout(widget);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(widget);
        label_5->setObjectName("label_5");
        label_5->setEnabled(false);

        gridLayout_4->addWidget(label_5, 3, 3, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_4, 3, 2, 1, 1);

        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");
        label_4->setEnabled(false);

        gridLayout_4->addWidget(label_4, 3, 1, 1, 1);

        catOpacitySlider = new QSlider(widget);
        catOpacitySlider->setObjectName("catOpacitySlider");
        catOpacitySlider->setMinimumSize(QSize(0, 0));
        catOpacitySlider->setMaximum(100);
        catOpacitySlider->setOrientation(Qt::Orientation::Horizontal);

        gridLayout_4->addWidget(catOpacitySlider, 2, 0, 1, 4);


        verticalLayout_5->addWidget(widget);

        verticalSpacer = new QSpacerItem(0, 6, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_5->addItem(verticalSpacer);

        catFitLabel = new QLabel(settingsBox);
        catFitLabel->setObjectName("catFitLabel");
        sizePolicy1.setHeightForWidth(catFitLabel->sizePolicy().hasHeightForWidth());
        catFitLabel->setSizePolicy(sizePolicy1);

        verticalLayout_5->addWidget(catFitLabel);

        catFitComboBox = new QComboBox(settingsBox);
        catFitComboBox->addItem(QString());
        catFitComboBox->addItem(QString());
        catFitComboBox->addItem(QString());
        catFitComboBox->setObjectName("catFitComboBox");
        sizePolicy1.setHeightForWidth(catFitComboBox->sizePolicy().hasHeightForWidth());
        catFitComboBox->setSizePolicy(sizePolicy1);
        catFitComboBox->setProperty("sizeHint", QVariant(QSize(81, 32)));

        verticalLayout_5->addWidget(catFitComboBox);


        verticalLayout->addWidget(settingsBox);

        previewBox = new QGroupBox(AppearanceWidget);
        previewBox->setObjectName("previewBox");
        verticalLayout_3 = new QVBoxLayout(previewBox);
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        catPreview = new QPushButton(previewBox);
        catPreview->setObjectName("catPreview");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(catPreview->sizePolicy().hasHeightForWidth());
        catPreview->setSizePolicy(sizePolicy2);
        catPreview->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        catPreview->setIconSize(QSize(64, 128));
        catPreview->setFlat(true);

        horizontalLayout_3->addWidget(catPreview);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        icon1 = new QPushButton(previewBox);
        icon1->setObjectName("icon1");
        icon1->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("new")));
        icon1->setIcon(icon);
        icon1->setFlat(true);

        horizontalLayout->addWidget(icon1);

        icon2 = new QPushButton(previewBox);
        icon2->setObjectName("icon2");
        icon2->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        QIcon icon11(QIcon::fromTheme(QString::fromUtf8("centralmods")));
        icon2->setIcon(icon11);
        icon2->setFlat(true);

        horizontalLayout->addWidget(icon2);

        icon3 = new QPushButton(previewBox);
        icon3->setObjectName("icon3");
        icon3->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        QIcon icon12(QIcon::fromTheme(QString::fromUtf8("viewfolder")));
        icon3->setIcon(icon12);
        icon3->setFlat(true);

        horizontalLayout->addWidget(icon3);

        icon4 = new QPushButton(previewBox);
        icon4->setObjectName("icon4");
        icon4->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        QIcon icon13(QIcon::fromTheme(QString::fromUtf8("launch")));
        icon4->setIcon(icon13);
        icon4->setFlat(true);

        horizontalLayout->addWidget(icon4);

        icon5 = new QPushButton(previewBox);
        icon5->setObjectName("icon5");
        icon5->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        QIcon icon14(QIcon::fromTheme(QString::fromUtf8("copy")));
        icon5->setIcon(icon14);
        icon5->setFlat(true);

        horizontalLayout->addWidget(icon5);

        icon6 = new QPushButton(previewBox);
        icon6->setObjectName("icon6");
        icon6->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        QIcon icon15(QIcon::fromTheme(QString::fromUtf8("export")));
        icon6->setIcon(icon15);
        icon6->setFlat(true);

        horizontalLayout->addWidget(icon6);

        icon7 = new QPushButton(previewBox);
        icon7->setObjectName("icon7");
        icon7->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        QIcon icon16(QIcon::fromTheme(QString::fromUtf8("delete")));
        icon7->setIcon(icon16);
        icon7->setFlat(true);

        horizontalLayout->addWidget(icon7);

        icon8 = new QPushButton(previewBox);
        icon8->setObjectName("icon8");
        icon8->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        QIcon icon17(QIcon::fromTheme(QString::fromUtf8("about")));
        icon8->setIcon(icon17);
        icon8->setFlat(true);

        horizontalLayout->addWidget(icon8);

        icon9 = new QPushButton(previewBox);
        icon9->setObjectName("icon9");
        icon9->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        QIcon icon18(QIcon::fromTheme(QString::fromUtf8("settings")));
        icon9->setIcon(icon18);
        icon9->setFlat(true);

        horizontalLayout->addWidget(icon9);

        icon10 = new QPushButton(previewBox);
        icon10->setObjectName("icon10");
        icon10->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        QIcon icon19(QIcon::fromTheme(QString::fromUtf8("cat")));
        icon10->setIcon(icon19);
        icon10->setFlat(true);

        horizontalLayout->addWidget(icon10);

        horizontalSpacer = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_4->addLayout(horizontalLayout);

        consolePreview = new QTextEdit(previewBox);
        consolePreview->setObjectName("consolePreview");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(consolePreview->sizePolicy().hasHeightForWidth());
        consolePreview->setSizePolicy(sizePolicy3);
        consolePreview->setHorizontalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAsNeeded);
        consolePreview->setUndoRedoEnabled(false);
        consolePreview->setTextInteractionFlags(Qt::TextInteractionFlag::TextSelectableByKeyboard|Qt::TextInteractionFlag::TextSelectableByMouse);

        verticalLayout_4->addWidget(consolePreview);


        horizontalLayout_3->addLayout(verticalLayout_4);


        verticalLayout_3->addLayout(horizontalLayout_3);


        verticalLayout->addWidget(previewBox);

#if QT_CONFIG(shortcut)
        catPackLabel->setBuddy(catPackComboBox);
        widgetStyleLabel->setBuddy(widgetStyleComboBox);
        iconsLabel->setBuddy(iconsComboBox);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(widgetStyleComboBox, widgetStyleFolder);
        QWidget::setTabOrder(widgetStyleFolder, iconsComboBox);
        QWidget::setTabOrder(iconsComboBox, iconsFolder);
        QWidget::setTabOrder(iconsFolder, catPackComboBox);
        QWidget::setTabOrder(catPackComboBox, catPackFolder);
        QWidget::setTabOrder(catPackFolder, reloadThemesButton);
        QWidget::setTabOrder(reloadThemesButton, consoleFont);
        QWidget::setTabOrder(consoleFont, fontSizeBox);
        QWidget::setTabOrder(fontSizeBox, catFitComboBox);
        QWidget::setTabOrder(catFitComboBox, catOpacitySlider);
        QWidget::setTabOrder(catOpacitySlider, consolePreview);

        retranslateUi(AppearanceWidget);

        catFitComboBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AppearanceWidget);
    } // setupUi

    void retranslateUi(QWidget *AppearanceWidget)
    {
        themingBox->setTitle(QString());
#if QT_CONFIG(tooltip)
        catPackFolder->setToolTip(QCoreApplication::translate("AppearanceWidget", "View cat packs folder.", nullptr));
#endif // QT_CONFIG(tooltip)
        catPackFolder->setText(QCoreApplication::translate("AppearanceWidget", "Open Folder", nullptr));
#if QT_CONFIG(tooltip)
        widgetStyleFolder->setToolTip(QCoreApplication::translate("AppearanceWidget", "View widget themes folder.", nullptr));
#endif // QT_CONFIG(tooltip)
        widgetStyleFolder->setText(QCoreApplication::translate("AppearanceWidget", "Open Folder", nullptr));
#if QT_CONFIG(tooltip)
        iconsFolder->setToolTip(QCoreApplication::translate("AppearanceWidget", "View icon themes folder.", nullptr));
#endif // QT_CONFIG(tooltip)
        iconsFolder->setText(QCoreApplication::translate("AppearanceWidget", "Open Folder", nullptr));
        catPackLabel->setText(QCoreApplication::translate("AppearanceWidget", "&Cat Pack:", nullptr));
        reloadThemesButton->setText(QCoreApplication::translate("AppearanceWidget", "Reload All", nullptr));
        widgetStyleLabel->setText(QCoreApplication::translate("AppearanceWidget", "Theme:", nullptr));
        iconsLabel->setText(QCoreApplication::translate("AppearanceWidget", "&Icons:", nullptr));
        settingsBox->setTitle(QString());
        label->setText(QCoreApplication::translate("AppearanceWidget", "Console Font:", nullptr));
        catOpacityLabel->setText(QCoreApplication::translate("AppearanceWidget", "Cat Opacity", nullptr));
        label_5->setText(QCoreApplication::translate("AppearanceWidget", "Opaque", nullptr));
        label_4->setText(QCoreApplication::translate("AppearanceWidget", "Transparent", nullptr));
        catFitLabel->setText(QCoreApplication::translate("AppearanceWidget", "Cat Scaling", nullptr));
        catFitComboBox->setItemText(0, QCoreApplication::translate("AppearanceWidget", "Fit", nullptr));
        catFitComboBox->setItemText(1, QCoreApplication::translate("AppearanceWidget", "Fill", nullptr));
        catFitComboBox->setItemText(2, QCoreApplication::translate("AppearanceWidget", "Stretch", nullptr));

        previewBox->setTitle(QCoreApplication::translate("AppearanceWidget", "Preview", nullptr));
        catPreview->setText(QString());
        icon1->setText(QString());
        icon2->setText(QString());
        icon3->setText(QString());
        icon4->setText(QString());
        icon5->setText(QString());
        icon6->setText(QString());
        icon7->setText(QString());
        icon8->setText(QString());
        icon9->setText(QString());
        icon10->setText(QString());
        (void)AppearanceWidget;
    } // retranslateUi

};

namespace Ui {
    class AppearanceWidget: public Ui_AppearanceWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPEARANCEWIDGET_H
