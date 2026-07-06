#pragma once
#include <chrono>
#include <iostream>
#include <memory>
#include <mutex>
#include <thread>

#include "geometry_msgs/msg/quaternion_stamped.hpp"
#include "vitro_exceptions.hpp"


/**
 * Common class to hold data to be shared between nodes
 */
class SharedMemoryHandler {
   public:
    SharedMemoryHandler();
    void get_gimbal_data(geometry_msgs::msg::QuaternionStamped& msg);
    void set_gimbal_data(geometry_msgs::msg::QuaternionStamped msg);


   private:
    
    
    geometry_msgs::msg::QuaternionStamped gimbal_data_;
    bool gimbal_data_available = false;
    std::mutex m_lock_;
;
};
