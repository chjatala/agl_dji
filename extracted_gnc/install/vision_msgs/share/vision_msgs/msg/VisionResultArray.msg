# VisionResultArray.msg
# A message to hold an array of vision detection results and link to the original image via header

# Header for metadata (timestamps, frame_id, etc.)
std_msgs/Header header

# An array of vision detection results
VisionResult[] results

# Debug purposes: Visualization image (default not active), can be linked to image by header
sensor_msgs/Image visualization_image