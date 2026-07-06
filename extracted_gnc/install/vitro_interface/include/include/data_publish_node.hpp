#include <mqtt/async_client.h>

#include <chrono>
#include <functional>
#include <memory>
#include <nlohmann/json.hpp>
#include <string>
#include <vector>

#include "drone_list.hpp"
#include "generic_mqtt_client.hpp"
#include "geographic_msgs/msg/geo_point_stamped.hpp"
#include "geometry_msgs/msg/quaternion_stamped.hpp"
#include "geometry_msgs/msg/vector3_stamped.hpp"
#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/battery_state.hpp"
#include "sensor_msgs/msg/range.hpp"
#include "shared_memory_handler.hpp"
#include "std_msgs/msg/string.hpp"
#include "tf2/LinearMath/Quaternion.h"
#include "utils.h"
#include "vitro_exceptions.hpp"

/**
 *  ROS2 Node responsible for subscribing to a MQTT server to receive non-image
 * data from the drone.
 */
class DataPublishNode : public rclcpp::Node {
   public:
    DataPublishNode(std::shared_ptr<SharedMemoryHandler> data);
    void handle_position_mqtt_msg(mqtt::const_message_ptr msg);
    void handle_orientation_mqtt_msg(mqtt::const_message_ptr msg);
    void handle_gimbal_orientation_mqtt_msg(mqtt::const_message_ptr msg);
    void handle_linear_velocity_mqtt_msg(mqtt::const_message_ptr msg);
    void handle_ultrasonic_height_mqtt_msg(mqtt::const_message_ptr msg);
    void handle_log_mqtt_msg(mqtt::const_message_ptr msg);
    void handle_battery_mqtt_msg(mqtt::const_message_ptr msg);

    void publish_position(double latitude, double longitude, double altitude, uint64_t &stamp_nsecs);
    void publish_linear_velocity(double x, double y, double z, uint64_t &stamp_nsecs);
    void publish_orientation(double roll, double pitch, double yaw, uint64_t &stamp_nsecs);
    void publish_gimbal_orientation(double roll, double pitch, double yaw, uint64_t &stamp_nsecs);
    void publish_ultrasonic_height(double height, uint64_t &stamp_nsecs);
    void publish_log(std::string log_level, std::string log_topic, std::string log_message);
    void publish_battery(long battery, uint64_t &stamp_nsecs);

   private:
    vitro::Drone drone_;

    // Shared data between nodes
    std::shared_ptr<SharedMemoryHandler> common_data_;

    // Publishers
    std::shared_ptr<rclcpp::Publisher<geographic_msgs::msg::GeoPointStamped>> position_pub_;
    std::shared_ptr<rclcpp::Publisher<geometry_msgs::msg::Vector3Stamped>> speed_pub_;
    std::shared_ptr<rclcpp::Publisher<geometry_msgs::msg::QuaternionStamped>> attitude_pub_;
    std::shared_ptr<rclcpp::Publisher<geometry_msgs::msg::QuaternionStamped>> gimbal_attitude_pub_;
    std::shared_ptr<rclcpp::Publisher<sensor_msgs::msg::Range>> ultrasonic_height_pub_;
    std::shared_ptr<rclcpp::Publisher<sensor_msgs::msg::BatteryState>> battery_pub_;

    // Msg containers, for memory optimization
    geographic_msgs::msg::GeoPointStamped position_msg_;
    geometry_msgs::msg::Vector3Stamped speed_msg_;
    geometry_msgs::msg::QuaternionStamped attitude_msg_;
    geometry_msgs::msg::QuaternionStamped gimbal_attitude_msg_;
    sensor_msgs::msg::Range ultrasonic_height_msg_;
    sensor_msgs::msg::BatteryState battery_msg_;

    // Mqtt
    std::vector<std::string> mqtt_topics_;
    std::unique_ptr<vitro::GenericMqttClient> cli_position_;
    std::unique_ptr<vitro::GenericMqttClient> cli_orientation_;
    std::unique_ptr<vitro::GenericMqttClient> cli_linear_velocity_;
    std::unique_ptr<vitro::GenericMqttClient> cli_gimbal_orientation_;
    std::unique_ptr<vitro::GenericMqttClient> cli_ultrasonic_height_;
    std::unique_ptr<vitro::GenericMqttClient> cli_log_;
    std::unique_ptr<vitro::GenericMqttClient> cli_battery_;
};
