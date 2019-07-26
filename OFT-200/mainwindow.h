#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QLabel>
#include <QListWidget>
#include <QSlider>
#include <QGroupBox>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void setLayoutOFT();
private:
    Ui::MainWindow *ui;
    QWidget *centralWidget;//中央部件

    QLabel *videoLabel;
    QLabel *startLabel;
    QLabel *endLabel;

    QGroupBox *cameraGb;
    QGroupBox *videoGb;

    QSlider *progressSlider;

    QPushButton *openCameraBtn;
    QPushButton *openVideoBtn;
    QPushButton *playBtn;
    QPushButton *pauseBtn;
    QPushButton *recordBtn;

    QListWidget *videoLw;
};

#endif // MAINWINDOW_H
