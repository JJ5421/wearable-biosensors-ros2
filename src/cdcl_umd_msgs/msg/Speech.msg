# time stamp and frame id of microphone
std_msgs/Header header

# the raw audio in signed 16-bit PCM format
int16[] raw_audio

# text transcript
string transcript

# the direction of the person speaking in the microphone frame
geometry_msgs/Pose doa