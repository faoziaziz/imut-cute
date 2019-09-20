#include "imageprocessing.h"

ImageProcessing::ImageProcessing()
{


}

void ImageProcessing::showImage()
{
    qDebug()<<"Show Image ";

    cv::String namafile;

    cv::Mat img=cv::imread(this->fileName.toLocal8Bit().constData(),-1);
    if(img.empty()){
        qDebug()<<" : "<<this->fileName.toLocal8Bit().constData()<<" bukan image";
    }
    cv::namedWindow("Example1", cv::WINDOW_AUTOSIZE);
    cv::imshow("Example1", img);
    cv::waitKey(0);
    cv::destroyWindow("Example1");


}
