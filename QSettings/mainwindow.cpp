#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle(tr("配置文件"));
    writeConfig();
    readConfig();
}

MainWindow::~MainWindow()
{
    delete ui;
}

/**
 @ brief:写入配置文件
 @ param:[in]
 @ param:[out]
 @ return:
 @ author:xiaolei
 @ data:2019-07-26
 @ note:
 */
void MainWindow::writeConfig()
{
    //创建配置文件
    iniFile = new QSettings("sysConfig.ini", QSettings::IniFormat);
    //组开始
    iniFile->beginGroup(tr("Tom"));
    //设置键值对
    iniFile->setValue(tr("age"), tr("23"));
    iniFile->setValue(tr("gender"), tr("male"));
    iniFile->setValue(tr("id"), tr("00001"));
    //获取当前组
    QString group=iniFile->group();
    qDebug().noquote()<<"group:"<<group;
    //组结束
    iniFile->endGroup();

    iniFile->beginGroup(tr("Helen"));
    iniFile->setValue(tr("age"), tr("20"));
    iniFile->setValue(tr("gender"), tr("female"));
    iniFile->setValue(tr("id"), tr("00002"));
    iniFile->endGroup();
}

/**
 @ brief:读取配置文件
 @ param:[in]
 @ param:[out]
 @ return:
 @ author:xiaolei
 @ data:2019-07-26
 @ note:
 */
void MainWindow::readConfig()
{
    //获取配置文件名
    QString fileName=iniFile->fileName();
    qDebug().noquote()<<"fileName:"<<fileName;

    //判断键是否存在
    bool key=iniFile->contains("Helen/age");
    qDebug().noquote()<<"Helen/age is "<<key;

    iniFile->remove("Helen/age");

    //读取键值对
    int age = iniFile->value("Tom/age").toInt();
    QString gender = iniFile->value("Tom/gender").toString();
    QString id = iniFile->value("Tom/id").toString();
    qDebug()<<age<<gender<<id;

}

/**
 @ brief:读取配置文件
 @ param:[in]
 @ param:[out]
 @ return:
 @ author:xiaolei
 @ data:2019-07-26
 @ note:
 */
void MainWindow::clearConfig()
{
    iniFile->clear();
}


