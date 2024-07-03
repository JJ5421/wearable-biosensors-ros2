# This message includes information relevant to the detection of AprilTags

# The header includes a time stamp allowing users to know the time between tag detections
std_msgs/Header header

# The tag_id is the number generated from identifying the april tag
int32 tag_id

# Latitude and Longitude are the location of the tag
float64 latitude
float64 longitude
