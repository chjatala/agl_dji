# This message holds the status of diagnostic for SW/HW component

# Possible levels of operations.

int8 OK=0
int8 WARN=3
int8 ERROR=5
int8 STALE=7

# time of the status
std_msgs/Header header

# Level of operation enumerated above.
int8 level

# A description of who is reporting this status.
string diagnoiser_name

# A description of the status.
string message

# A component unique string.
string component_id

# number of status (to make it easier to process the msg)
uint8 num_status

# An array of values associated with the status.
KeyValue[] values

