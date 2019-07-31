/********************************************************************************
** Form generated from reading UI file 'tengxun.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TENGXUN_H
#define UI_TENGXUN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_tengxun
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *tengxun)
    {
        if (tengxun->objectName().isEmpty())
            tengxun->setObjectName(QStringLiteral("tengxun"));
        tengxun->resize(500, 750);
        gridLayout = new QGridLayout(tengxun);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(tengxun);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 182, 79);\n"
"font: 36pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(tengxun);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);


        retranslateUi(tengxun);

        QMetaObject::connectSlotsByName(tengxun);
    } // setupUi

    void retranslateUi(QDialog *tengxun)
    {
        tengxun->setWindowTitle(QApplication::translate("tengxun", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("tengxun", "\350\205\276\350\256\257\350\247\206\351\242\221", Q_NULLPTR));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class TengXun: public Ui_tengxun {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TENGXUN_H
