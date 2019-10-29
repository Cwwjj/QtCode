/***********************************************************************************************************************
* @brief        QScrollArea的简单使用
* @author       xiaolei
* @copyright    -
* @version      V1.0
* @data         2019-10-24
* @note         层次结构：MainWindow->centralWidget->QScrollArea->scrollAreaWidgetContents->QHBoxLayout->QLabel
* @note         scrollAreaWidgetContents的最小尺寸很重要，关乎到是否出现滑动条，一般设置与QScrollArea的尺寸一样
************************************************************************************************************************/
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLabel>
#include <QImage>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QDebug>
#include <QString>
#include <QScrollArea>
#include <QDate>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->resize(480,640);
    qDebug()<<"MainWindow geometry:"<<this->geometry();

    centralWidget = new QWidget(this);
    this->setCentralWidget(centralWidget);
    centralWidget->setGeometry(0,0,480,640);
    qDebug()<<"centralWidget size:"<<centralWidget->size();
    qDebug()<<"centralWidget geometry:"<<centralWidget->geometry();

    //showLabel();
    showButton();
}

MainWindow::~MainWindow()
{
    delete ui;
}

/*******************************************************
* @brief        图片查看器
* @param        []
* @return       void
* @author       xiaolei
* @data         2019-10-25
* @note         -
*******************************************************/
void MainWindow::showLabel()
{
    setWindowTitle("图片查看器");    //设置标题

    QScrollArea *scrollArea = new QScrollArea(centralWidget);
    scrollArea->setBackgroundRole(QPalette::Dark);
    //scrollArea->setWidgetResizable(true);   //小部件适应QScrollArea自动改变大小
    //scrollArea->setAlignment(Qt::AlignCenter);    //居中对齐
    scrollArea->setGeometry(40,70,400,400);
    qDebug()<<"scrollArea size:"<<scrollArea->size();

    QWidget *scrollAreaWidgetContents = new QWidget();
    scrollAreaWidgetContents->setMinimumSize(QSize(400, 400));  //设置最小尺寸，很重要，关系到是否出现滑动条

    QHBoxLayout *labelLayout=new QHBoxLayout(scrollAreaWidgetContents);

    QLabel *imageLabel = new QLabel(scrollAreaWidgetContents);
    imageLabel->resize(360,480);
    QLabel *imageLabel2 = new QLabel(scrollAreaWidgetContents);
    imageLabel2->resize(360,480);

    QPixmap pixmap("F:/磊神图片/1.jpg");
    pixmap.scaled(QSize(imageLabel->width(),imageLabel->height()),Qt::KeepAspectRatioByExpanding);
    imageLabel->setPixmap(pixmap);

    QPixmap pixmap2("F:/磊神图片/焰灵姬.jpg");
    pixmap2.scaled(QSize(imageLabel2->width(),imageLabel2->height()),Qt::KeepAspectRatioByExpanding);
    imageLabel2->setPixmap(pixmap2);


    labelLayout->addWidget(imageLabel);
    labelLayout->addWidget(imageLabel2);

    scrollArea->setWidget(scrollAreaWidgetContents);
}

/*******************************************************
* @brief        课程选择
* @param        []
* @return       void
* @author       xiaolei
* @data         2019-10-25
* @note         -
*******************************************************/
void MainWindow::showButton()
{
    setWindowTitle("课程选择");     //设置标题

    QScrollArea *scrollArea = new QScrollArea(centralWidget);
    scrollArea->setBackgroundRole(QPalette::Light);
    //scrollArea->setWidgetResizable(true);   //小部件适应QScrollArea自动改变大小
    scrollArea->setAlignment(Qt::AlignCenter);    //居中对齐
    scrollArea->setGeometry(40,70,400,400);
    qDebug()<<"scrollArea size:"<<scrollArea->size();

    edit=new QLineEdit(centralWidget);
    edit->setGeometry(40,480,400,50);
    edit->setAlignment(Qt::AlignCenter);    //居中对齐
    edit->setPlaceholderText("请点击按钮选择课程");
    edit->setReadOnly(true);    //只读

    QWidget *scrollAreaWidgetContents = new QWidget();
    scrollAreaWidgetContents->setMinimumSize(QSize(400, 400));  //设置最小尺寸，很重要，关系到是否出现滑动条

    QVBoxLayout *buttonLayout=new QVBoxLayout(scrollAreaWidgetContents);
    buttonLayout->setSpacing(3);

    chineseBtn=new QPushButton(scrollAreaWidgetContents);
    chineseBtn->setText("语    文");
    chineseBtn->setMinimumHeight(50);
    buttonLayout->addWidget(chineseBtn);
    qDebug()<<"chineseBtn size:"<<chineseBtn->size();
    connect(chineseBtn,&QPushButton::clicked,this,&MainWindow::chineseOnClicked);

    mathematicsBtn=new QPushButton(scrollAreaWidgetContents);
    mathematicsBtn->setText("数    学");
    mathematicsBtn->setMinimumHeight(50);
    buttonLayout->addWidget(mathematicsBtn);
    connect(mathematicsBtn,&QPushButton::clicked,this,&MainWindow::mathematicsOnClicked);

    englishBtn=new QPushButton(scrollAreaWidgetContents);
    englishBtn->setText("英    语");
    englishBtn->setMinimumHeight(50);
    buttonLayout->addWidget(englishBtn);
    connect(englishBtn,&QPushButton::clicked,this,&MainWindow::englishOnClicked);

    physicalBtn=new QPushButton(scrollAreaWidgetContents);
    physicalBtn->setText("物    理");
    physicalBtn->setMinimumHeight(50);
    buttonLayout->addWidget(physicalBtn);
    connect(physicalBtn,&QPushButton::clicked,this,&MainWindow::physicalOnClicked);

    chemicalBtn=new QPushButton(scrollAreaWidgetContents);
    chemicalBtn->setText("化    学");
    chemicalBtn->setMinimumHeight(50);
    buttonLayout->addWidget(chemicalBtn);
    connect(chemicalBtn,&QPushButton::clicked,this,&MainWindow::chemicalOnClicked);

    biologicalBtn=new QPushButton(scrollAreaWidgetContents);
    biologicalBtn->setText("生    物");
    biologicalBtn->setMinimumHeight(50);
    buttonLayout->addWidget(biologicalBtn);
    connect(biologicalBtn,&QPushButton::clicked,this,&MainWindow::biologicalOnClicked);

    politicalBtn=new QPushButton(scrollAreaWidgetContents);
    politicalBtn->setText("政    治");
    politicalBtn->setMinimumHeight(50);
    buttonLayout->addWidget(politicalBtn);
    connect(politicalBtn,&QPushButton::clicked,this,&MainWindow::politicalOnClicked);

    historyBtn=new QPushButton(scrollAreaWidgetContents);
    historyBtn->setText("历    史");
    historyBtn->setMinimumHeight(50);
    buttonLayout->addWidget(historyBtn);
    connect(historyBtn,&QPushButton::clicked,this,&MainWindow::historyOnClicked);

    geographicBtn=new QPushButton(scrollAreaWidgetContents);
    geographicBtn->setText("地    理");
    geographicBtn->setMinimumHeight(50);
    buttonLayout->addWidget(geographicBtn);
    connect(geographicBtn,&QPushButton::clicked,this,&MainWindow::geographicOnClicked);

    scrollArea->setWidget(scrollAreaWidgetContents);
}

/*******************************************************
* @brief        语文按钮槽函数
* @param        []
* @return       void
* @author       xiaolei
* @data         2019-10-25
* @note         -
*******************************************************/
void MainWindow::chineseOnClicked()
{
    QString str=chineseBtn->text();
    edit->setText(str);
}

/*******************************************************
* @brief        数学按钮槽函数
* @param        []
* @return       void
* @author       xiaolei
* @data         2019-10-25
* @note         -
*******************************************************/
void MainWindow::mathematicsOnClicked()
{
    QString str=mathematicsBtn->text();
    edit->setText(str);
}

/*******************************************************
* @brief        英语按钮槽函数
* @param        []
* @return       void
* @author       xiaolei
* @data         2019-10-25
* @note         -
*******************************************************/
void MainWindow::englishOnClicked()
{
    QString str=englishBtn->text();
    edit->setText(str);
}

/*******************************************************
* @brief        物理按钮槽函数
* @param        []
* @return       void
* @author       xiaolei
* @data         2019-10-25
* @note         -
*******************************************************/
void MainWindow::physicalOnClicked()
{
    QString str=physicalBtn->text();
    edit->setText(str);
}

/*******************************************************
* @brief        化学按钮槽函数
* @param        []
* @return       void
* @author       xiaolei
* @data         2019-10-25
* @note         -
*******************************************************/
void MainWindow::chemicalOnClicked()
{
    QString str=chemicalBtn->text();
    edit->setText(str);
}

/*******************************************************
* @brief        生物按钮槽函数
* @param        []
* @return       void
* @author       xiaolei
* @data         2019-10-25
* @note         -
*******************************************************/
void MainWindow::biologicalOnClicked()
{
    QString str=biologicalBtn->text();
    edit->setText(str);
}

/*******************************************************
* @brief        政治按钮槽函数
* @param        []
* @return       void
* @author       xiaolei
* @data         2019-10-25
* @note         -
*******************************************************/
void MainWindow::politicalOnClicked()
{
    QString str=politicalBtn->text();
    edit->setText(str);
}

/*******************************************************
* @brief        历史按钮槽函数
* @param        []
* @return       void
* @author       xiaolei
* @data         2019-10-25
* @note         -
*******************************************************/
void MainWindow::historyOnClicked()
{
    QString str=historyBtn->text();
    edit->setText(str);
}

/*******************************************************
* @brief        地理按钮槽函数
* @param        []
* @return       void
* @author       xiaolei
* @data         2019-10-25
* @note         -
*******************************************************/
void MainWindow::geographicOnClicked()
{
    QString str=geographicBtn->text();
    edit->setText(str);
}
