/********************************************************************************
** Form generated from reading UI file 'newexperimentdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWEXPERIMENTDIALOG_H
#define UI_NEWEXPERIMENTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_NewExperimentDialog
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLabel *label_4;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QPushButton *pushButton;

    void setupUi(QDialog *NewExperimentDialog)
    {
        if (NewExperimentDialog->objectName().isEmpty())
            NewExperimentDialog->setObjectName(QStringLiteral("NewExperimentDialog"));
        NewExperimentDialog->resize(430, 338);
        label = new QLabel(NewExperimentDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 40, 60, 12));
        label_2 = new QLabel(NewExperimentDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 70, 60, 12));
        label_3 = new QLabel(NewExperimentDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 110, 60, 12));
        lineEdit = new QLineEdit(NewExperimentDialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(110, 40, 200, 20));
        lineEdit_2 = new QLineEdit(NewExperimentDialog);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(110, 70, 200, 20));
        lineEdit_3 = new QLineEdit(NewExperimentDialog);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(110, 110, 200, 20));
        label_4 = new QLabel(NewExperimentDialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(40, 160, 60, 12));
        radioButton = new QRadioButton(NewExperimentDialog);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(120, 160, 89, 16));
        radioButton_2 = new QRadioButton(NewExperimentDialog);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(240, 160, 89, 16));
        pushButton = new QPushButton(NewExperimentDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(170, 280, 75, 23));

        retranslateUi(NewExperimentDialog);

        QMetaObject::connectSlotsByName(NewExperimentDialog);
    } // setupUi

    void retranslateUi(QDialog *NewExperimentDialog)
    {
        NewExperimentDialog->setWindowTitle(QApplication::translate("NewExperimentDialog", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("NewExperimentDialog", "\345\256\236\351\252\214\345\272\217\345\217\267\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("NewExperimentDialog", "\345\212\250\347\211\251\347\274\226\345\217\267\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("NewExperimentDialog", "\345\256\236\351\252\214\346\250\241\345\274\217\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("NewExperimentDialog", "\346\230\257\345\220\246\345\275\225\345\203\217\357\274\232", Q_NULLPTR));
        radioButton->setText(QApplication::translate("NewExperimentDialog", "\345\275\225\345\203\217", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("NewExperimentDialog", "\344\270\215\345\275\225\345\203\217", Q_NULLPTR));
        pushButton->setText(QApplication::translate("NewExperimentDialog", "\344\277\235\345\255\230", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class NewExperimentDialog: public Ui_NewExperimentDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWEXPERIMENTDIALOG_H
