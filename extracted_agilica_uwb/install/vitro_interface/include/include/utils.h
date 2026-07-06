#pragma once

#include <stdlib.h>
#include <deque>

#include <sstream>
#define TO_RADIANS(deg) ((deg) * M_PI / 180)
#define TO_DEGREES(rad) ((rad) * 180 / M_PI)

#include "rclcpp/rclcpp.hpp"
#include "opencv2/opencv.hpp"

struct video_settings_holder{
    std::string camera_video_stream_source_type;
    std::string multi_spectral_fusion_type;
    std::string multi_spectral_display_mode;
};


template <typename T>
std::string to_string_with_precision(const T a_value, const int n = 6) {
    std::ostringstream out;
    out.precision(n);
    out << std::fixed << a_value;
    return std::move(out).str();
}

template <typename T>
std::string vector_to_string(const std::vector<T> v) {
    std::stringstream ss;
    ss << '[';
    for (auto i : v) ss << i << ", ";
    ss << ']';
    std::string s = ss.str();
    return s;
}


template <typename T, int MaxLen, typename Container=std::deque<T>>
class FixedQueue : public std::queue<T, Container> {
public:
    void push(const T& value) {
        if (this->size() == MaxLen) {
           this->c.pop_front();
        }
        std::queue<T, Container>::push(value);
    }
};
