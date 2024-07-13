#!/bin/bash

# Step 0: Install Python and pip
echo "Installing Python and pip..."
apt-get update
apt-get install -y python3 python3-pip

# Step 1: Install Docker
echo "Installing Docker..."
apt-get update
apt-get install -y \
    apt-transport-https \
    ca-certificates \
    curl \
    gnupg \
    lsb-release
curl -fsSL https://download.docker.com/linux/ubuntu/gpg | sudo gpg --dearmor -o /usr/share/keyrings/docker-archive-keyring.gpg
echo \
  "deb [arch=$(dpkg --print-architecture) signed-by=/usr/share/keyrings/docker-archive-keyring.gpg] https://download.docker.com/linux/ubuntu \
  $(lsb_release -cs) stable" | sudo tee /etc/apt/sources.list.d/docker.list > /dev/null
apt-get update
apt-get install -y docker-ce docker-ce-cli containerd.io

# Step 2: Set Docker daemon to run on startup
echo "Setting Docker to run on startup..."
systemctl enable docker

# Step 3: Install cron
echo "Installing cron..."
apt-get install -y cron

# Step 4: Add cron job for @reboot
systemctl enable cron
echo "Adding cron job for @reboot..."
(crontab -l 2>/dev/null; echo "@reboot echo 'cdcl' | sudo -S /home/cdcl/wearable-biosensors-ros2/pi_startup.sh") | crontab -

# Step 5: Allow user cdcl to run shutdown without sudo
echo "Updating sudoers file for user cdcl..."
echo "cdcl ALL=(ALL) NOPASSWD: /sbin/shutdown" | sudo tee /etc/sudoers.d/cdcl

usermod -aG docker cdcl

# Step 6: Clone the git repo
echo "Cloning the git repository..."
cd /home/cdcl
git clone https://github.com/JJ5421/wearable-biosensors-ros2.git

# Step 7: Make pi_startup.sh executable
echo "Making pi_startup.sh executable..."
chmod +x /home/cdcl/wearable-biosensors-ros2/pi_startup.sh

# Step 8: Change permissions for ros_bags
echo "Changing permissions for ros_bags..."
chmod 777 /home/cdcl/wearable-biosensors-ros2/ros_bags

# Step 9: Install gpiozero
echo "Installing gpiozero..."
pip3 install gpiozero

# Step 10: Build the Docker in cdcl-humble-jammy-biosensors (assuming build.sh exists)
echo "Building the Docker image..."
cd /home/cdcl/wearable-biosensors-ros2/cdcl-humble-jammy-biosensors
./build.sh

# Step 11: Setup auto wifi connection
apt install -y wpasupplicant
echo -e 'network={\n    ssid="Balloon"\n    psk="Firewire14"\n}' | sudo tee -a /etc/wpa_supplicant/wpa_supplicant.conf > /dev/null
systemctl enable wpa_supplicant

echo "Setup complete!"
