# A generic cmd msg for gen_line_follow control
# the x/y/z/yaw control targets are defined in the global frame, not
# in the drone body frame.

# some constant for ctrl type
# close loop pos control, will keep the drone at the *_tgt position
string POS_CLOSELOOP = "POS_CLOSELOOP"
# open loop speed control, will send a constant speed (*_tgt) command
string SPEED_OPENLOOP = "SPEED_OPENLOOP"

# to save the time stamp
std_msgs/Header header

float32 x_tgt 0.0
string x_type POS_CLOSELOOP

float32 y_tgt 0.0
string y_type POS_CLOSELOOP

float32 z_tgt 1.0
string z_type POS_CLOSELOOP

float32 yaw_tgt 0.0
string yaw_type POS_CLOSELOOP

# reserved for advanced setting (e.g., ctrl gain)
float64[] param
