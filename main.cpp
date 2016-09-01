#include <iostream>
#include <string>

#include "PFMReadWrite.h"

using namespace std;
using namespace cv;

int main(void)
{
    //Example that loads an image and stores it under another name
    Mat image = loadPFM(string("image.pfm"));

    //Display the image
    imshow("Image", image);
    waitKey(0);

    savePFM(image, "image_saved.pfm");


    return 0;
}
