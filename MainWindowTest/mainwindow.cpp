#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QVBoxLayout"
#include <QDebug>
#include "newprojectdialog.h"
#include "newexperimentdialog.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setObjectName(tr("MainWindow"));
    setWindowTitle(tr("TMV行为学分析软件2.0"));
    //this->showFullScreen();
    //this->showNormal();
    setMinimumSize(1024,768);
    //setMaximumSize(1920,1080);
    //ui->centralWidget->setStyleSheet("QWidget{background-color: rgba(50,50,50,0.8);}");
    //隐藏主工具栏
    ui->mainToolBar->hide();
    ui->menuBar->setStyleSheet("QMenuBar{background-color: rgba(50,50,50,0.8);border:1px groove gray;color: white;font: 12pt 微软雅黑;}");
    //窗口左上角的位置(含边框)
    qDebug() << this->frameGeometry().x() << this->frameGeometry().y();//1
    qDebug() << this->x()  << this->y();//2
    qDebug() << this->pos().x() << this->pos().y();//3
    //窗口的宽度和高度(含边框)
    qDebug() << this->frameGeometry().width() << this->frameGeometry().height();
    //窗口左上角的位置(不含边框)
    qDebug() << this->geometry().x() << this->geometry().y();
    //窗口的宽度和高度(不含边框)
    qDebug() << this->geometry().width() << this->geometry().height();//1
    qDebug() << this->width() << this->height();//2
    qDebug() << this->rect().width() << this->rect().height();//3
    qDebug() << this->size().width() << this->size().height();//4
    AddMenu();
    AddToolBar();
    AddStackedWidget();
}

MainWindow::~MainWindow()
{
    delete ui;
}

//添加菜单
void MainWindow::AddMenu()
{
    //菜单栏添加菜单选项
    QMenu *fileMenu = menuBar()->addMenu(tr("&课题管理"));
    QMenu *editMenu = menuBar()->addMenu(tr("&实验控制"));
    QMenu *toolMenu = menuBar()->addMenu(tr("&数据管理"));
    QMenu *styleMenu = menuBar()->addMenu(tr("&样式"));
    QMenu *helpMenu = menuBar()->addMenu(tr("&帮助"));

    QAction *newFile=new QAction(tr("新建课题"),this);
    fileMenu->addAction(newFile);
    newFile->setShortcuts(QKeySequence::New);
    newFile->setStatusTip(tr("新建课题"));
    connect(newFile,&QAction::triggered,this,&MainWindow::NewProject);

    QAction *openFile=new QAction(tr("打开课题"),this);
    fileMenu->addAction(openFile);
    openFile->setShortcuts(QKeySequence::Open);
    openFile->setStatusTip(tr("打开文件"));

    QAction *closeFile=new QAction(tr("关闭课题"),this);
    fileMenu->addAction(closeFile);
    closeFile->setShortcuts(QKeySequence::Close);
    closeFile->setStatusTip(tr("关闭文件"));

    QAction *cutText=new QAction(tr("新建实验"),this);
    editMenu->addAction(cutText);
    cutText->setShortcuts(QKeySequence::Cut);
    cutText->setStatusTip(tr("剪切"));
    connect(cutText,&QAction::triggered,this,&MainWindow::NewExperiment);

    QAction *copyText=new QAction(tr("复制"),this);
    editMenu->addAction(copyText);
    copyText->setShortcuts(QKeySequence::Copy);
    copyText->setStatusTip(tr("复制"));

    QAction *pasteText=new QAction(tr("粘贴"),this);
    editMenu->addAction(pasteText);
    pasteText->setShortcuts(QKeySequence::Paste);
    pasteText->setStatusTip(tr("粘贴"));

    QAction *deleteText=new QAction(tr("删除"),this);
    editMenu->addAction(deleteText);
    deleteText->setShortcuts(QKeySequence::Delete);
    deleteText->setStatusTip(tr("删除"));

    toolMenu->addAction(tr("查看录像"));
    toolMenu->addAction(tr("数据导出"));
    toolMenu->addAction(tr("Java"));
    toolMenu->addAction(tr("C#"));

    styleMenu->addAction(tr("默认"));
    styleMenu->addAction(tr("暗黑系列"));
    styleMenu->addAction(tr("亮白系列"));
    styleMenu->addAction(tr("骚粉系列"));

    helpMenu->addAction(tr("使用说明"));
    helpMenu->addAction(tr("访问官网"));
    helpMenu->addAction(tr("用户反馈"));
}

//添加工具栏
void MainWindow::AddToolBar()
{
    QToolBar *controlToolBar=new QToolBar();
    addToolBar(Qt::LeftToolBarArea,controlToolBar);
    controlToolBar->setStyleSheet("QToolBar{background-color: rgba(50,50,50,0.6);border:1px groove gray;font: 9pt 微软雅黑;}");
    controlToolBar->setIconSize(QSize(35,35));
    controlToolBar->setMovable(false);
    //设置图标下显示文本
    controlToolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    controlToolBar->setAllowedAreas(Qt::RightToolBarArea|Qt::LeftToolBarArea);


    //新增QAction
    QAction* playcircleToolBar = new QAction(tr("打开摄像头"),this);
    //给QAction加icon图标
    playcircleToolBar->setIcon(QIcon(tr(":/images/play-circle.png")));
    playcircleToolBar->setToolTip(tr("打开摄像头"));
    playcircleToolBar->setIconText(tr("打开摄像头"));
    //playcircleToolBar->setText(tr("课题管理"));
    //设置分隔符
    //playcircleToolBar->setSeparator(true);
    //把QAction和工具栏关联
    controlToolBar->addAction(playcircleToolBar);
    connect(playcircleToolBar,&QAction::triggered,this,&MainWindow::PlayCircle);

    //新增QAction
    QAction* soundToolBar = new QAction(tr("关闭摄像头"),this);
    //给QAction加icon图标
    soundToolBar->setIcon(QIcon(tr(":/images/sound.png")));
    //把QAction和工具栏关联
    controlToolBar->addAction(soundToolBar);

    //新增QAction
    QAction* shareToolBar = new QAction(tr("曝光度+"),this);
    //给QAction加icon图标
    shareToolBar->setIcon(QIcon(tr(":/images/share.png")));
    //把QAction和工具栏关联
    controlToolBar->addAction(shareToolBar);

    QAction* starToolBar = new QAction(tr("曝光度-"),this);
    //给QAction加icon图标
    starToolBar->setIcon(QIcon(tr(":/images/star.png")));
    //把QAction和工具栏关联
    controlToolBar->addAction(starToolBar);
    //添加分隔符
    controlToolBar->addSeparator();


    QToolBar *experimentControlToolBar=new QToolBar();
    addToolBar(Qt::LeftToolBarArea,experimentControlToolBar);
    experimentControlToolBar->setStyleSheet("QToolBar{background-color: rgba(50,50,50,0.6);border:1px groove gray;font: 9pt 微软雅黑;}");
    experimentControlToolBar->setIconSize(QSize(35,35));
    experimentControlToolBar->setMovable(false);
    //设置图标下显示文本
    experimentControlToolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    experimentControlToolBar->setAllowedAreas(Qt::RightToolBarArea|Qt::LeftToolBarArea);

    //新增QAction
    QAction* setareaTool = new QAction(tr("区域设定"),this);
    //给QAction加icon图标
    setareaTool->setIcon(QIcon(tr(":/images/play-circle.png")));
    setareaTool->setToolTip(tr("区域设定"));
    setareaTool->setIconText(tr("区域设定"));
    //playcircleToolBar->setText(tr("课题管理"));
    //设置分隔符
    //playcircleToolBar->setSeparator(true);
    //把QAction和工具栏关联
    experimentControlToolBar->addAction(setareaTool);
    //connect(playcircleToolBar,&QAction::triggered,this,&MainWindow::PlayCircle);

    //新增QAction
    QAction* scalingTool = new QAction(tr("定标"),this);
    //给QAction加icon图标
    scalingTool->setIcon(QIcon(tr(":/images/sound.png")));
    //把QAction和工具栏关联
    experimentControlToolBar->addAction(scalingTool);
    //添加分隔符
    experimentControlToolBar->addSeparator();


    QToolBar *otherToolBar=new QToolBar();
    addToolBar(Qt::LeftToolBarArea,otherToolBar);
    otherToolBar->setStyleSheet("QToolBar{background-color: rgba(50,50,50,0.6);border:1px groove gray;font: 9pt 微软雅黑;}");
    otherToolBar->setIconSize(QSize(35,35));
    otherToolBar->setMovable(false);
    //设置图标下显示文本
    otherToolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    otherToolBar->setAllowedAreas(Qt::RightToolBarArea|Qt::LeftToolBarArea);

    //新增QAction
    QAction* startTool = new QAction(tr("开始实验"),this);
    //给QAction加icon图标
    startTool->setIcon(QIcon(tr(":/images/play-circle.png")));
    startTool->setToolTip(tr("开始实验"));
    startTool->setIconText(tr("开始实验"));
    //playcircleToolBar->setText(tr("课题管理"));
    //设置分隔符
    //playcircleToolBar->setSeparator(true);
    //把QAction和工具栏关联
    experimentControlToolBar->addAction(startTool);
    //connect(playcircleToolBar,&QAction::triggered,this,&MainWindow::PlayCircle);

    //新增QAction
    QAction* stopTool = new QAction(tr("停止实验"),this);
    //给QAction加icon图标
    stopTool->setIcon(QIcon(tr(":/images/sound.png")));
    //把QAction和工具栏关联
    experimentControlToolBar->addAction(stopTool);
}

//新建项目
void MainWindow::NewProject()
{
    NewProjectDialog *newprojectDlg = new NewProjectDialog(this);
    newprojectDlg->show();
    if(newprojectDlg->exec()==QDialog::Accepted)
    {
        ;
    }
}

//新建实验
void MainWindow::NewExperiment()
{
    NewExperimentDialog *newexperimentDlg = new NewExperimentDialog(this);
    newexperimentDlg->show();
    if(newexperimentDlg->exec()==QDialog::Accepted)
    {
        ;
    }
}

//添加菜单
void MainWindow::AddStackedWidget()
{
    //添加页面
    ui->stackedWidget->addWidget(&playcircleWidget);
    //ui->stackedWidget->addWidget(&soundWidget);

    //显示页面作为主页
    //ui->stackedWidget->setCurrentWidget(&playcircleWidget);
    //获取当前页面的序号
    firstIndex=ui->stackedWidget->currentIndex();
    ui->stackedWidget->setCurrentIndex(2);
    //ui->stackedWidget->setStyleSheet("QStackedWidget{background-color: rgb(255,255,255);}");
    //qDebug()<<"firstIndex:"<<firstIndex;
}


void MainWindow::PlayCircle()
{
    //获取页面的数量
    //int nCount = ui->stackedWidget->count();
    //获取当前页面的索引
    int nIndex = ui->stackedWidget->currentIndex();

    //获取下一个需要显示的页面索引
    nIndex++;
    /*
    //当需要显示的页面索引大于等于总页面时，切换至首页
    if (nIndex >= nCount)
    {
        nIndex = firstIndex;
    }
    */
    //显示当前页面
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::Sound()
{
    //ui->label->setText(tr("新建文件"));
    int nIndex = ui->stackedWidget->currentIndex();
    nIndex++;
    ui->stackedWidget->setCurrentIndex(3);
}
