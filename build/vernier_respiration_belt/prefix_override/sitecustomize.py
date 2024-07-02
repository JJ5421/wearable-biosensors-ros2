import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/jj/wearable-biosensors-ros2/install/vernier_respiration_belt'
