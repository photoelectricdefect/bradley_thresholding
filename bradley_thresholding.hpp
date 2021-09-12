#ifndef BRADLEYT_H_
#define BRADLEYT_H_

#include <opencv2/core.hpp>

/**
 * @brief  Simple and quick adaptive thresholding method 
 * @note   
 * @retval None
 */
class bradley_thresholding
{
    public:
        /**
         * @brief  Thresholds input image by taking the mean of a window around pixel and comparing it with said pixel intensity 
         * @note   
         * @param  im: Input image
         * @param  out: Output thresholded image
         * @param  winr: Window size
         * @param  t: The value (in percent) a pixel's intensity can be lower than the window mean to still be considered a foreground pixel
         * @retval None
         */
        static void threshold(const cv::Mat& im,cv::Mat& out,int winr,int t);
    private:
        bradley_thresholding();
};

#endif
