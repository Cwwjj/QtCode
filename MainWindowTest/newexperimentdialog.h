#ifndef NEWEXPERIMENTDIALOG_H
#define NEWEXPERIMENTDIALOG_H

#include <QDialog>

namespace Ui {
class NewExperimentDialog;
}

class NewExperimentDialog : public QDialog
{
    Q_OBJECT

public:
    explicit NewExperimentDialog(QWidget *parent = 0);
    ~NewExperimentDialog();

private:
    Ui::NewExperimentDialog *ui;
};

#endif // NEWEXPERIMENTDIALOG_H
