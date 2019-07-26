#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "QTimer"
#include "QImage"
#include "opencv2/opencv.hpp"

using namespace cv;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void ReadFrame();
    void OpenCameraClicked();
    void CloseCameraClicked();
private:
    Ui::MainWindow *ui;
    VideoCapture capture;
    QTimer *timer;
    Mat frame;
};

#endif // MAINWINDOW_H
