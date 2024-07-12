# syntax=docker/dockerfile:1
#FROM cdcl:humble-jammy

FROM ros:humble-ros-base-jammy

LABEL maintainer="Zach Bortoff <zbortoff@umd.edu>"

# Before executing any `apt` commands, it is necessary to run this command to avoid `apt` from prompting the user for
# inputs, thereby stalling the build.
ARG DEBIAN_FRONTEND=noninteractive

# this argument must be passed in by the user at build-time. It is their ssh public key
ARG SSH_PUBLIC_KEY

# Setup Locale
RUN apt update -y && \
    apt install -y software-properties-common curl gnupg2 lsb-release locales && \
    locale-gen en_US en_US.UTF-8 && \
    update-locale LC_ALL=en_US.UTF-8 LANG=en_US.UTF-8 && \
    export LANG=en_US.UTF-8

# <INSTALL networking tools>
# - iproute2 has ```tc``` support
# - iperf3 can perform bandwidth tests and measure jitter, # packets dropped, # retries to send over TCP, etc.
# - net-tools has ```ifconfig```
# - iputils-ping has ```ping```
# - openssh-server has the ```ssh``` server code so we can ssh into and rsync into this docker container (this won't
#   strictly be necessary in the field, because most likely we will mount a volume to get the important data, in which
#   case, as long as the host machine has openssh-server and rsync, we will be fine...
# - rsync has ```rsync``` (who would have thought)
RUN apt install -y iproute2 iperf3 net-tools iputils-ping openssh-server rsync
# </INSTALL networking tools>

# <Set up the SSH server>
# - we need to setup the SSH server so we can ssh into and rsync this docker container
# See: https://www.howtogeek.com/devops/how-to-ssh-into-a-docker-container/
RUN sed -i 's/PermitRootLogin prohibit-password/PermitRootLogin yes/' /etc/ssh/sshd_config

# add a user named "cdcl" and add it to the "sudo" group
RUN useradd -ms /bin/bash cdcl && usermod -aG sudo cdcl

# change the password of the "cdcl" user to "cdcl
RUN echo "cdcl:cdcl" | chpasswd

# Copy the local key
RUN mkdir -p /home/cdcl/.ssh/
RUN touch /home/cdcl/.ssh/authorized_keys
RUN chown -R cdcl:cdcl /home/cdcl/
RUN chmod 600 /home/cdcl/.ssh/authorized_keys
RUN echo "${SSH_PUBLIC_KEY}" | cat > /home/cdcl/.ssh/authorized_keys
# </Set up the SSH server>


USER root
SHELL ["/bin/bash", "-c"]

ARG ROS_DISTRO=humble
ENV ROS_DISTRO=$ROS_DISTRO
ARG INSTALL_PACKAGE=base

SHELL ["/bin/bash", "-o", "pipefail", "-c"]
RUN DEBIAN_FRONTEND=noninteractive apt-get update -q && \
    apt-get update -q && \
    apt-get install -yq --no-install-recommends \
    curl \
    python3-pip \
    python-is-python3 \
    python3-argcomplete \
    python3-colcon-common-extensions \
    python3-colcon-mixin \
    python3-pytest-cov \
    python3-rosdep \
    libpython3-dev \
    python3-vcstool \
    ros-humble-tl-expected \
    bluez \
    gcc \
    make \
    python3-dev \
    python3-setuptools \
    python3-rpi.gpio \
    cron \
    wpasupplicant \
    dbus \
    isc-dhcp-client \
    bluetooth && \
    rm -rf /var/lib/apt/lists/*

RUN source "/opt/ros/${ROS_DISTRO}/setup.bash"

RUN pip install \
    open-e4-client \
    pexpect \
    websocket-client && \
    pip install \
    godirect \
    psutil \
    bleak

# Manual install of pigpio to use pigpiodaemon
USER root
RUN cd /tmp && \
    git clone https://github.com/joan2937/pigpio.git && \
    cd pigpio && \
    make && \
    make install && \
    pip install pigpio

# build wearable biosensors ros2 packages
RUN cd /home/cdcl/ && \
    git clone https://github.com/JJ5421/wearable-biosensors-ros2.git && \
    source /opt/ros/humble/setup.bash && \
    cd /home/cdcl/wearable-biosensors-ros2/ && \
    colcon build --symlink-install

# add scripts
RUN echo "alias cb='colcon build --symlink-install'">> /home/cdcl/.bashrc && \
    echo "alias sr2='source /opt/ros/humble/setup.bash'">> /home/cdcl/.bashrc && \
    echo "alias sri='source install/setup.bash'">> /home/cdcl/.bashrc && \
    echo -e 'source /opt/ros/humble/setup.bash' >> /home/cdcl/.bashrc && \
    echo "source /home/cdcl/wearable-biosensors-ros2/install/setup.bash" >> /home/cdcl/.bashrc && \
    echo "export ROS_DOMAIN_ID=0" >>/home/cdcl/.bashrc  

# Add the required sudo configurations for user cdcl
RUN echo 'cdcl ALL=(ALL) NOPASSWD: /sbin/shutdown' | tee -a /etc/sudoers \
    && echo 'cdcl ALL=(ALL) NOPASSWD: /usr/local/bin/pigpiod' | tee -a /etc/sudoers
RUN chmod -R 777 /home/cdcl/wearable-biosensors-ros2/ros_bags/
RUN usermod -aG bluetooth cdcl

# Copy the startup and WiFi connection scripts into the image
COPY startup_script.sh /home/cdcl/startup_script.sh
COPY wifi_connect.sh /home/cdcl/wifi_connect.sh

# Ensure the scripts have executable permissions
RUN chmod +x /home/cdcl/startup_script.sh /home/cdcl/wifi_connect.sh

# Make the "cdcl" user's working director "/home/cdcl"
#RUN chown -R cdcl /home/cdcl/
RUN cd /home/cdcl/wearable-biosensors-ros2
USER cdcl

WORKDIR //home/cdcl/wearable-biosensors-ros2

# Set the initial ENTRYPOINT to start SSH service and then launch a shell
ENTRYPOINT ["bash", "-c", "echo 'cdcl' | sudo -S service ssh start && /bin/bash /home/cdcl/startup_script.sh & /bin/bash"]

# Set the startup script to run on container start
#CMD ["/bin/bash", "-c", "/home/cdcl/startup_script.sh"]