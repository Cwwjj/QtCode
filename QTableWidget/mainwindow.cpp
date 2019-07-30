#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QTableWidget>
#include <QTableWidgetItem>
#include <QDebug>
#include <QComboBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //连接信号槽
    connect(ui->insertRowBtn,SIGNAL(clicked()),this,SLOT(insertTableRow()));
    connect(ui->insertColsBtn,SIGNAL(clicked()),this,SLOT(insertTableColumn()));
    connect(ui->deleteRowBtn,SIGNAL(clicked(bool)),this,SLOT(deleteTableRow()));
    connect(ui->deleteColsBtn,SIGNAL(clicked(bool)),this,SLOT(deleteTableColumn()));
    connect(ui->clearContentBtn,SIGNAL(clicked(bool)),this,SLOT(clearTableContents()));
    connect(ui->tableWidget,SIGNAL(cellClicked(int,int)),this,SLOT(getCurrentPostion()));
    connect(ui->addListBtn,SIGNAL(clicked(bool)),this,SLOT(addComboBox()));
    connect(ui->mergeCellBtn,SIGNAL(clicked(bool)),this,SLOT(mergeCells()));
    connect(ui->insertIconBtn,SIGNAL(clicked(bool)),this,SLOT(insertIcon()));
    initTable();
}

MainWindow::~MainWindow()
{
    delete ui;
}

/**
 @ brief:初始化表格
 @ param:[in]
 @ param:[out]
 @ return:
 @ author:xiaolei
 @ data:2019-07-30
 */
void MainWindow::initTable()
{
    //设置列数
    ui->tableWidget->setColumnCount(8);
    //设置行数
    ui->tableWidget->setRowCount(30);
    //设置行高列宽
    for(int columns=0;columns<8;++columns)
    {
        for(int rows=0;rows<30;++rows)
        {
            ui->tableWidget->setColumnWidth(columns,125);
            ui->tableWidget->setRowHeight(rows,30);
        }
    }
    //纵向表头可视化
    ui->tableWidget->verticalHeader()->setVisible(false);
    //横向表头可视化
    ui->tableWidget->horizontalHeader()->setVisible(false);

    //设置编辑方式为双击编辑
    ui->tableWidget->setEditTriggers(QAbstractItemView::DoubleClicked);

    //选择目标方式为单个选中
    ui->tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);

    //设置选中颜色：粉色
    ui->tableWidget->setStyleSheet("selection-background-color:pink");

    //添加表格内容
    ui->tableWidget->setItem(0,0,new QTableWidgetItem("Group"));
    ui->tableWidget->setItem(0,1,new QTableWidgetItem("Animal ID"));
    ui->tableWidget->setItem(0,2,new QTableWidgetItem("Sex"));
    ui->tableWidget->setItem(0,3,new QTableWidgetItem("Weight"));
    ui->tableWidget->setItem(0,4,new QTableWidgetItem("Age"));
    ui->tableWidget->setItem(0,5,new QTableWidgetItem("Drug"));
    ui->tableWidget->setItem(0,6,new QTableWidgetItem("Status"));
    ui->tableWidget->setItem(0,7,new QTableWidgetItem("Treatment"));

    int rows=0;
    for(int columns=0;columns<8;columns++)
    {
        //居中显示
        ui->tableWidget->item(rows,columns)->setTextAlignment(Qt::AlignCenter);
        //设置背景颜色
        ui->tableWidget->item(rows,columns)->setBackgroundColor(QColor(112,173,71));
        //设置文本颜色
        ui->tableWidget->item(rows,columns)->setTextColor(QColor(0,0,0));
        //设置字体为黑体
        ui->tableWidget->item(rows,columns)->setFont(QFont("微软雅黑"));
    }
}

/**
 @ brief:在表格中插入一个空行，插入的行号必须在范围之内
 @ param:[in]
 @ param:[out]
 @ return:
 @ author:xiaolei
 @ data:2019-07-30
 */
void MainWindow::insertTableRow()
{
    //获取编辑框内的行号
    int row=ui->lineEdit->text().toInt();
    //插入一行
    ui->tableWidget->insertRow(row-1);
}

/**
 @ brief:在表格中插入一个空列
 @ param:[in]
 @ param:[out]
 @ return:
 @ author:xiaolei
 @ data:2019-07-30
 */
void MainWindow::insertTableColumn()
{
    //获取编辑框内的列号
    int column=ui->lineEdit_2->text().toInt();
    //插入一列
    ui->tableWidget->insertColumn(column-1);
}

/**
 @ brief:在表格中删除一行
 @ param:[in]
 @ param:[out]
 @ return:
 @ author:xiaolei
 @ data:2019-07-30
 */
void MainWindow::deleteTableRow()
{
    //获取编辑框内的行号
    int row=ui->lineEdit->text().toInt();
    //插入一行
    ui->tableWidget->removeRow(row-1);
}

/**
 @ brief:在表格中删除一列
 @ param:[in]
 @ param:[out]
 @ return:
 @ author:xiaolei
 @ data:2019-07-30
 */
void MainWindow::deleteTableColumn()
{
    //获取编辑框内的列号
    int column=ui->lineEdit_2->text().toInt();
    //插入一列
    ui->tableWidget->removeColumn(column-1);
}

/**
 @ brief:清空表格中的所有内容，不包括标题头
 @ param:[in]
 @ param:[out]
 @ return:
 @ author:xiaolei
 @ data:2019-07-30
 */
void MainWindow::clearTableContents()
{
    //清空内容
    ui->tableWidget->clearContents();
}

/**
 @ brief:在状态栏显示行列信息
 @ param:[in]
 @ param:[out]
 @ return:
 @ author:xiaolei
 @ data:2019-07-30
 */
void MainWindow::getCurrentPostion()
{
    //获取行列序号加1，从0开始
    currentRow=ui->tableWidget->currentRow()+1;
    currentColumn=ui->tableWidget->currentColumn()+1;
    //状态栏显示行列序号
    statusBar()->showMessage(tr("当前位置:")+QString::number(currentRow)+tr("行")+QString::number(currentColumn)+tr("列"));
    QTableWidgetItem *item=ui->tableWidget->item(currentRow-1,currentColumn-1);
    /*
     * 如果是没有被编辑过的单元格，将不能用ui->tableWidget->item(i,j)->text()访问，因为该指针为空。
     * 如果被编辑过，但内容仍然是空(例如text()==tr("")),则要进行这一步的判断。
     * 所以一个好的编码习惯应该是：在使用指针之前，要进行指针是否为null的判断。
    */
    if(item!=NULL)
    {
        QString str=item->text();
        //QString str=item->data(Qt::DisplayRole).toString();
        qDebug()<<str;
    }
}

/**
 @ brief:添加下拉列表
 @ param:[in]
 @ param:[out]
 @ return:
 @ author:xiaolei
 @ data:2019-07-30
 */
void MainWindow::addComboBox()
{
    //获取编辑框内的行号
    int row=ui->lineEdit->text().toInt();
    //获取编辑框内的列号
    int column=ui->lineEdit_2->text().toInt();
    //创建QComboBox对象
    QComboBox *comboBox = new QComboBox();
    //添加项目到下拉列表
    comboBox->addItem("male");
    comboBox->addItem("female");
    ui->tableWidget->setCellWidget(row-1,column-1,comboBox);
}

/**
 @ brief:合并单元格
 @ param:[in]
 @ param:[out]
 @ return:
 @ author:xiaolei
 @ data:2019-07-30
 */
void MainWindow::mergeCells()
{
    //获取编辑框内的行号
    int row=ui->lineEdit->text().toInt();
    //获取编辑框内的列号
    int column=ui->lineEdit_2->text().toInt();
    //合并单元格
    ui->tableWidget->setSpan(row-1, column-1,2 ,1);
}

/**
 @ brief:插入图片
 @ param:[in]
 @ param:[out]
 @ return:
 @ author:xiaolei
 @ data:2019-07-30
 */
void MainWindow::insertIcon()
{
    //获取编辑框内的行号
    int row=ui->lineEdit->text().toInt();
    //获取编辑框内的列号
    int column=ui->lineEdit_2->text().toInt();
    ui->tableWidget->setItem(row-1, column-1, new QTableWidgetItem(QIcon(tr("E://Qt_Project//QTableWidget//1.jpg")), "路飞"));
}



