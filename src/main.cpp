#include <iostream>
#include "opencv4/opencv2/opencv.hpp"
int main()
{
    std::cout << cv::getBuildInformation() << std::endl;
    return 0;
    
}