# Anchor Range Message
# This message type represents the information related to the distance measurement
# between a tag and an anchor, including position, validity, and diagnostic details.

# Timestamp of the measurement
builtin_interfaces/Time stamp

# Anchor Details
string anchorid            # A identifier for the anchor (e.g., "0x042D", "0x0417", "0x00CC", etc.)
string listenerid         # ID of the listener
geometry_msgs/Point anchor_position # The (x,y,z) position of the anchor in the reference frame (in meters)

# Range Information
bool valid_range           # Flag indicating whether the measured range is valid (true if valid)
float32 distance           # Distance between the tag and the anchor (in meters). by default it is single-side twr

# Signal Diagnostics
Diagnostics diagnostics    # Signal-specific diagnostic data, as defined in the Diagnostics message
