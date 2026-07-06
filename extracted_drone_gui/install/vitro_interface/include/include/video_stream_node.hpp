#ifndef __VIDEO_STREAM_NODE_HPP__
#define __VIDEO_STREAM_NODE_HPP__

#include <atomic>
#include <chrono>
#include <functional>
#include <memory>
#include <string>
#include <vector>
#include <fstream>
#include <nlohmann/json.hpp>


#include "cv_bridge/cv_bridge.h"
#include "opencv2/opencv.hpp"
#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/camera_info.hpp"
#include "sensor_msgs/msg/image.hpp"
#include "std_msgs/msg/header.hpp"

#include "utils.h"
#include "image_utils.h"

/**
 *  ROS2 Node responsible for connecting to a server to receive image data from the drone.
 */
class VideoStreamNode : public rclcpp::Node {
   public:
    VideoStreamNode();
    ~VideoStreamNode();

   private:
    // Going for a simple publisher as image transport has advantages only if we compress the image
    // See: https://www.reddit.com/r/ROS/comments/lm8wio/image_transport_vs_generic_publishingsubscribing/
    std::shared_ptr<rclcpp::Publisher<sensor_msgs::msg::Image>> image_pub_;
    std::shared_ptr<rclcpp::Publisher<sensor_msgs::msg::CompressedImage>> compressed_image_pub_;
    std::shared_ptr<rclcpp::Publisher<sensor_msgs::msg::CameraInfo>> camera_info_pub_;

    // Msg containers
    sensor_msgs::msg::Image::SharedPtr image_msg_;
    sensor_msgs::msg::CompressedImage::SharedPtr compressed_image_msg_;
    sensor_msgs::msg::CameraInfo camera_info_msg_;

    // Source for reference : https://github.com/ros-drivers/video_stream_opencv/blob/master/src/video_stream.cpp
    std::shared_ptr<cv::VideoCapture> cap;

    std::unique_ptr<std::thread> video_thread_;
    std::unique_ptr<std::thread> publisher_thread_;
    std::unique_ptr<std::thread> compressed_publisher_thread_;
    std::queue<std::tuple<cv::Mat,rclcpp::Time>> image_queue_;
    FixedQueue<std::tuple<cv::Mat,rclcpp::Time>,1>  compressed_image_queue_;
    std::string video_url_; 
    
    // Skip frames param
    uint8_t skip_frames_raw_;
    uint8_t skip_frames_compressed_;

    // Sync mechanism
    std::mutex video_mutex_;
    std::condition_variable image_available_;

    std::mutex compressed_video_mutex_;
    std::condition_variable compressed_image_available_;

    // Compression parameters
    uint8_t compression_quality_;
    std::string compression_type_;

    // Functions
    void start_threads();
    void video_capture();
    void publish_frame();
    void publish_compressed_frame();
    void load_camera_config(std::string file);
};
#endif