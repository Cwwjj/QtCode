/*******************************************************
* @brief        QLabel显示图像
* @author       xiaolei
* @copyright    -
* @version      V1.0
* @data         2019-11-13
* @note         1、QPixmap加载图像
* @note         2、显示在QLabel，需要设置自适应标签大小
* @note         3、根据双击鼠标左键/右键选择图片
*******************************************************/
#include "mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setWindowTitle(tr("通过标签显示图像"));
    this->resize(640,480);
    centralWidget=new QWidget(this);
    this->setCentralWidget(centralWidget);

    label=new QLabel(centralWidget);
    label->setGeometry(0,0,640,480);
    label->setScaledContents(true); //扩展自适应标签
    pixmap.load(":/images/1.jpg");
    showImage();
}

MainWindow::~MainWindow()
{

}

//根据双击鼠标左键/右键选择图片
void MainWindow::showImage()
{
    switch(count%5)
    {
    case 0:
        pixmap1.load(":/images/308680.jpg");
        pixmap.swap(pixmap1);
        break;
    case 1:
        pixmap2.load(":/images/316491.jpg");
        pixmap.swap(pixmap2);
        break;
    case 2:
        pixmap3.load(":/images/318041.jpg");
        pixmap.swap(pixmap3);
        break;
    case 3:
        pixmap4.load(":/images/319870.jpg");
        pixmap.swap(pixmap4);
        break;
    case 4:
        pixmap5.load(":/images/323195.jpg");
        pixmap.swap(pixmap5);
        break;
    default:
        break;
    }
    pixmap.scaled(QSize(label->width(),label->height()),Qt::KeepAspectRatioByExpanding);
    label->setPixmap(pixmap);
    label->show();
}

//双击鼠标左键/右键切换图片
void MainWindow::mouseDoubleClickEvent(QMouseEvent *e)
{
    count++;
    qDebug()<<"双击";
    showImage();
}

