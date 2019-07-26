#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QGridLayout>
#include <QFormLayout>
#include <QStackedLayout>
#include <QLabel>
#include <QLineEdit>
#include <QSlider>
#include <QListWidget>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle(tr("布局管理器"));//窗口标题
    //setWindowFlags(Qt::FramelessWindowHint | windowFlags());
    //setVBoxLayout();//垂直布局管理器
    //setHBoxLayout();
    //setGridLayout();
    //setGridLayout2();
    //setFormLayout();
    //setStackedLayout();
    useDemo();
}

MainWindow::~MainWindow()
{
    delete ui;
}

/**
 @ brief:垂直布局管理器
 @ param:[in]
 @ param:[out]
 @ return:
 @ author:xiaolei
 @ data:2019-07-18
 @ note:
 */
void MainWindow::setVBoxLayout()
{
    QWidget *centralWidget = new QWidget();
    this->setCentralWidget(centralWidget);
    QVBoxLayout *layout=new QVBoxLayout;

    //设置按钮文本
    button1.setText(tr("腾讯视频"));
    button2.setText(tr("优酷视频"));
    button3.setText(tr("爱奇艺视频"));
    button4.setText(tr("土豆视频"));

    //按钮大小的最小值
    button1.setMinimumSize(80,30);
    button2.setMinimumSize(80,30);
    button3.setMinimumSize(80,30);
    button4.setMinimumSize(80,30);

    /*
    button1.setMaximumSize(80,30);
    button2.setMaximumSize(80,30);
    button3.setMaximumSize(80,30);
    button4.setMaximumSize(80,30);
    */

    //设置按钮的大小策略，Expanding表示可随着父窗口的大小变化而发生改变
    button1.setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    button2.setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    button3.setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    button4.setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);

    //将按钮对象添加到布局管理器
    layout->addWidget(&button1);
    layout->addWidget(&button2);
    layout->addWidget(&button3);
    layout->addWidget(&button4);

    //设置每个按钮之间的间隔
    layout->setSpacing(30);

    layout->setAlignment(Qt::AlignCenter);

    //两种方法设置按钮的变化比例系数
    //layout->setStretchFactor(&button3, 2);
    //layout->setStretch(0, 6);  //0表示index，第一个被加入布局管理器的组件被自动编号为0

    centralWidget->setLayout(layout);
}

/**
 @ brief:水平布局管理器
 @ param:[in]
 @ param:[out]
 @ return:
 @ author:xiaolei
 @ data:2019-07-18
 @ note:
 */
void MainWindow::setHBoxLayout()
{
    QWidget *centralWidget = new QWidget();
    this->setCentralWidget(centralWidget);
    QHBoxLayout *layout=new QHBoxLayout;

    //设置按钮文本
    button1.setText(tr("腾讯视频"));
    button2.setText(tr("优酷视频"));
    button3.setText(tr("爱奇艺视频"));
    button4.setText(tr("土豆视频"));

    //按钮大小的最小值
    button1.setMinimumSize(80,30);
    button2.setMinimumSize(80,30);
    button3.setMinimumSize(80,30);
    button4.setMinimumSize(80,30);

    button1.setMaximumSize(80,30);
    button2.setMaximumSize(80,30);
    button3.setMaximumSize(80,30);
    button4.setMaximumSize(80,30);

    //设置按钮的大小策略，Expanding表示可随着父窗口的大小变化而发生改变
    button1.setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    button2.setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    button3.setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    button4.setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    //将按钮对象添加到布局管理器
    layout->addWidget(&button1);
    layout->addWidget(&button2);
    layout->addWidget(&button3);
    layout->addWidget(&button4);

    //设置每个按钮之间的间隔
    layout->setSpacing(30);

    //两种方法设置按钮的变化比例系数
    //layout->setStretchFactor(&button3, 2);
    //layout->setStretch(0, 6);  //0表示index，第一个被加入布局管理器的组件被自动编号为0

    centralWidget->setLayout(layout);
}

/**
 @ brief:网格布局管理器
 @ param:[in]
 @ param:[out]
 @ return:
 @ author:xiaolei
 @ data:2019-07-18
 @ note:
 */
void MainWindow::setGridLayout()
{
    QWidget *centralWidget = new QWidget();
    this->setCentralWidget(centralWidget);
    QGridLayout *layout=new QGridLayout;

    //设置按钮文本
    button1.setText(tr("腾讯视频"));
    button2.setText(tr("优酷视频"));
    button3.setText(tr("爱奇艺视频"));
    button4.setText(tr("土豆视频"));

    //按钮大小的最小值
    button1.setMinimumSize(80,30);
    button2.setMinimumSize(80,30);
    button3.setMinimumSize(80,30);
    button4.setMinimumSize(80,30);
    /*
    button1.setMaximumSize(80*2,30);
    button2.setMaximumSize(80*2,30);
    button3.setMaximumSize(80,30);
    button4.setMaximumSize(80,30);
    */

    //设置按钮的大小策略，Expanding表示可随着父窗口的大小变化而发生改变
    button1.setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    button2.setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    button3.setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    button4.setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    //将按钮对象添加到布局管理器
    /*
    layout->addWidget(&button1,0,0);
    layout->addWidget(&button2,0,1);
    layout->addWidget(&button3,1,0);
    layout->addWidget(&button4,1,1);
    */

    layout->addWidget(&button1,0,0,1,2);//占据1行2列
    layout->addWidget(&button2,1,0,1,2);//占据1行2列
    layout->addWidget(&button3,2,0,1,1);//占据1行1列
    layout->addWidget(&button4,2,1,1,1);//占据1行1列

    //设置每个按钮之间的间隔
    layout->setSpacing(30);

    //两种方法设置按钮的变化比例系数
    //layout->setStretchFactor(&button3, 2);
    //layout->setStretch(0, 6);  //0表示index，第一个被加入布局管理器的组件被自动编号为0

    centralWidget->setLayout(layout);
}

/**
 @ brief:网格布局管理器2
 @ param:[in]
 @ param:[out]
 @ return:
 @ author:xiaolei
 @ data:2019-07-18
 @ note:
 */
void MainWindow::setGridLayout2()
{
    QWidget *centralWidget = new QWidget();
    this->setCentralWidget(centralWidget);
    QGridLayout *layout=new QGridLayout;

    label1=new QLabel(tr("姓名："));
    label2=new QLabel(tr("性别："));
    label3=new QLabel(tr("年龄："));
    label4=new QLabel(tr("邮箱："));

    layout->addWidget(label1,0,0);
    layout->addWidget(label2,1,0);
    layout->addWidget(label3,2,0);
    layout->addWidget(label4,3,0);

    layout->addWidget(&edit1,0,1);
    layout->addWidget(&edit2,1,1);
    layout->addWidget(&edit3,2,1);
    layout->addWidget(&edit4,3,1);

    //设置比例系数
    layout->setColumnStretch(0, 1);
    layout->setColumnStretch(1, 4);

    centralWidget->setLayout(layout);
}

/**
 @ brief:表单布局管理器
 @ param:[in]
 @ param:[out]
 @ return:
 @ author:xiaolei
 @ data:2019-07-18
 @ note:
 */
void MainWindow::setFormLayout()
{
    QWidget *centralWidget = new QWidget();
    this->setCentralWidget(centralWidget);

    //定义一个表单布局管理器
    QFormLayout *layout = new QFormLayout();

    label1=new QLabel(tr("姓名："));
    label2=new QLabel(tr("性别："));
    label3=new QLabel(tr("年龄："));
    label4=new QLabel(tr("邮箱："));

    //将标签和组件按行添加到布局中
    layout->addRow(label1, &edit1);
    layout->addRow(label2, &edit2);
    layout->addRow(label3, &edit3);
    layout->addRow(label4, &edit4);

    //设置提示策略
    //layout->setRowWrapPolicy(QFormLayout::WrapLongRows);     //WrapAllRows分两行显示，DontWrapRows强调标签
    layout->setLabelAlignment(Qt::AlignHCenter);               //标签的对其方式
    centralWidget->setLayout(layout);
}

/**
 @ brief:栈布局管理器
 @ param:[in]
 @ param:[out]
 @ return:
 @ author:xiaolei
 @ data:2019-07-18
 @ note:
 */
void MainWindow::setStackedLayout()
{
    QWidget *centralWidget = new QWidget();
    this->setCentralWidget(centralWidget);
    QStackedLayout *layout=new QStackedLayout;

    //设置按钮文本
    button1.setText(tr("腾讯视频"));
    button2.setText(tr("优酷视频"));
    button3.setText(tr("爱奇艺视频"));
    button4.setText(tr("土豆视频"));

    //按钮大小的最小值
    button1.setMinimumSize(80,30);
    button2.setMinimumSize(80,30);
    button3.setMinimumSize(80,30);
    button4.setMinimumSize(80,30);

    button1.setMaximumSize(80,30);
    button2.setMaximumSize(80,30);
    button3.setMaximumSize(80,30);
    button4.setMaximumSize(80,30);

    //设置按钮的大小策略，Expanding表示可随着父窗口的大小变化而发生改变
    button1.setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    button2.setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    button3.setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    button4.setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    //将按钮对象添加到布局管理器
    layout->addWidget(&button1);
    layout->addWidget(&button2);
    layout->addWidget(&button3);
    layout->addWidget(&button4);

    //设置每个按钮之间的间隔
    layout->setSpacing(30);

    //设置当前显示在显示器的组件
    layout->setCurrentIndex(0);
    //layout->setCurrentWidget(&Btn4);

    centralWidget->setLayout(layout);
}

/**
 @ brief:使用示例
 @ param:[in]
 @ param:[out]
 @ return:
 @ author:xiaolei
 @ data:2019-07-19
 @ note:
 */
void MainWindow::useDemo()
{
    QPushButton *playButton=new QPushButton(tr("播放"));
    QPushButton *pauseButton=new QPushButton(tr("暂停"));
    QPushButton *previousButton=new QPushButton(tr("上一个"));
    QPushButton *nextButton=new QPushButton(tr("下一个"));
    QPushButton *fastforwardButton=new QPushButton(tr("快进"));
    QPushButton *backButton=new QPushButton(tr("后退"));
    QPushButton *findButton=new QPushButton(tr("查找"));

    QLineEdit *edit=new QLineEdit();

    //时间标签
    QLabel *timeLabel1=new QLabel(tr("00:00"));
    QLabel *timeLabel2=new QLabel(tr("00:00"));

    //实例化一个水平滑动条
    QSlider *slider=new QSlider(Qt::Horizontal);
    QListWidget *listWidget=new QListWidget();

    QLabel *label=new QLabel();

    QWidget *centralWidget = new QWidget();
    this->setCentralWidget(centralWidget);
    QHBoxLayout *hboxLayout=new QHBoxLayout;
    QHBoxLayout *hboxLayout2=new QHBoxLayout;
    QHBoxLayout *hboxLayout3=new QHBoxLayout;

    QVBoxLayout *vboxLayout=new QVBoxLayout;
    QVBoxLayout *vboxLayout2=new QVBoxLayout;

    QGridLayout *gridLayout=new QGridLayout;

    //按钮水平布局
    hboxLayout->addWidget(playButton);
    hboxLayout->addWidget(pauseButton);
    hboxLayout->addWidget(previousButton);
    hboxLayout->addWidget(nextButton);
    hboxLayout->addWidget(fastforwardButton);
    hboxLayout->addWidget(backButton);
    hboxLayout->setSpacing(30);

    hboxLayout2->addWidget(timeLabel1);
    hboxLayout2->addWidget(slider);
    hboxLayout2->addWidget(timeLabel2);
    hboxLayout2->setSpacing(20);

    hboxLayout3->addWidget(edit);
    hboxLayout3->addWidget(findButton);
    hboxLayout3->setSpacing(10);

    label->setMinimumSize(640,480);

    vboxLayout->addWidget(label);
    label->setStyleSheet("QLabel{background-color:rgb(75,75,75);}");
    vboxLayout->addLayout(hboxLayout2);
    vboxLayout->addLayout(hboxLayout);

    vboxLayout2->addLayout(hboxLayout3);
    vboxLayout2->addWidget(listWidget);

    gridLayout->addLayout(vboxLayout,0,0);
    gridLayout->addLayout(vboxLayout2,0,1);

    //添加布局到中心区域
    centralWidget->setLayout(gridLayout);
}


