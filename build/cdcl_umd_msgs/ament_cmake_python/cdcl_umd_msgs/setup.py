from setuptools import find_packages
from setuptools import setup

setup(
    name='cdcl_umd_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('cdcl_umd_msgs', 'cdcl_umd_msgs.*')),
)
