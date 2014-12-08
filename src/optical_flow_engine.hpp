#pragma once

#include <opencv2/opencv.hpp>

class OpticalFlowEngine {
public:
  virtual std::vector<cv::Mat> process(cv::Mat& prevFrame, cv::Mat& nextFrame) = 0;
  void prepareFrame(cv::Mat& frame);
};


