#!/bin/bash

# Replace with your WiFi SSID and password
SSID="Balloon"
PASSWORD="Firewire14"

# Create a wpa_supplicant configuration file
cat <<EOF > /etc/wpa_supplicant/wpa_supplicant.conf
ctrl_interface=DIR=/var/run/wpa_supplicant GROUP=netdev
update_config=1
country=US

network={
    ssid="$SSID"
    psk="$PASSWORD"
}
EOF

# Bring up the WiFi interface and connect
wpa_supplicant -B -i wlan0 -c /etc/wpa_supplicant/wpa_supplicant.conf
dhclient wlan0

# After connecting, run the startup script
#exec /home/cdcl/startup_script.sh
