#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    w.setWindowTitle(QObject::tr("OFT-200视频分析实验系统"));

    //设置窗口的最小尺寸
    w.setMinimumSize(1024,768);
    //窗口最大化显示
    w.showMaximized();

    w.show();

    return a.exec();
}
