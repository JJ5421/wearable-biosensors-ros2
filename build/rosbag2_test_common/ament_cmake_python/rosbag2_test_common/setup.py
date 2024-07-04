from setuptools import find_packages
from setuptools import setup

setup(
    name='rosbag2_test_common',
    version='0.28.0',
    packages=find_packages(
        include=('rosbag2_test_common', 'rosbag2_test_common.*')),
)
