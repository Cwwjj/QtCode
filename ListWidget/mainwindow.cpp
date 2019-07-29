/*
 * 增加、插入、删除、排序
*/
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QDebug"
#include "QString"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle(tr("ListWidget控件简单使用示例"));
    ui->listWidget->addItem(tr("视频"));
    ui->listWidget->addItem(tr("音乐"));
    ui->listWidget->addItem(tr("图片"));
    ui->listWidget->addItem(tr("书籍"));

    /*
    QStringList item;
    item<<"视频"<<"音乐"<<"图片"<<"书籍";
    ui->listWidget->addItems(item);
    */

    qDebug()<<"count:"<<ui->listWidget->count();
    ui->lineEditCount->setText(QString("%1").arg(ui->listWidget->count()));
    connect(ui->listWidget,&QListWidget::itemClicked,this,&MainWindow::PrintItemName);
    connect(ui->btnAddItem,&QPushButton::clicked,this,&MainWindow::AddList);
    connect(ui->btnInsertItem,&QPushButton::clicked,this,&MainWindow::InsertList);
    connect(ui->btnDeleteItem,&QPushButton::clicked,this,&MainWindow::DeleteList);
    connect(ui->btnClearList,&QPushButton::clicked,this,&MainWindow::ClearList);
    connect(ui->btnSort,&QPushButton::clicked,this,&MainWindow::SortList);
}

MainWindow::~MainWindow()
{
    delete ui;
}

//打印项目名称
void MainWindow::PrintItemName()
{
    qDebug()<<"currentItem:"<<ui->listWidget->currentItem()->text();
    qDebug()<<"currentIndex:"<<ui->listWidget->currentIndex();
    qDebug()<<"currentRow:"<<ui->listWidget->currentRow();

    ui->lineEditCurrentRow->setText(QString("%1").arg(ui->listWidget->currentRow()));
    ui->lineEditCurrentItem->setText(ui->listWidget->currentItem()->text());
}

//添加项目
void MainWindow::AddList()
{
    QString strName;
    strName=ui->lineEditName->text();
    ui->listWidget->addItem(strName);
}

//插入项目
void MainWindow::InsertList()
{
    QString strName,strRow;
    strName=ui->lineEditName->text();
    strRow=ui->lineEditRow->text();

    ui->listWidget->insertItem(strRow.toInt(),strName);
}

//删除项目
void MainWindow::DeleteList()
{
    QString strRow;
    strRow=ui->lineEditRow->text();
    ui->listWidget->takeItem(strRow.toInt());
}

//清空列表
void MainWindow::ClearList()
{
    ui->listWidget->clear();
}

//列表排序
void MainWindow::SortList()
{
    //升序
    ui->listWidget->sortItems(Qt::AscendingOrder);
    //降序
    //ui->listWidget->sortItems(Qt::DescendingOrder);
}


