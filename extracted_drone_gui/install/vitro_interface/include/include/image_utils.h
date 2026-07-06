#ifndef __IMAGE_UTILS_H__
#define __IMAGE_UTILS_H__

#include <stdlib.h>

#include "rclcpp/rclcpp.hpp"
#include "opencv2/opencv.hpp"
#include "cv_bridge/cv_bridge.h"


std::string get_format(cv_bridge::Format format);
void to_compressed_image_msg(sensor_msgs::msg::CompressedImage *ros_image, cv_bridge::CvImage& u_image, const std::string dst_format, int quality);

#endif

