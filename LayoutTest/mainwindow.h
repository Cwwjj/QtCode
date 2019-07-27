#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "opencv2/opencv.hpp"
#include <QTimer>
#include <QLabel>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    QString convertTimeFormat(double time);
private slots:
    void readFrame();
    void openCameraClicked();
    void closeCameraClicked();
    void openLocalVideo();
    void playLocalVideo();
    void recordVideo();
private:
    Ui::MainWindow *ui;

    cv::VideoCapture capture;
    QTimer *timer;
    cv::Mat frame;
    QString fileName;
    double openTime,playTime;

    QLabel *fpsLabel;
    QLabel *totalFrameLabel;
    int frameCount;
};

#endif // MAINWINDOW_H
