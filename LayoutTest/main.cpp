#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    //窗口最大化显示
    w.showMaximized();
    w.show();

    return a.exec();
}
