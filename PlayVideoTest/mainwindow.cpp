#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("视频播放简单示例");
    timer=new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(ReadFrame()));
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(OpenCameraClicked()));//打开摄像头
    connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(CloseCameraClicked()));//打开摄像头
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::ReadFrame()
{
    //获取图像帧
    capture>>frame;
    /*
    //将抓取到的帧,转换为QImage格式,QImage::Format_RGB888使用24位RGB格式（8-8-8）存储图像
    //此时没有使用rgbSwapped()交换所有像素的红色和蓝色分量的值，底色偏蓝
    QImage image = QImage((const uchar*)frame.data,frame.cols, frame.rows,QImage::Format_RGB888);
    //将图片显示到label上
    ui->label->setPixmap(QPixmap::fromImage(image));
    */

    //将视频显示到label上
    QImage image = QImage((const uchar*)frame.data,frame.cols,frame.rows,QImage::Format_RGB888).rgbSwapped();
    ui->label->setPixmap(QPixmap::fromImage(image));
}

//打开摄像头
void MainWindow::OpenCameraClicked()
{
    capture.open(0);//打开摄像头
    timer->start(25);//开启定时器，一次25ms
}

//关闭摄像头
void MainWindow::CloseCameraClicked()
{
    timer->stop();//关闭定时器
    capture.release();//释放图像
}
