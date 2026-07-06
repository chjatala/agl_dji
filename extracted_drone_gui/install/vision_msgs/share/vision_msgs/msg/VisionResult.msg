# VisionResult.msg
# A message to hold a single vision recognition result

# Array of positions to decode point, (oriented) bounding box or segmentation
geometry_msgs/Point[] points

# Optional: Confidence value
float32 confidence

# Optional: Additional Information i.e. Text
string additional_info