**1. Requirement**

please expand the swipe memory at least 3GB when build the Docker image when compiling on the Jetson platform and Mac OS. Because the it builds the ROS2 from source code, so consuming huge memory. Run out of memory will raise the internal error. If encounter the error, please restart the docker and build the image again.

The vscode configuration file suit the environment in the Docker container.

**2. Support**

The dockerfile has been tested on the following platform:

Mac OS (Apple chip and Intel chip)

Windows 10/11

Jetson Xavier NX/TX2

