cmake_minimum_required(VERSION 3.8)
project(manager)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
#find_package(vernier_respiration_belt REQUIRED)
#find_package(polar_h10 REQUIRED)
#find_package(ros2bag REQUIRED)

# Install the Python package
ament_python_install_package(${PROJECT_NAME})

# Install launch scripts
install(DIRECTORY
  launch
  DESTINATION share/${PROJECT_NAME}
)

# Install Python scripts
install(
  PROGRAMS
  vital_logger.py.py
  DESTINATION lib/${PROJECT_NAME}
)
ament_package()
