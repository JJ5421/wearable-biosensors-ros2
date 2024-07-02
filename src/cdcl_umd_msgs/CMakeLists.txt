cmake_minimum_required(VERSION 3.8)
project(cdcl_umd_msgs)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(std_msgs REQUIRED)
find_package(builtin_interfaces REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(rosidl_default_generators REQUIRED)

# generate the custom messages
rosidl_generate_interfaces(
  ${PROJECT_NAME}
  "msg/casualty_report/classifiers/Resnet18ClassifierObservations.msg"
  "msg/casualty_report/classifiers/Resnet18ClassifierObservation.msg"
  "msg/casualty_report/classifiers/BackgroundSubtraction.msg"
  "msg/casualty_report/classifiers/SpeechActivity.msg"

  "msg/casualty_report/CasualtyReport.msg"
  "msg/casualty_report/CasualtyReportField.msg"
  "msg/casualty_report/CategoricalField.msg"
  "msg/casualty_report/NumericalField.msg"
  "msg/casualty_report/RespiratoryDistress.msg"
  "msg/casualty_report/SevereHemorrhage.msg"
  "msg/casualty_report/HeartRate.msg"
  "msg/casualty_report/RespiratoryRate.msg"
  "msg/casualty_report/TraumaHead.msg"
  "msg/casualty_report/TraumaTorso.msg"
  "msg/casualty_report/TraumaUpperExtremity.msg"
  "msg/casualty_report/TraumaLowerExtremity.msg"
  "msg/casualty_report/AlertnessMotor.msg"
  "msg/casualty_report/AlertnessOcular.msg"
  "msg/casualty_report/AlertnessVerbal.msg"

  "msg/navigation/LatitudeLongitude.msg"
  "msg/navigation/SpotStatus.msg"

  "msg/target_tracking/Point2D.msg"
  "msg/target_tracking/Target.msg"
  "msg/target_tracking/TargetList.msg"
  
  "msg/AprilTagDetection.msg"
  "msg/AprilTagDetectionArray.msg"
  "msg/NavSatFixArray.msg"
  "msg/Speech.msg"

  "msg/Vitals.msg" # Used for wearable biosensors

  "srv/PlaySound.srv"
  "srv/SetArenaGain.srv"
  "srv/SetArenaOperatingMode.srv"
  "srv/InjuryReport.srv"

  "action/WaypointNavigation.action"
  DEPENDENCIES geometry_msgs std_msgs sensor_msgs# Add packages that above messages depend on, in this case geometry_msgs for Sphere.msg
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
