cmake_minimum_required(VERSION 3.20)
project(cpp_pubsub)

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()



# camera test   
include_directories(/workspaces/workspace/MVS/include)
link_directories("/workspaces/workspace/MVS/lib/aarch64")

link_libraries("/workspaces/workspace/MVS/lib/aarch64/libMvCameraControl.so")

add_executable(camera_tester ./src/camera.cpp)

target_link_libraries(camera_tester -lpthread -luuid -lMvCameraControl)
target_link_libraries(camera_tester libMvCameraControl.so)





#[[find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)

add_executable(talker src/publisher_member_function.cpp)
ament_target_dependencies(talker rclcpp std_msgs)

add_executable(listener src/subscriber_member_function.cpp)
ament_target_dependencies(listener rclcpp std_msgs)



install(TARGETS
  talker
  listener
  DESTINATION lib/${PROJECT_NAME})


ament_package()]]