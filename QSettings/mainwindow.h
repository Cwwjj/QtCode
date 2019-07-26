#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSettings>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void writeConfig();
    void readConfig();
    void clearConfig();
private:
    Ui::MainWindow *ui;
    QSettings *iniFile;
};

#endif // MAINWINDOW_H
