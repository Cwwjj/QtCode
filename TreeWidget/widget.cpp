#include "widget.h"
#include "ui_widget.h"
#include <QStringList>
#include <QDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    initTreeWidget();
    connect(ui->treeWidget,&QTreeWidget::itemClicked,this,&Widget::getItemText);
    //connect(ui->treeWidget,SIGNAL(itemClicked(QTreeWidgetItem*,int)),this,SLOT(getItemText(QTreeWidgetItem*,int)));
}

Widget::~Widget()
{
    delete ui;
}

/**
 @ brief:初始化TreeWidget
 @ param:[in]
 @ param:[out]
 @ return:
 @ author:xiaolei
 @ data:2019-07-31
 */
void Widget::initTreeWidget()
{
    ui->treeWidget->clear();
    ui->treeWidget->setColumnCount(1);
    ui->treeWidget->setColumnWidth(0,600);
    //隐藏标签头
    ui->treeWidget->setHeaderHidden(true);

    QFont font("Microsoft YaHei", 10, 50);
    QColor color=QColor(112,150,100);


    //添加分组
    QTreeWidgetItem *group1 = new QTreeWidgetItem(ui->treeWidget);
    group1->setText(0,tr("影视APP"));
    group1->setFlags(Qt::ItemIsEnabled);
    group1->setExpanded(true);
    //group1->setCheckState(0, Qt::Unchecked);
    //group1->setHidden(true);
    group1->setFont(0,font);
    group1->setTextColor(0,color);
    //group1->setBackgroundColor(0,QColor(112,150,100));
    ui->treeWidget->addTopLevelItem(group1);

    //第二个分组
    QTreeWidgetItem *group2 = new QTreeWidgetItem(ui->treeWidget);
    group2->setText(0, "直播APP");
    group2->setExpanded(true);
    group2->setFlags(Qt::ItemIsEnabled);
    group2->setFont(0,font);
    group2->setTextColor(0,color);
    ui->treeWidget->addTopLevelItem(group2);

    //第三个分组
    QTreeWidgetItem *group3 = new QTreeWidgetItem(ui->treeWidget);
    group3->setText(0, "短视频APP");
    group3->setExpanded(true);
    group3->setFlags(Qt::ItemIsEnabled);
    group3->setFont(0,font);
    group3->setTextColor(0,color);
    ui->treeWidget->addTopLevelItem(group3);

    //第四个分组
    QTreeWidgetItem *group4 = new QTreeWidgetItem(ui->treeWidget);
    group4->setText(0, "直播APP");
    group4->setExpanded(true);
    group4->setFlags(Qt::ItemIsEnabled);
    group4->setFont(0,font);
    group4->setTextColor(0,color);
    ui->treeWidget->addTopLevelItem(group4);

    //添加group1子项目
    QStringList childItems1;
    childItems1<<tr("腾讯")<<tr("爱奇艺")<<tr("优酷")<<tr("土豆")<<tr("搜狐")<<tr("乐视");
    std::vector<QTreeWidgetItem *> subItems1;
    subItems1.reserve(6);

    for(int i=0;i<6;i++)
    {
        subItems1[i] = new QTreeWidgetItem(group1);
        subItems1[i]->setFlags(Qt::ItemIsEnabled);
        subItems1[i]->setText(0, childItems1.at(i));
    }

    //添加group2子项目
    QStringList childItems2;
    childItems2<<tr("斗鱼")<<tr("虎牙")<<tr("战旗")<<tr("花椒")<<tr("六间房")<<tr("bilibili");
    std::vector<QTreeWidgetItem *> subItems2;
    subItems2.reserve(6);
    for(int i=0;i<6;i++)
    {
        subItems2[i] = new QTreeWidgetItem(group2);
        subItems2[i]->setFlags(Qt::ItemIsEnabled);
        subItems2[i]->setText(0, childItems2.at(i));
    }

    //添加group3子项目
    QStringList childItems3;
    childItems3<<tr("抖音")<<tr("火山")<<tr("快手")<<tr("微视");
    std::vector<QTreeWidgetItem *> subItems3;
    subItems3.reserve(4);
    for(int i=0;i<4;i++)
    {
        subItems3[i] = new QTreeWidgetItem(group3);
        subItems3[i]->setFlags(Qt::ItemIsEnabled);
        subItems3[i]->setText(0, childItems3.at(i));
    }

    //添加group4子项目
    QStringList childItems4;
    childItems4<<tr("掌阅")<<tr("QQ阅读")<<tr("起点")<<tr("网易云阅读");
    std::vector<QTreeWidgetItem *> subItems4;
    subItems4.reserve(4);
    for(int i=0;i<4;i++)
    {
        subItems4[i] = new QTreeWidgetItem(group4);
        subItems4[i]->setFlags(Qt::ItemIsEnabled);
        subItems4[i]->setText(0, childItems4.at(i));
    }
}

/**
 @ brief:获取项目文本
 @ param:[in]
 @ param:[out]
 @ return:
 @ author:xiaolei
 @ data:2019-07-31
 */
void Widget::getItemText(QTreeWidgetItem* item, int column)
{
    QString itemText = item->text(column);
    qDebug().noquote()<<itemText;
    //显示项目文本
    ui->label->setText(itemText);
}

void Widget::treeItemChanged(QTreeWidgetItem* item, int column)
{
    QString itemText = item->text(0);
    //选中时
    if (Qt::Checked == item->checkState(0))
    {
           QTreeWidgetItem* parent = item->parent();
           int count = item->childCount();
           if (count > 0)
           {
                for (int i = 0; i < count; i++)
                {
                      //子节点也选中
                      item->child(i)->setCheckState(0, Qt::Checked);
                }
           }
           else
           {
                //是子节点
                updateParentItem(item);
           }
    }
    else if (Qt::Unchecked == item->checkState(0))
    {
           int count = item->childCount();
           if (count > 0)
           {
                for (int i = 0; i < count; i++)
                {
                 item->child(i)->setCheckState(0, Qt::Unchecked);
                }
           }
           else
           {
                updateParentItem(item);
           }
    }
}

void Widget::updateParentItem(QTreeWidgetItem* item)
{
    QTreeWidgetItem *parent = item->parent();
    if (parent == NULL)
    {
         return;
    }

    //选中的子节点个数
    int selectedCount = 0;
    int childCount = parent->childCount();
    for (int i = 0; i < childCount; i++)
    {
         QTreeWidgetItem *childItem = parent->child(i);
         if (childItem->checkState(0) == Qt::Checked)
         {
                selectedCount++;
         }
    }
    if (selectedCount <= 0)
    {
         //选中状态
         parent->setCheckState(0, Qt::Unchecked);
    }
    else if (selectedCount > 0 && selectedCount < childCount)
    {
         //部分选中状态
         parent->setCheckState(0, Qt::PartiallyChecked);
    }
    else if (selectedCount == childCount)
    {
         //未选中状态
         parent->setCheckState(0, Qt::Checked);
    }
}
