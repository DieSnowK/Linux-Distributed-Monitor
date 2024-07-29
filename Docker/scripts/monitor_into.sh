#!/usr/bin/env bash

# Allow the local root user to access the X server
xhost +local:root 1>/dev/null 2>&1

docker exec \
    -u root \
    -it linux_monitor \
    /bin/bash

# Revoke the local root's access to Server X
xhost -local:root 1>/dev/null 2>&1