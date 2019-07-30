#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.resize(1024,768);
    //设置窗口标题
    w.setWindowTitle(QObject::tr("Animal Information"));
    w.show();

    return a.exec();
}
