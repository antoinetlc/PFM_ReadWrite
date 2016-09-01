#ifndef PFMREADWRITE
#define PFMREADWRITE

#include <iostream>
#include <fstream>

#include <opencv2/core/core.hpp>
#include <opencv/highgui.h>

/**
 * Loads a PFM image stored in little endian and returns the image as an OpenCV Mat.
 * @brief loadPFM
 * @param filePath
 * @return
 */
cv::Mat loadPFM(const std::string filePath);

/**
 * Saves the image as a PFM file.
 * @brief savePFM
 * @param image
 * @param filePath
 * @return
 */
bool savePFM(const cv::Mat image, const std::string filePath);

#endif // PFMREADWRITE

