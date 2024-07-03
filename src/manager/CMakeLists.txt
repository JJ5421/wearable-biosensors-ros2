cmake_minimum_required(VERSION 3.8)
project(manager)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)

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
  ${PROJECT_NAME}/vital_logger.py
  DESTINATION lib/${PROJECT_NAME}
)

ament_package()
