string FLIGHT_STATE_INIT="init"
string CTRL_MODE_MANUAL="manual"
string CTRL_MODE_AUTO="auto"

std_msgs/Header header
string drone_id
string flight_state
string ctrl_mode
string cam_state
string nav_state
string mission_state
string pil_state
bool armed
float32 battery_remain
float32 battery_voltage
