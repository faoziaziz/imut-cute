#ifndef IMAGEPROCESSING_H
#define IMAGEPROCESSING_H

#include<opencv2/core.hpp>
#include<opencv2/highgui.hpp>
#include<QDebug>

class ImageProcessing
{
public:
    ImageProcessing();
    void showImage();

    QString fileName;
};

#endif // IMAGEPROCESSING_H
