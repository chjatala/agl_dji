#include <mqtt/async_client.h>

#include <chrono>
#include <functional>
#include <memory>
#include <nlohmann/json.hpp>
#include <string>

#include "generic_mqtt_client.hpp"
#include "geometry_msgs/msg/quaternion.hpp"
#include "mavros_msgs/msg/global_position_target.hpp"
#include "rclcpp/rclcpp.hpp"
#include "shared_memory_handler.hpp"
#include "std_msgs/msg/string.hpp"
#include "std_srvs/srv/trigger.hpp"
#include "std_srvs/srv/set_bool.hpp"
#include "tf2/LinearMath/Transform.h"
#include "tf2/convert.h"
#include "utils.h"
#include "vitro_exceptions.hpp"
#include "vitro_ros_definitions/srv/set_gimball_angle.hpp"
#include "vitro_ros_definitions/srv/set_video_settings.hpp"

/**
 * ROS2 Node responsible for receiving the command data from the VITRO framework
 * and publising it to a MQTT server.
 */
class CommandHandlerNode : public rclcpp::Node {
    enum State { ARM, LAND, TAKEOFF, MANUAL, HOLD };

   public:
    CommandHandlerNode(std::shared_ptr<SharedMemoryHandler> data);
    void subscribe_velocity_cmd(const mavros_msgs::msg::GlobalPositionTarget::SharedPtr msg);
    void subscribe_drone_cmd(const std_msgs::msg::String::SharedPtr msg);
    void set_gimball_angle(const std::shared_ptr<vitro_ros_definitions::srv::SetGimballAngle::Request> request,
                           std::shared_ptr<vitro_ros_definitions::srv::SetGimballAngle::Response> response);
    void save_photo(const std::shared_ptr<std_srvs::srv::Trigger::Request> request,
                    std::shared_ptr<std_srvs::srv::Trigger::Response> response);
    void record_video(const std::shared_ptr<std_srvs::srv::SetBool::Request> request,
                    std::shared_ptr<std_srvs::srv::SetBool::Response> response);

    void set_vertical_controller_vals(const mavros_msgs::msg::GlobalPositionTarget::SharedPtr msg,
                                      nlohmann::json& data);
    void set_roll_pitch_controller_vals(const mavros_msgs::msg::GlobalPositionTarget::SharedPtr msg,
                                        nlohmann::json& data);
    void set_yaw_controller_vals(const mavros_msgs::msg::GlobalPositionTarget::SharedPtr msg, nlohmann::json& data);
    void check_gimball_angle(double p, double speed);
    void get_gimbal_pitch(geometry_msgs::msg::QuaternionStamped &gimbal_attitude_msg, double &pitch);

    void set_video_settings(const std::shared_ptr<vitro_ros_definitions::srv::SetVideoSettings::Request> request,
                            std::shared_ptr<vitro_ros_definitions::srv::SetVideoSettings::Response> response);

    void control_automatic_navigation(const std::shared_ptr<std_srvs::srv::Trigger::Request> request,
                                      std::shared_ptr<std_srvs::srv::Trigger::Response> response, std::string key);

   private:
    // Shared data between nodes
    std::shared_ptr<SharedMemoryHandler> common_data_;

    // JSON structures keeping track of the controllers
    nlohmann::json controllers_;
    nlohmann::json gimbal_controllers_;

    // Topics
    std::string cmd_mqtt_pub_topic_;
    std::string joy_mqtt_pub_topic_;
    std::string gimbal_mqtt_pub_topic_;
    std::string photo_mqtt_pub_topic_;
    std::string video_settings_mqtt_pub_topic_;
    std::string auto_nav_mqtt_pub_topic_; 
    std::string video_mqtt_pub_topic_;

    // Subscribers
    std::shared_ptr<rclcpp::Subscription<mavros_msgs::msg::GlobalPositionTarget>> velocity_cmd_sub_;
    std::shared_ptr<rclcpp::Subscription<std_msgs::msg::String>> cmd_sub_;

    // MQTT Clients
    std::shared_ptr<vitro::GenericMqttClient> cmd_cli_;
    std::shared_ptr<vitro::GenericMqttClient> joy_cli_;
    std::shared_ptr<vitro::GenericMqttClient> gimbal_cli_;
    std::shared_ptr<vitro::GenericMqttClient> video_settings_cli_;
    std::shared_ptr<vitro::GenericMqttClient> photo_cli_;
    std::shared_ptr<vitro::GenericMqttClient> video_cli_;
    std::shared_ptr<vitro::GenericMqttClient> automatic_navigation_cli_;

    // Service parameters
    rclcpp::Service<vitro_ros_definitions::srv::SetGimballAngle>::SharedPtr gimball_service_;
    rclcpp::Service<vitro_ros_definitions::srv::SetVideoSettings>::SharedPtr video_setting_service_;
    rclcpp::Service<std_srvs::srv::Trigger>::SharedPtr photo_service_;
    rclcpp::Service<std_srvs::srv::Trigger>::SharedPtr enable_automatic_navigation_service_;
    rclcpp::Service<std_srvs::srv::Trigger>::SharedPtr disable_automatic_navigation_service_;
    rclcpp::Service<std_srvs::srv::SetBool>::SharedPtr video_service_;
    
    // Misc.
    uint8_t gimbal_timeout_;
    double gimbal_threshold_;
    uint8_t gimbal_error_cnt_;
    void gimbal_manoeuver();
    

    video_settings_holder video_settings_;
    bool recording_state_=false;

    // Dynamic parameters handler and callback
    rclcpp::node_interfaces::OnSetParametersCallbackHandle::SharedPtr dyn_params_handler_;
    rcl_interfaces::msg::SetParametersResult dynamic_parameters_callback(std::vector<rclcpp::Parameter> parameters);

    // Map to convert string commands into enum
    std::map<std::string, State> mapStringToState = {{"arm", State::ARM},
                                                     {"land", State::LAND},
                                                     {"takeoff", State::TAKEOFF},
                                                     {"manual", State::MANUAL},
                                                     {"hold", State::HOLD}};

    // parameter guard
    std::mutex param_lock_;
};
