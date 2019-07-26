#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QPushButton>
#include <QLineEdit>
#include <QLabel>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void setVBoxLayout();
    void setHBoxLayout();
    void setGridLayout();
    void setGridLayout2();
    void setFormLayout();
    void setStackedLayout();
    void useDemo();
private:
    Ui::MainWindow *ui;
    QPushButton button1,button2,button3,button4;
    QLineEdit edit1,edit2,edit3,edit4;
    QLabel *label1,*label2,*label3,*label4;
};

#endif // MAINWINDOW_H
