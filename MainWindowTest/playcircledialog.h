#ifndef PLAYCIRCLEDIALOG_H
#define PLAYCIRCLEDIALOG_H

#include <QDialog>

namespace Ui {
class PlayCircleDialog;
}

class PlayCircleDialog : public QDialog
{
    Q_OBJECT

public:
    explicit PlayCircleDialog(QWidget *parent = 0);
    ~PlayCircleDialog();

private:
    Ui::PlayCircleDialog *ui;
};

#endif // PLAYCIRCLEDIALOG_H
