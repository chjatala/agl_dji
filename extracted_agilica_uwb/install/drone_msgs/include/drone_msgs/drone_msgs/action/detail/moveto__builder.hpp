// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from drone_msgs:action/Moveto.idl
// generated code does not contain a copyright notice

#ifndef DRONE_MSGS__ACTION__DETAIL__MOVETO__BUILDER_HPP_
#define DRONE_MSGS__ACTION__DETAIL__MOVETO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "drone_msgs/action/detail/moveto__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace drone_msgs
{

namespace action
{

namespace builder
{

class Init_Moveto_Goal_waypoints
{
public:
  Init_Moveto_Goal_waypoints()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::drone_msgs::action::Moveto_Goal waypoints(::drone_msgs::action::Moveto_Goal::_waypoints_type arg)
  {
    msg_.waypoints = std::move(arg);
    return std::move(msg_);
  }

private:
  ::drone_msgs::action::Moveto_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::drone_msgs::action::Moveto_Goal>()
{
  return drone_msgs::action::builder::Init_Moveto_Goal_waypoints();
}

}  // namespace drone_msgs


namespace drone_msgs
{

namespace action
{

namespace builder
{

class Init_Moveto_Result_status
{
public:
  Init_Moveto_Result_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::drone_msgs::action::Moveto_Result status(::drone_msgs::action::Moveto_Result::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::drone_msgs::action::Moveto_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::drone_msgs::action::Moveto_Result>()
{
  return drone_msgs::action::builder::Init_Moveto_Result_status();
}

}  // namespace drone_msgs


namespace drone_msgs
{

namespace action
{

namespace builder
{

class Init_Moveto_Feedback_err_bar
{
public:
  explicit Init_Moveto_Feedback_err_bar(::drone_msgs::action::Moveto_Feedback & msg)
  : msg_(msg)
  {}
  ::drone_msgs::action::Moveto_Feedback err_bar(::drone_msgs::action::Moveto_Feedback::_err_bar_type arg)
  {
    msg_.err_bar = std::move(arg);
    return std::move(msg_);
  }

private:
  ::drone_msgs::action::Moveto_Feedback msg_;
};

class Init_Moveto_Feedback_eta
{
public:
  explicit Init_Moveto_Feedback_eta(::drone_msgs::action::Moveto_Feedback & msg)
  : msg_(msg)
  {}
  Init_Moveto_Feedback_err_bar eta(::drone_msgs::action::Moveto_Feedback::_eta_type arg)
  {
    msg_.eta = std::move(arg);
    return Init_Moveto_Feedback_err_bar(msg_);
  }

private:
  ::drone_msgs::action::Moveto_Feedback msg_;
};

class Init_Moveto_Feedback_dist_to_go
{
public:
  Init_Moveto_Feedback_dist_to_go()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Moveto_Feedback_eta dist_to_go(::drone_msgs::action::Moveto_Feedback::_dist_to_go_type arg)
  {
    msg_.dist_to_go = std::move(arg);
    return Init_Moveto_Feedback_eta(msg_);
  }

private:
  ::drone_msgs::action::Moveto_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::drone_msgs::action::Moveto_Feedback>()
{
  return drone_msgs::action::builder::Init_Moveto_Feedback_dist_to_go();
}

}  // namespace drone_msgs


namespace drone_msgs
{

namespace action
{

namespace builder
{

class Init_Moveto_SendGoal_Request_goal
{
public:
  explicit Init_Moveto_SendGoal_Request_goal(::drone_msgs::action::Moveto_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::drone_msgs::action::Moveto_SendGoal_Request goal(::drone_msgs::action::Moveto_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::drone_msgs::action::Moveto_SendGoal_Request msg_;
};

class Init_Moveto_SendGoal_Request_goal_id
{
public:
  Init_Moveto_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Moveto_SendGoal_Request_goal goal_id(::drone_msgs::action::Moveto_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Moveto_SendGoal_Request_goal(msg_);
  }

private:
  ::drone_msgs::action::Moveto_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::drone_msgs::action::Moveto_SendGoal_Request>()
{
  return drone_msgs::action::builder::Init_Moveto_SendGoal_Request_goal_id();
}

}  // namespace drone_msgs


namespace drone_msgs
{

namespace action
{

namespace builder
{

class Init_Moveto_SendGoal_Response_stamp
{
public:
  explicit Init_Moveto_SendGoal_Response_stamp(::drone_msgs::action::Moveto_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::drone_msgs::action::Moveto_SendGoal_Response stamp(::drone_msgs::action::Moveto_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::drone_msgs::action::Moveto_SendGoal_Response msg_;
};

class Init_Moveto_SendGoal_Response_accepted
{
public:
  Init_Moveto_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Moveto_SendGoal_Response_stamp accepted(::drone_msgs::action::Moveto_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Moveto_SendGoal_Response_stamp(msg_);
  }

private:
  ::drone_msgs::action::Moveto_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::drone_msgs::action::Moveto_SendGoal_Response>()
{
  return drone_msgs::action::builder::Init_Moveto_SendGoal_Response_accepted();
}

}  // namespace drone_msgs


namespace drone_msgs
{

namespace action
{

namespace builder
{

class Init_Moveto_GetResult_Request_goal_id
{
public:
  Init_Moveto_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::drone_msgs::action::Moveto_GetResult_Request goal_id(::drone_msgs::action::Moveto_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::drone_msgs::action::Moveto_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::drone_msgs::action::Moveto_GetResult_Request>()
{
  return drone_msgs::action::builder::Init_Moveto_GetResult_Request_goal_id();
}

}  // namespace drone_msgs


namespace drone_msgs
{

namespace action
{

namespace builder
{

class Init_Moveto_GetResult_Response_result
{
public:
  explicit Init_Moveto_GetResult_Response_result(::drone_msgs::action::Moveto_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::drone_msgs::action::Moveto_GetResult_Response result(::drone_msgs::action::Moveto_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::drone_msgs::action::Moveto_GetResult_Response msg_;
};

class Init_Moveto_GetResult_Response_status
{
public:
  Init_Moveto_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Moveto_GetResult_Response_result status(::drone_msgs::action::Moveto_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Moveto_GetResult_Response_result(msg_);
  }

private:
  ::drone_msgs::action::Moveto_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::drone_msgs::action::Moveto_GetResult_Response>()
{
  return drone_msgs::action::builder::Init_Moveto_GetResult_Response_status();
}

}  // namespace drone_msgs


namespace drone_msgs
{

namespace action
{

namespace builder
{

class Init_Moveto_FeedbackMessage_feedback
{
public:
  explicit Init_Moveto_FeedbackMessage_feedback(::drone_msgs::action::Moveto_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::drone_msgs::action::Moveto_FeedbackMessage feedback(::drone_msgs::action::Moveto_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::drone_msgs::action::Moveto_FeedbackMessage msg_;
};

class Init_Moveto_FeedbackMessage_goal_id
{
public:
  Init_Moveto_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Moveto_FeedbackMessage_feedback goal_id(::drone_msgs::action::Moveto_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Moveto_FeedbackMessage_feedback(msg_);
  }

private:
  ::drone_msgs::action::Moveto_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::drone_msgs::action::Moveto_FeedbackMessage>()
{
  return drone_msgs::action::builder::Init_Moveto_FeedbackMessage_goal_id();
}

}  // namespace drone_msgs

#endif  // DRONE_MSGS__ACTION__DETAIL__MOVETO__BUILDER_HPP_
