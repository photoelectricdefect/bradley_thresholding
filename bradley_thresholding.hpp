#ifndef BRADLEYT_H_
#define BRADLEYT_H_

#include <opencv2/core.hpp>

class bradley_thresholding
{
    public:
        static void threshold(const cv::Mat& im,cv::Mat& out,int winr,int t);
    private:
        bradley_thresholding();
};

#endif
