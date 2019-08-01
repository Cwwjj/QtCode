#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    initSplitter();
}

MainWindow::~MainWindow()
{
    delete ui;
}

/**
 @ brief:
 @ param:[in]
 @ param:[out]
 @ return:
 @ author:xiaolei
 @ data:2019-08-01
 */
void MainWindow::initSplitter()
{
    //设置窗口标题
    this->setWindowTitle("窗口分割器");
    //设置窗口大小
    this->resize(1024, 768);
    this->setMinimumSize(QSize(1024, 768));

    //网格布局
    gridLayout = new QGridLayout(ui->centralWidget);
    gridLayout->setSpacing(6);
    gridLayout->setContentsMargins(11, 11, 11, 11);

    //分割器
    splitter_2 = new QSplitter(ui->centralWidget);
    splitter_2->setOrientation(Qt::Horizontal);

    splitter = new QSplitter(splitter_2);
    splitter->setOrientation(Qt::Vertical);

    //窗口
    widget = new QWidget(splitter_2);
    widget1 = new QWidget(splitter);
    widget2 = new QWidget(splitter);

    //垂直布局
    verticalLayout = new QVBoxLayout(widget);
    verticalLayout->setSpacing(0);
    verticalLayout->setContentsMargins(11, 11, 11, 11);
    verticalLayout->setContentsMargins(0, 0, 0, 0);

    verticalLayout_2 = new QVBoxLayout(widget1);
    verticalLayout_2->setSpacing(0);
    verticalLayout_2->setContentsMargins(11, 11, 11, 11);
    verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
    verticalLayout_2->setContentsMargins(0, 0, 0, 0);

    verticalLayout_3 = new QVBoxLayout(widget2);
    verticalLayout_3->setSpacing(0);
    verticalLayout_3->setContentsMargins(11, 11, 11, 11);
    verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
    verticalLayout_3->setContentsMargins(0, 0, 0, 0);

    //标签
    label = new QLabel(widget);
    label->setText("项目");
    label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);background-color: rgb(186, 151, 200);font: 9pt 微软雅黑"));
    label_2 = new QLabel(widget1);
    label_2->setText("编辑代码");
    label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);background-color: rgb(186, 151, 200);font: 9pt 微软雅黑"));
    label_3 = new QLabel(widget2);
    label_3->setText("应用程序输出");
    label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);background-color: rgb(186, 151, 200);font: 9pt 微软雅黑"));

    textEdit = new QTextEdit(widget1);
    textEdit_2 = new QTextEdit(widget2);

    treeWidget = new QTreeWidget(widget);

    //项目窗口
    verticalLayout->addWidget(label);
    verticalLayout->addWidget(treeWidget);

    //
    verticalLayout_2->addWidget(label_2);
    verticalLayout_2->addWidget(textEdit);

    verticalLayout_3->addWidget(label_3);
    verticalLayout_3->addWidget(textEdit_2);

    splitter->addWidget(widget1);
    splitter->addWidget(widget2);

    splitter_2->addWidget(widget);
    splitter_2->addWidget(splitter);

    //将分割器添加到网格布局
    gridLayout->addWidget(splitter_2, 0, 0, 1, 1);

    //添加标头
    QTreeWidgetItem *qtreewidgetitem = treeWidget->headerItem();
    qtreewidgetitem->setText(0,"Project");



    const bool sortingEnabled = treeWidget->isSortingEnabled();
    treeWidget->setSortingEnabled(false);


    //头文件
    QTreeWidgetItem *qtreewidgetitem1=new QTreeWidgetItem(treeWidget);
    qtreewidgetitem1 = treeWidget->topLevelItem(0);
    qtreewidgetitem1->setText(0, "头文件");

    QTreeWidgetItem *qtreewidgetitem2=new QTreeWidgetItem(qtreewidgetitem1);
    qtreewidgetitem2->setText(0, "1.h");
    qtreewidgetitem1->addChild(qtreewidgetitem2);

    QTreeWidgetItem *qtreewidgetitem3 = new QTreeWidgetItem(qtreewidgetitem1);
    qtreewidgetitem3->setText(0,"2.h");
    qtreewidgetitem1->addChild(qtreewidgetitem3);


    //源文件
    QTreeWidgetItem *qtreewidgetitem4=new QTreeWidgetItem(treeWidget);
    qtreewidgetitem4 = treeWidget->topLevelItem(1);
    qtreewidgetitem4->setText(0, "源文件");

    QTreeWidgetItem *qtreewidgetitem5 = new QTreeWidgetItem(qtreewidgetitem4);
    qtreewidgetitem5->setText(0, "main.cpp");
    qtreewidgetitem4->addChild(qtreewidgetitem5);

    QTreeWidgetItem *qtreewidgetitem6 = new QTreeWidgetItem(qtreewidgetitem4);
    qtreewidgetitem6->setText(0, "1.cpp");
    qtreewidgetitem4->addChild(qtreewidgetitem6);

    QTreeWidgetItem *qtreewidgetitem7 = new QTreeWidgetItem(qtreewidgetitem4);
    qtreewidgetitem7->setText(0, "2.cpp");
    qtreewidgetitem4->addChild(qtreewidgetitem7);

    //资源文件
    QTreeWidgetItem *qtreewidgetitem8=new QTreeWidgetItem(treeWidget);
    qtreewidgetitem8 = treeWidget->topLevelItem(2);
    qtreewidgetitem8->setText(0, "资源文件");

    QTreeWidgetItem *qtreewidgetitem9 = new QTreeWidgetItem(qtreewidgetitem8);
    qtreewidgetitem9->setText(0, "1.ui");
    qtreewidgetitem8->addChild(qtreewidgetitem9);

    QTreeWidgetItem *qtreewidgetitem10 = new QTreeWidgetItem(qtreewidgetitem8);
    qtreewidgetitem10->setText(0, "2.ui");
    qtreewidgetitem8->addChild(qtreewidgetitem10);

    //其它文件
    QTreeWidgetItem *qtreewidgetitem11=new QTreeWidgetItem(treeWidget);
    qtreewidgetitem11 = treeWidget->topLevelItem(3);
    qtreewidgetitem11->setText(0, "其它文件");

    QTreeWidgetItem *qtreewidgetitem12 = new QTreeWidgetItem(qtreewidgetitem11);
    qtreewidgetitem12->setText(0, "other");
    qtreewidgetitem11->addChild(qtreewidgetitem12);

    treeWidget->setSortingEnabled(sortingEnabled);


    textEdit->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">#include &lt;iostream&gt;</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">using namespace std;</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; m"
                    "argin-right:0px; -qt-block-indent:0; text-indent:0px;\">int main()</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">{</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">  cout&lt;&lt;&quot;Hello World !&quot;&lt;&lt;endl;</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">  return 0;</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">}</p></body></html>", Q_NULLPTR));

    textEdit_2->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\350\276\223\345\207\272\347\273\223\346\236\234\357\274\232Hello World !</p></body></html>", Q_NULLPTR));
 // retranslateUi
}
