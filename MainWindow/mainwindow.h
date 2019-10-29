#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLineEdit>
#include <QPushButton>
#include <QGroupBox>
#include <QWidget>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void showLabel();
    void showButton();
public slots:
    void chineseOnClicked();
    void mathematicsOnClicked();
    void englishOnClicked();
    void physicalOnClicked();
    void chemicalOnClicked();
    void biologicalOnClicked();
    void politicalOnClicked();
    void historyOnClicked();
    void geographicOnClicked();
private:
    Ui::MainWindow *ui;
    QWidget *centralWidget;
    QLineEdit *edit;
    QPushButton *chineseBtn;
    QPushButton *mathematicsBtn;
    QPushButton *englishBtn;
    QPushButton *physicalBtn;
    QPushButton *chemicalBtn;
    QPushButton *biologicalBtn;
    QPushButton *politicalBtn;
    QPushButton *historyBtn;
    QPushButton *geographicBtn;
};

#endif // MAINWINDOW_H
