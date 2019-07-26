/********************************************************************************
** Form generated from reading UI file 'sounddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SOUNDDIALOG_H
#define UI_SOUNDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_SoundDialog
{
public:
    QLabel *label;

    void setupUi(QDialog *SoundDialog)
    {
        if (SoundDialog->objectName().isEmpty())
            SoundDialog->setObjectName(QStringLiteral("SoundDialog"));
        SoundDialog->resize(955, 482);
        label = new QLabel(SoundDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(2, 4, 955, 480));

        retranslateUi(SoundDialog);

        QMetaObject::connectSlotsByName(SoundDialog);
    } // setupUi

    void retranslateUi(QDialog *SoundDialog)
    {
        SoundDialog->setWindowTitle(QApplication::translate("SoundDialog", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("SoundDialog", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SoundDialog: public Ui_SoundDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SOUNDDIALOG_H
