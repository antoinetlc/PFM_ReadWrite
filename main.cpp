/*
 *     PFM_ReadWrite
 *
 *     Authors:  Antoine TOISOUL LE CANN
 *
 *     Copyright © 2016 Antoine TOISOUL
 *              All rights reserved
 *
 *
 * PFM_ReadWrite is free software: you can redistribute it and/or modify
 *
 * it under the terms of the GNU Lesser General Public License as published by
 *
 * the Free Software Foundation, either version 3 of the License, or
 *
 * (at your option) any later version.
 *
 * PFM_ReadWrite is distributed in the hope that it will be useful,
 *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 *
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

/**
 * \file main.cpp
 * \brief Example of how to read and save PFM files.
 * \author Antoine Toisoul Le Cann
 * \date September, 1st, 2016
 *
 * Example of how to read and save PFM files.
 */

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
