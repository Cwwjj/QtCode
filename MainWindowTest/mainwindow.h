#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "playcircledialog.h"

QT_BEGIN_NAMESPACE
class QAction;
class QActionGroup;
class QLabel;
class QMenu;
QT_END_NAMESPACE

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void AddMenu();
    void AddToolBar();
    void AddStackedWidget();
private slots:
    void Sound();
    void PlayCircle();
    void NewProject();
    void NewExperiment();
private:
    Ui::MainWindow *ui;
    //QLabel *infoLabel;
    PlayCircleDialog playcircleWidget;
    int firstIndex;
};

#endif // MAINWINDOW_H
