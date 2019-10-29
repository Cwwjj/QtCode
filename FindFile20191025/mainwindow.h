#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QDir>
#include <QComboBox>
#include <QLineEdit>
#include <QLabel>
#include <QTableWidget>
#include <QPushButton>
#include <QGroupBox>
#include <QString>
#include <QFileDialog>
#include <QList>
#include <QFileInfo>
#include <QStringList>
#include <QCheckBox>
#include <QHBoxLayout>
#include <QVBoxLayout>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void createFileTable();
    void showFileInfo();
    void createFileFormat();
    void loadStyleSheet(const QString &sheetName);
public slots:
    void browseDir();
    void findFiles();
    void openFile();
protected:

private:
    Ui::MainWindow *ui;
    QWidget *centralWidget;
    QLineEdit *dirEdit;
    QPushButton *browseBtn;
    QPushButton *findBtn;
    QPushButton *openBtn;
    QGroupBox *group;
    QTableWidget *table;
    QList<QFileInfo> *fileInfo;
    QCheckBox *allCheckBox;
    //图片格式
    QCheckBox *jpgCheckBox;
    QCheckBox *pngCheckBox;
    QCheckBox *bmpCheckBox;
    QCheckBox *gifCheckBox;
    QCheckBox *tiffCheckBox;
    QCheckBox *swfCheckBox;
    //文本格式
    QCheckBox *txtCheckBox;
    QCheckBox *xmlCheckBox;
    QCheckBox *docCheckBox;
    QCheckBox *xlsCheckBox;
    QCheckBox *pdfCheckBox;
    //音频格式
    QCheckBox *mp3CheckBox;
    QCheckBox *wavCheckBox;
    //视频格式
    QCheckBox *mkvCheckBox;
    QCheckBox *wmvCheckBox;
    QCheckBox *aviCheckBox;
    QCheckBox *mp4CheckBox;
    QCheckBox *flvCheckBox;
    //压缩格式
    QCheckBox *zipCheckBox;
    QCheckBox *rarCheckBox;
    QCheckBox *zip7CheckBox;
};

#endif // MAINWINDOW_H
