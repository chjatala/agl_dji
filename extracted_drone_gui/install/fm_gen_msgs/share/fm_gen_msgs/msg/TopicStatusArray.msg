# values can be negative ?
std_msgs/Header header
# Integer which indicates status of the monitored topics at the moment
uint32 general_status
# Sum of general_status since the last 'good' topics
uint32 status_sum
# Array of individual status messages, one for each monitored topic
TopicStatus[] topic_array
