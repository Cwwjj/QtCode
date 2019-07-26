#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.resize(800,550);//修改窗口尺寸
    w.show();

    return a.exec();
}
