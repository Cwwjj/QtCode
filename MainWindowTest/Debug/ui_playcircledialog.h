/********************************************************************************
** Form generated from reading UI file 'playcircledialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAYCIRCLEDIALOG_H
#define UI_PLAYCIRCLEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_PlayCircleDialog
{
public:
    QLabel *label;
    QGroupBox *groupBox;
    QGroupBox *groupBox_2;

    void setupUi(QDialog *PlayCircleDialog)
    {
        if (PlayCircleDialog->objectName().isEmpty())
            PlayCircleDialog->setObjectName(QStringLiteral("PlayCircleDialog"));
        PlayCircleDialog->resize(955, 482);
        label = new QLabel(PlayCircleDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 640, 480));
        groupBox = new QGroupBox(PlayCircleDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(645, 0, 305, 211));
        groupBox_2 = new QGroupBox(PlayCircleDialog);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(645, 230, 305, 251));

        retranslateUi(PlayCircleDialog);

        QMetaObject::connectSlotsByName(PlayCircleDialog);
    } // setupUi

    void retranslateUi(QDialog *PlayCircleDialog)
    {
        PlayCircleDialog->setWindowTitle(QApplication::translate("PlayCircleDialog", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("PlayCircleDialog", "TextLabel", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("PlayCircleDialog", "\351\241\271\347\233\256\344\277\241\346\201\257", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("PlayCircleDialog", "\345\256\236\351\252\214\344\277\241\346\201\257", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PlayCircleDialog: public Ui_PlayCircleDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAYCIRCLEDIALOG_H
