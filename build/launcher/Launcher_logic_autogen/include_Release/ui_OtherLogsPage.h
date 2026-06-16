/********************************************************************************
** Form generated from reading UI file 'OtherLogsPage.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OTHERLOGSPAGE_H
#define UI_OTHERLOGSPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "ui/widgets/LogView.h"

QT_BEGIN_NAMESPACE

class Ui_OtherLogsPage
{
public:
    QGridLayout *gridLayout_2;
    QPushButton *findButton;
    QFrame *line;
    QPushButton *btnBottom;
    LogView *text;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QComboBox *selectLogBox;
    QPushButton *btnDelete;
    QPushButton *btnClean;
    QHBoxLayout *horizontalLayout1;
    QCheckBox *trackLogCheckbox;
    QCheckBox *wrapCheckbox;
    QCheckBox *colorCheckbox;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnCopy;
    QPushButton *btnPaste;
    QPushButton *btnReload;
    QLineEdit *searchBar;

    void setupUi(QWidget *OtherLogsPage)
    {
        if (OtherLogsPage->objectName().isEmpty())
            OtherLogsPage->setObjectName("OtherLogsPage");
        OtherLogsPage->resize(657, 538);
        gridLayout_2 = new QGridLayout(OtherLogsPage);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 6, 0);
        findButton = new QPushButton(OtherLogsPage);
        findButton->setObjectName("findButton");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(findButton->sizePolicy().hasHeightForWidth());
        findButton->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(findButton, 2, 2, 1, 1);

        line = new QFrame(OtherLogsPage);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::VLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_2->addWidget(line, 2, 3, 1, 1);

        btnBottom = new QPushButton(OtherLogsPage);
        btnBottom->setObjectName("btnBottom");
        sizePolicy.setHeightForWidth(btnBottom->sizePolicy().hasHeightForWidth());
        btnBottom->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(btnBottom, 2, 4, 1, 1);

        text = new LogView(OtherLogsPage);
        text->setObjectName("text");
        text->setEnabled(false);
        text->setUndoRedoEnabled(false);
        text->setReadOnly(true);
        text->setPlainText(QString::fromUtf8(""));
        text->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse|Qt::TextBrowserInteraction|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        text->setCenterOnScroll(false);

        gridLayout_2->addWidget(text, 1, 0, 1, 5);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        selectLogBox = new QComboBox(OtherLogsPage);
        selectLogBox->setObjectName("selectLogBox");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(selectLogBox->sizePolicy().hasHeightForWidth());
        selectLogBox->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(selectLogBox);

        btnDelete = new QPushButton(OtherLogsPage);
        btnDelete->setObjectName("btnDelete");

        horizontalLayout->addWidget(btnDelete);

        btnClean = new QPushButton(OtherLogsPage);
        btnClean->setObjectName("btnClean");

        horizontalLayout->addWidget(btnClean);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 5);

        horizontalLayout1 = new QHBoxLayout();
        horizontalLayout1->setObjectName("horizontalLayout1");
        trackLogCheckbox = new QCheckBox(OtherLogsPage);
        trackLogCheckbox->setObjectName("trackLogCheckbox");
        trackLogCheckbox->setChecked(true);

        horizontalLayout1->addWidget(trackLogCheckbox);

        wrapCheckbox = new QCheckBox(OtherLogsPage);
        wrapCheckbox->setObjectName("wrapCheckbox");
        wrapCheckbox->setChecked(true);

        horizontalLayout1->addWidget(wrapCheckbox);

        colorCheckbox = new QCheckBox(OtherLogsPage);
        colorCheckbox->setObjectName("colorCheckbox");
        colorCheckbox->setChecked(true);

        horizontalLayout1->addWidget(colorCheckbox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout1->addItem(horizontalSpacer);

        btnCopy = new QPushButton(OtherLogsPage);
        btnCopy->setObjectName("btnCopy");

        horizontalLayout1->addWidget(btnCopy);

        btnPaste = new QPushButton(OtherLogsPage);
        btnPaste->setObjectName("btnPaste");

        horizontalLayout1->addWidget(btnPaste);

        btnReload = new QPushButton(OtherLogsPage);
        btnReload->setObjectName("btnReload");

        horizontalLayout1->addWidget(btnReload);


        gridLayout->addLayout(horizontalLayout1, 1, 0, 1, 5);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 5);

        searchBar = new QLineEdit(OtherLogsPage);
        searchBar->setObjectName("searchBar");

        gridLayout_2->addWidget(searchBar, 2, 0, 1, 2);

        QWidget::setTabOrder(selectLogBox, btnReload);
        QWidget::setTabOrder(btnReload, btnCopy);
        QWidget::setTabOrder(btnCopy, btnPaste);
        QWidget::setTabOrder(btnPaste, btnDelete);
        QWidget::setTabOrder(btnDelete, btnClean);
        QWidget::setTabOrder(btnClean, wrapCheckbox);
        QWidget::setTabOrder(wrapCheckbox, colorCheckbox);
        QWidget::setTabOrder(colorCheckbox, text);
        QWidget::setTabOrder(text, searchBar);
        QWidget::setTabOrder(searchBar, findButton);

        retranslateUi(OtherLogsPage);

        QMetaObject::connectSlotsByName(OtherLogsPage);
    } // setupUi

    void retranslateUi(QWidget *OtherLogsPage)
    {
        findButton->setText(QCoreApplication::translate("OtherLogsPage", "&Find", nullptr));
#if QT_CONFIG(tooltip)
        btnBottom->setToolTip(QCoreApplication::translate("OtherLogsPage", "Scroll all the way to bottom", nullptr));
#endif // QT_CONFIG(tooltip)
        btnBottom->setText(QCoreApplication::translate("OtherLogsPage", "&Bottom", nullptr));
#if QT_CONFIG(tooltip)
        btnDelete->setToolTip(QCoreApplication::translate("OtherLogsPage", "Delete the selected log", nullptr));
#endif // QT_CONFIG(tooltip)
        btnDelete->setText(QCoreApplication::translate("OtherLogsPage", "&Delete Selected", nullptr));
#if QT_CONFIG(tooltip)
        btnClean->setToolTip(QCoreApplication::translate("OtherLogsPage", "Delete all the logs", nullptr));
#endif // QT_CONFIG(tooltip)
        btnClean->setText(QCoreApplication::translate("OtherLogsPage", "Delete &All", nullptr));
        trackLogCheckbox->setText(QCoreApplication::translate("OtherLogsPage", "Keep updating", nullptr));
        wrapCheckbox->setText(QCoreApplication::translate("OtherLogsPage", "Wrap lines", nullptr));
        colorCheckbox->setText(QCoreApplication::translate("OtherLogsPage", "Color lines", nullptr));
#if QT_CONFIG(tooltip)
        btnCopy->setToolTip(QCoreApplication::translate("OtherLogsPage", "Copy the whole log into the clipboard", nullptr));
#endif // QT_CONFIG(tooltip)
        btnCopy->setText(QCoreApplication::translate("OtherLogsPage", "&Copy", nullptr));
#if QT_CONFIG(tooltip)
        btnPaste->setToolTip(QCoreApplication::translate("OtherLogsPage", "Upload the log to the paste service configured in preferences", nullptr));
#endif // QT_CONFIG(tooltip)
        btnPaste->setText(QCoreApplication::translate("OtherLogsPage", "&Upload", nullptr));
#if QT_CONFIG(tooltip)
        btnReload->setToolTip(QCoreApplication::translate("OtherLogsPage", "Reload the contents of the log from the disk", nullptr));
#endif // QT_CONFIG(tooltip)
        btnReload->setText(QCoreApplication::translate("OtherLogsPage", "&Reload", nullptr));
        searchBar->setPlaceholderText(QCoreApplication::translate("OtherLogsPage", "Search", nullptr));
        (void)OtherLogsPage;
    } // retranslateUi

};

namespace Ui {
    class OtherLogsPage: public Ui_OtherLogsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OTHERLOGSPAGE_H
