
#ifndef __GENERIC_MQTT_CLIENT_HPP__
#define __GENERIC_MQTT_CLIENT_HPP__

#include <mqtt/async_client.h>
#include <mqtt/will_options.h>

#include <chrono>
#include <iostream>
#include <memory>

namespace vitro {

class action_listener : public virtual mqtt::iaction_listener {
    std::string name_;

    void on_failure(const mqtt::token& tok) override {
        std::cout << name_ << " failure";
        if (tok.get_message_id() != 0) std::cout << " for token: [" << tok.get_message_id() << "]" << std::endl;
        std::cout << std::endl;
    }

    void on_success(const mqtt::token& tok) override {
        std::cout << name_ << " success";
        if (tok.get_message_id() != 0) std::cout << " for token: [" << tok.get_message_id() << "]" << std::endl;
        auto top = tok.get_topics();
        if (top && !top->empty()) std::cout << "\ttoken topic: '" << (*top)[0] << "', ..." << std::endl;
        std::cout << std::endl;
    }

   public:
    action_listener(const std::string& name) : name_(name) {}
};

class Callback : public virtual mqtt::callback,
                 public virtual mqtt::iaction_listener

{
    // Counter for the number of connection retries
    // the QOS needs to be modifiable
    
    int nretry_;
    // The MQTT client
    mqtt::async_client& cli_;
    // Options to use if we need to reconnect
    mqtt::connect_options& connOpts_;

    action_listener subListener_;

    // This deomonstrates manually reconnecting to the broker by calling
    // connect() again. This is a possibility for an application that keeps
    // a copy of it's original connect_options, or if the app wants to
    // reconnect with different options.
    // Another way this can be done manually, if using the same options, is
    // to just call the async_client::reconnect() method.
    void reconnect() {
        std::this_thread::sleep_for(std::chrono::milliseconds(2500));
        try {
            cli_.connect(connOpts_, nullptr, *this);
        } catch (const mqtt::exception& exc) {
            std::cerr << "Error: " << exc.what() << std::endl;
            exit(1);
        }
    }

    // Re-connection failure
    void on_failure(const mqtt::token& tok) override {
        std::cout << "Connection attempt failed" << std::endl;
        if (++nretry_ > 5) exit(1);
        reconnect();
    }

    // (Re)connection success
    // Either this or connected() can be used for callbacks.
    void on_success(const mqtt::token& tok) override {}


    // (Re)connection success
    void connected(const std::string& cause) override {
        std::cout << "\nConnection success" << std::endl;
        cli_.subscribe(topic, QOS, nullptr, subListener_);
    }

    // Callback for when the connection is lost.
    // This will initiate the attempt to manually reconnect.
    void connection_lost(const std::string& cause) override {
        std::cout << "\nConnection lost" << std::endl;
        if (!cause.empty()) std::cout << "\tcause: " << cause << std::endl;

        std::cout << "Reconnecting..." << std::endl;
        nretry_ = 0;
        reconnect();
    }

    // Callback for when a message arrives.
    void message_arrived(mqtt::const_message_ptr msg) override { _callback_func(msg); }

    void delivery_complete(mqtt::delivery_token_ptr token) override {}

    

   public:
    Callback(mqtt::async_client& cli, mqtt::connect_options& connOpts, std::string topic,
             std::function<void(mqtt::const_message_ptr)> callback_func)
        : nretry_(0),
          cli_(cli),
          connOpts_(connOpts),
          subListener_("Subscription"),
          topic(topic),
          _callback_func(std::move(callback_func)) {}
    
    int QOS = 0;
    

   private:
    std::string topic;
    std::function<void(mqtt::const_message_ptr)> _callback_func;
};

class GenericMqttClient {
   public:
    GenericMqttClient(std::string server_uri, std::string name, int level=0);
    GenericMqttClient(std::string server_uri, std::string name, std::string topic,
                      std::function<void(mqtt::const_message_ptr)> callback, int level=0);
    int connect();
    int disconnect();
    void publish(mqtt::message_ptr msg);
    void set_connect_options();
    void publish_last_will_payload(std::string payload);
    ~GenericMqttClient();
    int QOS;

   private:
    std::string client_name;
    std::string server;
    std::string topic;
    std::shared_ptr<mqtt::async_client> cli;
    std::unique_ptr<Callback> generic_callback;
    std::function<void(mqtt::const_message_ptr)> _callback_func;
    mqtt::connect_options connectOpts;
    
};

}  // namespace vitro

#endif  //__GENERIC_MQTT_CLIENT_HPP__