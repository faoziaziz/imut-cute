#include "mainwindow.h"
#include "ui_mainwindow.h"



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    /* connection from front push button */
    connect(ui->TombolCute, &QPushButton::clicked, this, &MainWindow::openImage);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::openGambar()
{
    QByteArray picByteArray;
     QPixmap picPixmap;

     /* load data form bitstream*/
     picPixmap.loadFromData(picByteArray, "PNG");

     /* Setting for width and height */
     int w = ui->FrontLabel->width();
     int h = ui->FrontLabel->height();

     /* lokasi image untuk translated */

     QPixmap pic("/home/faoziaziz/Downloads/kalistaumari.png");

     ui->FrontLabel->setPixmap (pic.scaled (w,h,Qt::KeepAspectRatio));
}

void MainWindow::openImage()
{

    QString fileName = QFileDialog::getOpenFileName(this, "Open the file");
    //QFile file(fileName);
    QPixmap pic(fileName);
    setWindowTitle(fileName);

    ImageProc.fileName = fileName;
    ImageProc.showImage();


    /* Setting for width and height */
    int w = ui->FrontLabel->width();
    int h = ui->FrontLabel->height();


    ui->FrontLabel->setPixmap(pic.scaled(w,h,Qt::KeepAspectRatio));

}


