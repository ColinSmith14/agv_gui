from setuptools import find_packages
from setuptools import setup

setup(
    name='amr_v4_msgs_srvs',
    version='0.0.0',
    packages=find_packages(
        include=('amr_v4_msgs_srvs', 'amr_v4_msgs_srvs.*')),
)
