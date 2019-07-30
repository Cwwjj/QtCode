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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *insertRowBtn;
    QPushButton *deleteRowBtn;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QPushButton *insertColsBtn;
    QPushButton *deleteColsBtn;
    QPushButton *addListBtn;
    QPushButton *mergeCellBtn;
    QPushButton *insertIconBtn;
    QPushButton *clearContentBtn;
    QSpacerItem *horizontalSpacer_2;
    QTableWidget *tableWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1024, 768);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 10, 1011, 701));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setMaximumSize(QSize(50, 20));

        horizontalLayout->addWidget(lineEdit);

        insertRowBtn = new QPushButton(widget);
        insertRowBtn->setObjectName(QStringLiteral("insertRowBtn"));

        horizontalLayout->addWidget(insertRowBtn);

        deleteRowBtn = new QPushButton(widget);
        deleteRowBtn->setObjectName(QStringLiteral("deleteRowBtn"));

        horizontalLayout->addWidget(deleteRowBtn);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setMaximumSize(QSize(50, 20));

        horizontalLayout->addWidget(lineEdit_2);

        insertColsBtn = new QPushButton(widget);
        insertColsBtn->setObjectName(QStringLiteral("insertColsBtn"));

        horizontalLayout->addWidget(insertColsBtn);

        deleteColsBtn = new QPushButton(widget);
        deleteColsBtn->setObjectName(QStringLiteral("deleteColsBtn"));

        horizontalLayout->addWidget(deleteColsBtn);

        addListBtn = new QPushButton(widget);
        addListBtn->setObjectName(QStringLiteral("addListBtn"));

        horizontalLayout->addWidget(addListBtn);

        mergeCellBtn = new QPushButton(widget);
        mergeCellBtn->setObjectName(QStringLiteral("mergeCellBtn"));

        horizontalLayout->addWidget(mergeCellBtn);

        insertIconBtn = new QPushButton(widget);
        insertIconBtn->setObjectName(QStringLiteral("insertIconBtn"));

        horizontalLayout->addWidget(insertIconBtn);

        clearContentBtn = new QPushButton(widget);
        clearContentBtn->setObjectName(QStringLiteral("clearContentBtn"));

        horizontalLayout->addWidget(clearContentBtn);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        tableWidget = new QTableWidget(widget);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        verticalLayout->addWidget(tableWidget);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1024, 23));
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
        label->setText(QApplication::translate("MainWindow", "\350\241\214\357\274\232", Q_NULLPTR));
        insertRowBtn->setText(QApplication::translate("MainWindow", "\346\217\222\345\205\245", Q_NULLPTR));
        deleteRowBtn->setText(QApplication::translate("MainWindow", "\345\210\240\351\231\244", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "\345\210\227\357\274\232", Q_NULLPTR));
        insertColsBtn->setText(QApplication::translate("MainWindow", "\346\217\222\345\205\245", Q_NULLPTR));
        deleteColsBtn->setText(QApplication::translate("MainWindow", "\345\210\240\351\231\244", Q_NULLPTR));
        addListBtn->setText(QApplication::translate("MainWindow", "\346\267\273\345\212\240\344\270\213\346\213\211\345\210\227\350\241\250", Q_NULLPTR));
        mergeCellBtn->setText(QApplication::translate("MainWindow", "\345\220\210\345\271\266\345\215\225\345\205\203\346\240\274", Q_NULLPTR));
        insertIconBtn->setText(QApplication::translate("MainWindow", "\346\217\222\345\205\245\345\233\276\347\211\207", Q_NULLPTR));
        clearContentBtn->setText(QApplication::translate("MainWindow", "\346\270\205\347\251\272\345\206\205\345\256\271", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
