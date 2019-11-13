#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QLabel>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void showImage();
protected:
    void mouseDoubleClickEvent(QMouseEvent *e);

private:
    QLabel *label;
    QWidget *centralWidget;
    QPixmap pixmap;
    QPixmap pixmap1;
    QPixmap pixmap2;
    QPixmap pixmap3;
    QPixmap pixmap4;
    QPixmap pixmap5;
    int count=-1;
};

#endif // MAINWINDOW_H
