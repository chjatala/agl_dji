#include <mqtt/async_client.h>

#include <chrono>
#include <functional>
#include <memory>
#include <nlohmann/json.hpp>
#include <string>

#include "generic_mqtt_client.hpp"
#include "rclcpp/rclcpp.hpp"

#include "utils.h"
#include "vitro_exceptions.hpp"
#include "std_srvs/srv/trigger.hpp"


/**
 * ROS2 Node responsible for receiving the command data from the Vitro framework
 * and publising it to a MQTT server to control the docking station
 */
class DockingStationHandlerNode : public rclcpp::Node {

   public:
    DockingStationHandlerNode();

    void trigger_remote_on(const std::shared_ptr<std_srvs::srv::Trigger::Request> request,
                           std::shared_ptr<std_srvs::srv::Trigger::Response> response);

    void trigger_remote_off(const std::shared_ptr<std_srvs::srv::Trigger::Request> request,
                           std::shared_ptr<std_srvs::srv::Trigger::Response> response);

    void trigger_canopy_open(const std::shared_ptr<std_srvs::srv::Trigger::Request> request,
                           std::shared_ptr<std_srvs::srv::Trigger::Response> response);

    void trigger_canopy_close(const std::shared_ptr<std_srvs::srv::Trigger::Request> request,
                           std::shared_ptr<std_srvs::srv::Trigger::Response> response);

    void trigger_bars_open(const std::shared_ptr<std_srvs::srv::Trigger::Request> request,
                           std::shared_ptr<std_srvs::srv::Trigger::Response> response);

    void trigger_bars_close(const std::shared_ptr<std_srvs::srv::Trigger::Request> request,
                           std::shared_ptr<std_srvs::srv::Trigger::Response> response);

    void trigger_charging_start(const std::shared_ptr<std_srvs::srv::Trigger::Request> request,
                           std::shared_ptr<std_srvs::srv::Trigger::Response> response);

    void trigger_charging_stop(const std::shared_ptr<std_srvs::srv::Trigger::Request> request,
                           std::shared_ptr<std_srvs::srv::Trigger::Response> response);

    void trigger_battery_on(const std::shared_ptr<std_srvs::srv::Trigger::Request> request,
                           std::shared_ptr<std_srvs::srv::Trigger::Response> response);

    void trigger_battery_off(const std::shared_ptr<std_srvs::srv::Trigger::Request> request,
                           std::shared_ptr<std_srvs::srv::Trigger::Response> response);
    


   private:

    // JSON structure
    nlohmann::json base_docking_msg_;

    // mutex to protect common memory
    std::mutex msg_lock_;

    // Topics
    std::string docking_stn_mqtt_pub_topic_;

    // MQTT Clients
    std::shared_ptr<vitro::GenericMqttClient> docking_stn_cli_;

    // Service parameters

    std::vector<double> canopy_codes_ ;
    std::vector<double> remote_codes_ ;
    std::vector<double> charging_bar_codes_;
    std::vector<double> charging_codes_;
    std::vector<double> battery_codes_;

    // Canopy
    rclcpp::Service<std_srvs::srv::Trigger>::SharedPtr trigger_canopy_open_service_;
    rclcpp::Service<std_srvs::srv::Trigger>::SharedPtr trigger_canopy_close_service_;

    // Charging bars
    rclcpp::Service<std_srvs::srv::Trigger>::SharedPtr trigger_bars_open_service_;
    rclcpp::Service<std_srvs::srv::Trigger>::SharedPtr trigger_bars_close_service_;

    // Charging
    rclcpp::Service<std_srvs::srv::Trigger>::SharedPtr trigger_charging_start_service_;
    rclcpp::Service<std_srvs::srv::Trigger>::SharedPtr trigger_charging_stop_service_;

    // Remote
    rclcpp::Service<std_srvs::srv::Trigger>::SharedPtr trigger_remote_on_service_;
    rclcpp::Service<std_srvs::srv::Trigger>::SharedPtr trigger_remote_off_service_;

    // Battery ?
    rclcpp::Service<std_srvs::srv::Trigger>::SharedPtr trigger_battery_on_service_;
    rclcpp::Service<std_srvs::srv::Trigger>::SharedPtr trigger_battery_off_service_;



};