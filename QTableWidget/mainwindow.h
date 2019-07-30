#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void initTable();
    void addTableInfo();
private slots:
    void insertTableRow();
    void insertTableColumn();
    void deleteTableRow();
    void deleteTableColumn();
    void clearTableContents();
    void getCurrentPostion();
    void addComboBox();
    void insertIcon();
    void mergeCells();
private:
    Ui::MainWindow *ui;
    int currentRow;
    int currentColumn;
};

#endif // MAINWINDOW_H
