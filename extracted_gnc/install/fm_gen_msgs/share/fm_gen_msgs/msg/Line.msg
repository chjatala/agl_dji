# Give a meaningful name to the line, e.g., GroundPlant, VerticalRack
string line_type
# certainty of the detection from 1 to 100, set to 255 if no information
# available
uint8 certainty
# x1/y1/x2/y2 coordinates of the two points define one side of the detection
float32[] line_1
# for another side
float32[] line_2
# the center line
float32[] line_c
