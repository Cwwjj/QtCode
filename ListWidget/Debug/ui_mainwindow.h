/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QListWidget *listWidget;
    QGroupBox *groupBox;
    QTextEdit *textEdit;
    QWidget *widget;
    QFormLayout *formLayout_2;
    QLabel *label_4;
    QLineEdit *lineEditName;
    QLabel *label_5;
    QLineEdit *lineEditRow;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnAddItem;
    QPushButton *btnInsertItem;
    QPushButton *btnDeleteItem;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnClearList;
    QPushButton *btnSort;
    QWidget *widget3;
    QFormLayout *formLayout;
    QLabel *label_3;
    QLineEdit *lineEditCount;
    QLabel *label_2;
    QLineEdit *lineEditCurrentRow;
    QLabel *label;
    QLineEdit *lineEditCurrentItem;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(663, 527);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(0, 0, 256, 461));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(270, 140, 371, 321));
        textEdit = new QTextEdit(groupBox);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(20, 220, 331, 81));
        widget = new QWidget(groupBox);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 40, 331, 48));
        formLayout_2 = new QFormLayout(widget);
        formLayout_2->setSpacing(6);
        formLayout_2->setContentsMargins(11, 11, 11, 11);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_4);

        lineEditName = new QLineEdit(widget);
        lineEditName->setObjectName(QStringLiteral("lineEditName"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, lineEditName);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_5);

        lineEditRow = new QLineEdit(widget);
        lineEditRow->setObjectName(QStringLiteral("lineEditRow"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, lineEditRow);

        widget1 = new QWidget(groupBox);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(20, 120, 331, 25));
        horizontalLayout = new QHBoxLayout(widget1);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btnAddItem = new QPushButton(widget1);
        btnAddItem->setObjectName(QStringLiteral("btnAddItem"));

        horizontalLayout->addWidget(btnAddItem);

        btnInsertItem = new QPushButton(widget1);
        btnInsertItem->setObjectName(QStringLiteral("btnInsertItem"));

        horizontalLayout->addWidget(btnInsertItem);

        btnDeleteItem = new QPushButton(widget1);
        btnDeleteItem->setObjectName(QStringLiteral("btnDeleteItem"));

        horizontalLayout->addWidget(btnDeleteItem);

        widget2 = new QWidget(groupBox);
        widget2->setObjectName(QStringLiteral("widget2"));
        widget2->setGeometry(QRect(110, 170, 158, 25));
        horizontalLayout_2 = new QHBoxLayout(widget2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        btnClearList = new QPushButton(widget2);
        btnClearList->setObjectName(QStringLiteral("btnClearList"));

        horizontalLayout_2->addWidget(btnClearList);

        btnSort = new QPushButton(widget2);
        btnSort->setObjectName(QStringLiteral("btnSort"));

        horizontalLayout_2->addWidget(btnSort);

        widget3 = new QWidget(centralWidget);
        widget3->setObjectName(QStringLiteral("widget3"));
        widget3->setGeometry(QRect(280, 20, 361, 91));
        formLayout = new QFormLayout(widget3);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget3);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_3);

        lineEditCount = new QLineEdit(widget3);
        lineEditCount->setObjectName(QStringLiteral("lineEditCount"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEditCount);

        label_2 = new QLabel(widget3);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        lineEditCurrentRow = new QLineEdit(widget3);
        lineEditCurrentRow->setObjectName(QStringLiteral("lineEditCurrentRow"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEditCurrentRow);

        label = new QLabel(widget3);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label);

        lineEditCurrentItem = new QLineEdit(widget3);
        lineEditCurrentItem->setObjectName(QStringLiteral("lineEditCurrentItem"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEditCurrentItem);

        MainWindow->setCentralWidget(centralWidget);
        groupBox->raise();
        listWidget->raise();
        lineEditCurrentItem->raise();
        label->raise();
        lineEditCurrentRow->raise();
        label_2->raise();
        label_3->raise();
        lineEditCount->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 663, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "ListWidget\346\223\215\344\275\234", Q_NULLPTR));
        textEdit->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\346\263\250\346\204\217\344\272\213\351\241\271\357\274\232</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">1\343\200\201add\345\217\252\351\234\200\350\246\201\345\241\253\345\206\231\351\241\271\347\233\256\345\220\215\347\247\260</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">2\343\200\201insert\351\234\200\350\246\201\345\220\214\346\227\266\345\241\253\345\206\231\351\241\271\347\233\256\345\220\215"
                        "\347\247\260\345\222\214\351\241\271\347\233\256\350\241\214\345\217\267</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">3\343\200\201delete\345\217\252\351\234\200\350\246\201\345\241\253\345\206\231\350\241\214\345\217\267</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">4\343\200\201\346\216\222\345\272\217\345\210\206\344\270\272\345\215\207\345\272\217\345\222\214\351\231\215\345\272\217</p></body></html>", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "\351\241\271\347\233\256\345\220\215\347\247\260\357\274\232", Q_NULLPTR));
        lineEditName->setText(QString());
        label_5->setText(QApplication::translate("MainWindow", "\351\241\271\347\233\256\350\241\214\345\217\267\357\274\232", Q_NULLPTR));
        lineEditRow->setText(QString());
        btnAddItem->setText(QApplication::translate("MainWindow", "add", Q_NULLPTR));
        btnInsertItem->setText(QApplication::translate("MainWindow", "insert", Q_NULLPTR));
        btnDeleteItem->setText(QApplication::translate("MainWindow", "delete", Q_NULLPTR));
        btnClearList->setText(QApplication::translate("MainWindow", "\344\270\200\351\224\256\346\270\205\347\251\272", Q_NULLPTR));
        btnSort->setText(QApplication::translate("MainWindow", "\344\270\200\351\224\256\346\216\222\345\272\217", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "\351\241\271\347\233\256\346\225\260\351\207\217\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "\345\275\223\345\211\215\351\241\271\347\233\256\350\241\214\345\217\267\357\274\232", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "\345\275\223\345\211\215\351\241\271\347\233\256\357\274\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
