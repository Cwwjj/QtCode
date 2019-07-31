#ifndef TENGXUN_H
#define TENGXUN_H

#include <QDialog>

namespace Ui {
class TengXun;
}

class TengXun : public QDialog
{
    Q_OBJECT

public:
    explicit TengXun(QWidget *parent = 0);
    ~TengXun();

private:
    Ui::TengXun *ui;
};

#endif // TENGXUN_H
