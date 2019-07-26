#include "newprojectdialog.h"
#include "ui_newprojectdialog.h"

NewProjectDialog::NewProjectDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NewProjectDialog)
{
    ui->setupUi(this);
    setWindowTitle(tr("新建课题"));
}

NewProjectDialog::~NewProjectDialog()
{
    delete ui;
}
