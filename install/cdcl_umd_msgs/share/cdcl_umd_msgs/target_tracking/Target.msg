# everyone that the spot sees has one of these messages
# - we measure the position of the person in the color camera frame
# - we measure the distance to their chest in the color camera frame


# don't need a custom msg for this
geometry_msgs/Vector3 position

# distance to the targets's left and right lungs in meters in color camera frame
float64 left_lung  # distnace in meters
float64 right_lung  # distance in meters
float64 face  # intensity in W/m^2

# position of "keypoints" from YOLOv8 pose in camera optical frame (pixel coordinates)
Point2D[] keypoints

# features and feature descriptors for helping with data association
float64[] features
float64[] feature_descriptors


int64 NOSE=0
int64 LEFT_EYE=1
int64 RIGHT_EYE=2
int64 LEFT_EAR=3
int64 RIGHT_EAR=4
int64 LEFT_SHOULDER=5
int64 RIGHT_SHOULDER=6
int64 LEFT_ELBOW=7
int64 RIGHT_ELBOW=8
int64 LEFT_WRIST=9
int64 RIGHT_WRIST=10
int64 LEFT_HIP=11
int64 RIGHT_HIP=12
int64 LEFT_KNEE=13
int64 RIGHT_KNEE=14
int64 LEFT_ANKLE=15
int64 RIGHT_ANKLE=16