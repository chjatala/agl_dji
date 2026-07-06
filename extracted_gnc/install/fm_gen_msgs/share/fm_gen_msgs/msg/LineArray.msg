std_msgs/Header header
# number of detections in the img
uint8 num_detection
# camera id (reserved for future application)
string camera_id
# time stamp of the image
float64 time_captured
# an array of all lines detected
Line[] lines
