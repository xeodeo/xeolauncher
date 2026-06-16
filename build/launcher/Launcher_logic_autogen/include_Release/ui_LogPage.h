/********************************************************************************
** Form generated from reading UI file 'LogPage.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGPAGE_H
#define UI_LOGPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "ui/widgets/LogView.h"

QT_BEGIN_NAMESPACE

class Ui_LogPage
{
public:
    QGridLayout *gridLayout;
    LogView *text;
    QHBoxLayout *horizontalLayout;
    QCheckBox *trackLogCheckbox;
    QCheckBox *wrapCheckbox;
    QCheckBox *colorCheckbox;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnCopy;
    QPushButton *btnPaste;
    QPushButton *btnClear;
    QPushButton *findButton;
    QPushButton *btnBottom;
    QFrame *line;
    QLineEdit *searchBar;

    void setupUi(QWidget *LogPage)
    {
        if (LogPage->objectName().isEmpty())
            LogPage->setObjectName("LogPage");
        LogPage->resize(825, 782);
        gridLayout = new QGridLayout(LogPage);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, -1, 0);
        text = new LogView(LogPage);
        text->setObjectName("text");
        text->setUndoRedoEnabled(false);
        text->setReadOnly(true);
        text->setPlainText(QString::fromUtf8(""));
        text->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse|Qt::TextBrowserInteraction|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        text->setCenterOnScroll(false);

        gridLayout->addWidget(text, 1, 0, 1, 5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        trackLogCheckbox = new QCheckBox(LogPage);
        trackLogCheckbox->setObjectName("trackLogCheckbox");
        trackLogCheckbox->setChecked(true);

        horizontalLayout->addWidget(trackLogCheckbox);

        wrapCheckbox = new QCheckBox(LogPage);
        wrapCheckbox->setObjectName("wrapCheckbox");
        wrapCheckbox->setChecked(true);

        horizontalLayout->addWidget(wrapCheckbox);

        colorCheckbox = new QCheckBox(LogPage);
        colorCheckbox->setObjectName("colorCheckbox");
        colorCheckbox->setChecked(true);

        horizontalLayout->addWidget(colorCheckbox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnCopy = new QPushButton(LogPage);
        btnCopy->setObjectName("btnCopy");

        horizontalLayout->addWidget(btnCopy);

        btnPaste = new QPushButton(LogPage);
        btnPaste->setObjectName("btnPaste");

        horizontalLayout->addWidget(btnPaste);

        btnClear = new QPushButton(LogPage);
        btnClear->setObjectName("btnClear");

        horizontalLayout->addWidget(btnClear);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 5);

        findButton = new QPushButton(LogPage);
        findButton->setObjectName("findButton");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(findButton->sizePolicy().hasHeightForWidth());
        findButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(findButton, 2, 2, 1, 1);

        btnBottom = new QPushButton(LogPage);
        btnBottom->setObjectName("btnBottom");
        sizePolicy.setHeightForWidth(btnBottom->sizePolicy().hasHeightForWidth());
        btnBottom->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btnBottom, 2, 4, 1, 1);

        line = new QFrame(LogPage);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::VLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout->addWidget(line, 2, 3, 1, 1);

        searchBar = new QLineEdit(LogPage);
        searchBar->setObjectName("searchBar");

        gridLayout->addWidget(searchBar, 2, 0, 1, 2);

        QWidget::setTabOrder(trackLogCheckbox, wrapCheckbox);
        QWidget::setTabOrder(wrapCheckbox, colorCheckbox);
        QWidget::setTabOrder(colorCheckbox, btnCopy);
        QWidget::setTabOrder(btnCopy, btnPaste);
        QWidget::setTabOrder(btnPaste, btnClear);
        QWidget::setTabOrder(btnClear, text);
        QWidget::setTabOrder(text, findButton);

        retranslateUi(LogPage);

        QMetaObject::connectSlotsByName(LogPage);
    } // setupUi

    void retranslateUi(QWidget *LogPage)
    {
        trackLogCheckbox->setText(QCoreApplication::translate("LogPage", "Keep updating", nullptr));
        wrapCheckbox->setText(QCoreApplication::translate("LogPage", "Wrap lines", nullptr));
        colorCheckbox->setText(QCoreApplication::translate("LogPage", "Color lines", nullptr));
#if QT_CONFIG(tooltip)
        btnCopy->setToolTip(QCoreApplication::translate("LogPage", "Copy the whole log into the clipboard", nullptr));
#endif // QT_CONFIG(tooltip)
        btnCopy->setText(QCoreApplication::translate("LogPage", "&Copy", nullptr));
#if QT_CONFIG(tooltip)
        btnPaste->setToolTip(QCoreApplication::translate("LogPage", "Upload the log to the paste service configured in preferences", nullptr));
#endif // QT_CONFIG(tooltip)
        btnPaste->setText(QCoreApplication::translate("LogPage", "Upload", nullptr));
#if QT_CONFIG(tooltip)
        btnClear->setToolTip(QCoreApplication::translate("LogPage", "Clear the log", nullptr));
#endif // QT_CONFIG(tooltip)
        btnClear->setText(QCoreApplication::translate("LogPage", "Clear", nullptr));
        findButton->setText(QCoreApplication::translate("LogPage", "Find", nullptr));
#if QT_CONFIG(tooltip)
        btnBottom->setToolTip(QCoreApplication::translate("LogPage", "Scroll all the way to bottom", nullptr));
#endif // QT_CONFIG(tooltip)
        btnBottom->setText(QCoreApplication::translate("LogPage", "Bottom", nullptr));
        searchBar->setPlaceholderText(QCoreApplication::translate("LogPage", "Search", nullptr));
        (void)LogPage;
    } // retranslateUi

};

namespace Ui {
    class LogPage: public Ui_LogPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGPAGE_H
