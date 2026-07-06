// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from drone_msgs:action/AlignMarker.idl
// generated code does not contain a copyright notice

#ifndef DRONE_MSGS__ACTION__DETAIL__ALIGN_MARKER__BUILDER_HPP_
#define DRONE_MSGS__ACTION__DETAIL__ALIGN_MARKER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "drone_msgs/action/detail/align_marker__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace drone_msgs
{

namespace action
{

namespace builder
{

class Init_AlignMarker_Goal_distance
{
public:
  explicit Init_AlignMarker_Goal_distance(::drone_msgs::action::AlignMarker_Goal & msg)
  : msg_(msg)
  {}
  ::drone_msgs::action::AlignMarker_Goal distance(::drone_msgs::action::AlignMarker_Goal::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::drone_msgs::action::AlignMarker_Goal msg_;
};

class Init_AlignMarker_Goal_max_yaw_rate
{
public:
  explicit Init_AlignMarker_Goal_max_yaw_rate(::drone_msgs::action::AlignMarker_Goal & msg)
  : msg_(msg)
  {}
  Init_AlignMarker_Goal_distance max_yaw_rate(::drone_msgs::action::AlignMarker_Goal::_max_yaw_rate_type arg)
  {
    msg_.max_yaw_rate = std::move(arg);
    return Init_AlignMarker_Goal_distance(msg_);
  }

private:
  ::drone_msgs::action::AlignMarker_Goal msg_;
};

class Init_AlignMarker_Goal_max_vel
{
public:
  explicit Init_AlignMarker_Goal_max_vel(::drone_msgs::action::AlignMarker_Goal & msg)
  : msg_(msg)
  {}
  Init_AlignMarker_Goal_max_yaw_rate max_vel(::drone_msgs::action::AlignMarker_Goal::_max_vel_type arg)
  {
    msg_.max_vel = std::move(arg);
    return Init_AlignMarker_Goal_max_yaw_rate(msg_);
  }

private:
  ::drone_msgs::action::AlignMarker_Goal msg_;
};

class Init_AlignMarker_Goal_id
{
public:
  Init_AlignMarker_Goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AlignMarker_Goal_max_vel id(::drone_msgs::action::AlignMarker_Goal::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_AlignMarker_Goal_max_vel(msg_);
  }

private:
  ::drone_msgs::action::AlignMarker_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::drone_msgs::action::AlignMarker_Goal>()
{
  return drone_msgs::action::builder::Init_AlignMarker_Goal_id();
}

}  // namespace drone_msgs


namespace drone_msgs
{

namespace action
{

namespace builder
{

class Init_AlignMarker_Result_init_yaw
{
public:
  explicit Init_AlignMarker_Result_init_yaw(::drone_msgs::action::AlignMarker_Result & msg)
  : msg_(msg)
  {}
  ::drone_msgs::action::AlignMarker_Result init_yaw(::drone_msgs::action::AlignMarker_Result::_init_yaw_type arg)
  {
    msg_.init_yaw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::drone_msgs::action::AlignMarker_Result msg_;
};

class Init_AlignMarker_Result_init_pos
{
public:
  explicit Init_AlignMarker_Result_init_pos(::drone_msgs::action::AlignMarker_Result & msg)
  : msg_(msg)
  {}
  Init_AlignMarker_Result_init_yaw init_pos(::drone_msgs::action::AlignMarker_Result::_init_pos_type arg)
  {
    msg_.init_pos = std::move(arg);
    return Init_AlignMarker_Result_init_yaw(msg_);
  }

private:
  ::drone_msgs::action::AlignMarker_Result msg_;
};

class Init_AlignMarker_Result_status
{
public:
  Init_AlignMarker_Result_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AlignMarker_Result_init_pos status(::drone_msgs::action::AlignMarker_Result::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_AlignMarker_Result_init_pos(msg_);
  }

private:
  ::drone_msgs::action::AlignMarker_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::drone_msgs::action::AlignMarker_Result>()
{
  return drone_msgs::action::builder::Init_AlignMarker_Result_status();
}

}  // namespace drone_msgs


namespace drone_msgs
{

namespace action
{

namespace builder
{

class Init_AlignMarker_Feedback_target_pos
{
public:
  explicit Init_AlignMarker_Feedback_target_pos(::drone_msgs::action::AlignMarker_Feedback & msg)
  : msg_(msg)
  {}
  ::drone_msgs::action::AlignMarker_Feedback target_pos(::drone_msgs::action::AlignMarker_Feedback::_target_pos_type arg)
  {
    msg_.target_pos = std::move(arg);
    return std::move(msg_);
  }

private:
  ::drone_msgs::action::AlignMarker_Feedback msg_;
};

class Init_AlignMarker_Feedback_dist_to_go
{
public:
  Init_AlignMarker_Feedback_dist_to_go()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AlignMarker_Feedback_target_pos dist_to_go(::drone_msgs::action::AlignMarker_Feedback::_dist_to_go_type arg)
  {
    msg_.dist_to_go = std::move(arg);
    return Init_AlignMarker_Feedback_target_pos(msg_);
  }

private:
  ::drone_msgs::action::AlignMarker_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::drone_msgs::action::AlignMarker_Feedback>()
{
  return drone_msgs::action::builder::Init_AlignMarker_Feedback_dist_to_go();
}

}  // namespace drone_msgs


namespace drone_msgs
{

namespace action
{

namespace builder
{

class Init_AlignMarker_SendGoal_Request_goal
{
public:
  explicit Init_AlignMarker_SendGoal_Request_goal(::drone_msgs::action::AlignMarker_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::drone_msgs::action::AlignMarker_SendGoal_Request goal(::drone_msgs::action::AlignMarker_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::drone_msgs::action::AlignMarker_SendGoal_Request msg_;
};

class Init_AlignMarker_SendGoal_Request_goal_id
{
public:
  Init_AlignMarker_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AlignMarker_SendGoal_Request_goal goal_id(::drone_msgs::action::AlignMarker_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_AlignMarker_SendGoal_Request_goal(msg_);
  }

private:
  ::drone_msgs::action::AlignMarker_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::drone_msgs::action::AlignMarker_SendGoal_Request>()
{
  return drone_msgs::action::builder::Init_AlignMarker_SendGoal_Request_goal_id();
}

}  // namespace drone_msgs


namespace drone_msgs
{

namespace action
{

namespace builder
{

class Init_AlignMarker_SendGoal_Response_stamp
{
public:
  explicit Init_AlignMarker_SendGoal_Response_stamp(::drone_msgs::action::AlignMarker_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::drone_msgs::action::AlignMarker_SendGoal_Response stamp(::drone_msgs::action::AlignMarker_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::drone_msgs::action::AlignMarker_SendGoal_Response msg_;
};

class Init_AlignMarker_SendGoal_Response_accepted
{
public:
  Init_AlignMarker_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AlignMarker_SendGoal_Response_stamp accepted(::drone_msgs::action::AlignMarker_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_AlignMarker_SendGoal_Response_stamp(msg_);
  }

private:
  ::drone_msgs::action::AlignMarker_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::drone_msgs::action::AlignMarker_SendGoal_Response>()
{
  return drone_msgs::action::builder::Init_AlignMarker_SendGoal_Response_accepted();
}

}  // namespace drone_msgs


namespace drone_msgs
{

namespace action
{

namespace builder
{

class Init_AlignMarker_GetResult_Request_goal_id
{
public:
  Init_AlignMarker_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::drone_msgs::action::AlignMarker_GetResult_Request goal_id(::drone_msgs::action::AlignMarker_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::drone_msgs::action::AlignMarker_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::drone_msgs::action::AlignMarker_GetResult_Request>()
{
  return drone_msgs::action::builder::Init_AlignMarker_GetResult_Request_goal_id();
}

}  // namespace drone_msgs


namespace drone_msgs
{

namespace action
{

namespace builder
{

class Init_AlignMarker_GetResult_Response_result
{
public:
  explicit Init_AlignMarker_GetResult_Response_result(::drone_msgs::action::AlignMarker_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::drone_msgs::action::AlignMarker_GetResult_Response result(::drone_msgs::action::AlignMarker_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::drone_msgs::action::AlignMarker_GetResult_Response msg_;
};

class Init_AlignMarker_GetResult_Response_status
{
public:
  Init_AlignMarker_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AlignMarker_GetResult_Response_result status(::drone_msgs::action::AlignMarker_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_AlignMarker_GetResult_Response_result(msg_);
  }

private:
  ::drone_msgs::action::AlignMarker_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::drone_msgs::action::AlignMarker_GetResult_Response>()
{
  return drone_msgs::action::builder::Init_AlignMarker_GetResult_Response_status();
}

}  // namespace drone_msgs


namespace drone_msgs
{

namespace action
{

namespace builder
{

class Init_AlignMarker_FeedbackMessage_feedback
{
public:
  explicit Init_AlignMarker_FeedbackMessage_feedback(::drone_msgs::action::AlignMarker_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::drone_msgs::action::AlignMarker_FeedbackMessage feedback(::drone_msgs::action::AlignMarker_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::drone_msgs::action::AlignMarker_FeedbackMessage msg_;
};

class Init_AlignMarker_FeedbackMessage_goal_id
{
public:
  Init_AlignMarker_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AlignMarker_FeedbackMessage_feedback goal_id(::drone_msgs::action::AlignMarker_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_AlignMarker_FeedbackMessage_feedback(msg_);
  }

private:
  ::drone_msgs::action::AlignMarker_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::drone_msgs::action::AlignMarker_FeedbackMessage>()
{
  return drone_msgs::action::builder::Init_AlignMarker_FeedbackMessage_goal_id();
}

}  // namespace drone_msgs

#endif  // DRONE_MSGS__ACTION__DETAIL__ALIGN_MARKER__BUILDER_HPP_
