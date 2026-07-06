# RangeArray Message
# This message type represents an array of range measurements between a specific tag
# and multiple anchors, including the tag's position and unique identifier.

# Header Information
std_msgs/Header header     # Standard metadata for higher-level stamped data types

# Tag Details
string tagid               # A unique identifier for the tag (e.g., "1", "2", "3", etc.)

geometry_msgs/Point tag_position # The (x,y,z) position of the tag in the body frame (in meters)

# Range Measurements
Range[] ranges             # An array of Range messages, one for each anchor a range is measured to
