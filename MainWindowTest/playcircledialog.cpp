#include "playcircledialog.h"
#include "ui_playcircledialog.h"

PlayCircleDialog::PlayCircleDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PlayCircleDialog)
{
    ui->setupUi(this);
    ui->label->setText(tr("单曲循环"));
    ui->label->setStyleSheet("QLabel{background-color: rgb(255,255,255);border:1px groove gray;color: black;font: 24pt 微软雅黑;}");
    //居中对齐
    ui->label->setAlignment(Qt::AlignCenter);
}

PlayCircleDialog::~PlayCircleDialog()
{
    delete ui;
}
