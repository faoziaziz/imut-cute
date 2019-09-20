#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>
#include <QFont>
#include <QFontDialog>
#include <QImage>
#include <QScrollArea>
#include <QWidget>
#include <imageprocessing.h>
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void openGambar();
    void openImage();

private:
    Ui::MainWindow *ui;
public:
    ImageProcessing ImageProc;

};

#endif // MAINWINDOW_H
