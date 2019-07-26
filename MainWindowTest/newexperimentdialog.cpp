#include "newexperimentdialog.h"
#include "ui_newexperimentdialog.h"

NewExperimentDialog::NewExperimentDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NewExperimentDialog)
{
    ui->setupUi(this);
    setWindowTitle(tr("配置实验参数"));
}

NewExperimentDialog::~NewExperimentDialog()
{
    delete ui;
}
