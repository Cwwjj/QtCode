#include "tengxun.h"
#include "ui_tengxun.h"

TengXun::TengXun(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TengXun)
{
    ui->setupUi(this);
    //设置居中显示
    ui->label->setAlignment(Qt::AlignCenter);
}

TengXun::~TengXun()
{
    delete ui;
}
