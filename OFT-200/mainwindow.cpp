#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QGridLayout>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

/**
 @ brief:设置布局
 @ param:[in]
 @ param:[out]
 @ return:
 @ author:xiaolei
 @ data:2019-07-26
 @ note:
 */
void MainWindow::setLayoutOFT()
{
    //设置中央区域
    centralWidget = new QWidget();
    this->setCentralWidget(centralWidget);

    QVBoxLayout *vbLayout1=new QVBoxLayout;
    QVBoxLayout *vbLayout2=new QVBoxLayout;
    QHBoxLayout *hbLayout1=new QHBoxLayout;
    QHBoxLayout *hbLayout2=new QHBoxLayout;
    QGridLayout *layoutG=new QGridLayout;

    cameraGb=new QGroupBox(tr("摄像头"));
    videoGb=new QGroupBox(tr("本地视频"));

    openCameraBtn=new QPushButton(tr("打开摄像头"));
    openVideoBtn=new QPushButton(tr("打开本地视频"));
    playBtn=new QPushButton(tr("播放"));
    pauseBtn=new QPushButton(tr("暂停"));
    recordBtn=new QPushButton(tr("录制"));


    startLabel=new QLabel(tr("00:00"));
    endLabel=new QLabel(tr("00:00"));

    progressSlider=new QSlider;

    //时间和滑动条
    hbLayout1->addWidget(startLabel);
    hbLayout1->addWidget(progressSlider);
    hbLayout1->addWidget(endLabel);
    hbLayout1->setSpacing(20);

    vbLayout1->addWidget(openCameraBtn);
    vbLayout1->addWidget(recordBtn);

    vbLayout2->addWidget(openVideoBtn);
    vbLayout2->addWidget(playBtn);

    hbLayout2->addLayout(vbLayout1);
    hbLayout2->addWidget(pauseBtn);
    hbLayout2->addLayout(vbLayout2);

    centralWidget->setLayout(hbLayout2);
}
