#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTreeWidgetItem>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT
    
public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
    void updateParentItem(QTreeWidgetItem* item);
    void initTreeWidget();
    void initTreeWidget_2();
private:
    Ui::Widget *ui;

public slots:
    void treeItemChanged(QTreeWidgetItem* item, int column);
private slots:
    void getItemText(QTreeWidgetItem* item, int column);
};

#endif // WIDGET_H
