#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    timer=new QTimer(this);
    frameCount=0;

    ui->pushButton->setEnabled(true);
    ui->pushButton_5->setEnabled(false);

    connect(timer,SIGNAL(timeout()),this,SLOT(readFrame()));
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(openCameraClicked()));//打开摄像头
    connect(ui->pushButton_5, SIGNAL(clicked()), this, SLOT(closeCameraClicked()));//暂停
    connect(ui->pushButton_7,SIGNAL(clicked(bool)),this,SLOT(openLocalVideo()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

/**
 @ brief:打开本地视频
 @ param:[in]
 @ param:[out]
 @ return:
 @ author:xiaolei
 @ data:2019-07-27
 @ note:
 */
void MainWindow::readFrame()
{
    double startTime=static_cast<double>(cv::getTickCount());
    //获取图像帧
    capture>>frame;
    frameCount++;
    statusBar()->showMessage(tr("帧数:")+QString::number(frameCount));//状态栏显示帧数
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
    ui->label->setAlignment(Qt::AlignCenter);

    double endTime=((double)cv::getTickCount()-startTime)/cv::getTickFrequency();
    playTime=((double)cv::getTickCount()-openTime)/cv::getTickFrequency();
    ui->label_2->setText(convertTimeFormat(playTime));
    ui->horizontalSlider->setValue(int(playTime)); //设置滑动条初始值
}

/**
 @ brief:打开摄像头
 @ param:[in]
 @ param:[out]
 @ return:
 @ author:xiaolei
 @ data:2019-07-27
 @ note:
 */
void MainWindow::openCameraClicked()
{
    ui->pushButton->setEnabled(false);
    ui->pushButton_7->setEnabled(false);
    ui->pushButton_5->setEnabled(true);
    capture.open(0);//打开摄像头
    timer->start(25);//开启定时器，一次25ms
}

/**
 @ brief:暂停
 @ param:[in]
 @ param:[out]
 @ return:
 @ author:xiaolei
 @ data:2019-07-27
 @ note:
 */
void MainWindow::closeCameraClicked()
{
    ui->pushButton->setEnabled(true);
    ui->pushButton_5->setEnabled(false);
    ui->pushButton_7->setEnabled(true);
    timer->stop();//关闭定时器
    capture.release();//释放图像
}

/**
 @ brief:打开本地视频
 @ param:[in]
 @ param:[out]
 @ return:
 @ author:xiaolei
 @ data:2019-07-27
 @ note:
 */
void MainWindow::openLocalVideo()
{
    ui->pushButton_7->setEnabled(false);
    ui->pushButton_5->setEnabled(true);
    ui->pushButton->setEnabled(false);
    //获取视频文件名
    fileName = QFileDialog::getOpenFileName(this,tr("open video"), "", tr("Video Files (*.avi *.mp4)"));
    //打开视频
    capture.open(fileName.toLocal8Bit().toStdString());

    //获取和显示视频信息
    double frameNum=capture.get(CV_CAP_PROP_FRAME_COUNT);
    totalFrameLabel=new QLabel;
    totalFrameLabel->setFixedWidth(150);
    totalFrameLabel->setAlignment(Qt::AlignCenter);
    totalFrameLabel->setText(tr("总帧数:")+QString::number(int(frameNum)));
    statusBar()->addPermanentWidget(totalFrameLabel);


    double fps=capture.get(CV_CAP_PROP_FPS);
    fpsLabel=new QLabel;
    fpsLabel->setFixedWidth(150);
    fpsLabel->setAlignment(Qt::AlignCenter);
    fpsLabel->setText(tr("FPS:")+QString::number(int(fps)));
    statusBar()->addPermanentWidget(fpsLabel);


    double time=frameNum/fps;
    ui->label_3->setText(convertTimeFormat(time));

    ui->horizontalSlider->setMinimum(0);//设置滑动条的最小值
    ui->horizontalSlider->setMaximum(int(time));//设置滑动条的最大值
    ui->horizontalSlider->setValue(0); //设置滑动条初始值
    ui->horizontalSlider->setSingleStep(1);//设置步长

    timer->start(int(1000/fps));//开启定时器，一次25ms
    openTime=static_cast<double>(cv::getTickCount());
}

/**
 @ brief:播放本地视频
 @ param:[in]
 @ param:[out]
 @ return:
 @ author:xiaolei
 @ data:2019-07-27
 @ note:
 */
void MainWindow::playLocalVideo()
{

}

/**
 @ brief:录制视频
 @ param:[in]
 @ param:[out]
 @ return:
 @ author:xiaolei
 @ data:2019-07-27
 @ note:
 */
void MainWindow::recordVideo()
{

}

/**
 @ brief:时间格式转换
 @ param:[in]
 @ param:[out]
 @ return:
 @ author:xiaolei
 @ data:2019-07-27
 @ note:
 */
QString MainWindow::convertTimeFormat(double time)
{
    int hour = 0, hour1 = 0, hour2 = 0, minute = 0, minute1 = 0, minute2 = 0,second = 0,second1 = 0,second2 = 0;
    hour = (int)(time / 3600);
    hour1 = (int)(hour / 10);
    hour2 = (int)(hour % 10);
    minute = (int)((int)time % 3600 / 60);
    minute1 = (int)(minute / 10);
    minute2 = (int)(minute % 10);
    second = (int)time % 3600 % 60;
    second1 = (int)(second/10);
    second2 = (int)(second%10);

    QString str=tr("");
    str=QString::number(hour1)+QString::number(hour2)+tr(":")
            +QString::number(minute1)+QString::number(minute2)+tr(":")
            +QString::number(second1)+QString::number(second2);
    return str;
}


