cmake_minimum_required(VERSION 3.5)
project(amr_v4_qt)

if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 17)
endif()

find_package(ament_cmake REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclcpp_components REQUIRED)
find_package(rviz_common REQUIRED)
find_package(rviz_default_plugins REQUIRED)
find_package(rviz_rendering REQUIRED)
find_package(std_srvs REQUIRED)
find_package(std_msgs REQUIRED)
find_package(amr_v4_msgs_srvs REQUIRED)
find_package(Qt5 COMPONENTS Core Quick Widgets Network UiTools REQUIRED) # Changed Qt5 find_package syntax
find_package(tf2_eigen REQUIRED)
find_package(tf2_geometry_msgs REQUIRED)
find_package(tf2_ros REQUIRED)

set(THIS_PACKAGE_INCLUDE_DEPENDS
  geometry_msgs
  rclcpp
  rviz_common
  rviz_default_plugins
  rviz_rendering
  std_msgs
  std_srvs
  amr_v4_msgs_srvs
)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_INCLUDE_CURRENT_DIR YES)

add_executable(${PROJECT_NAME}
    src/main.cpp
    src/main_gui.cpp
    src/main_screen.cpp
    src/motors.cpp
    src/health.cpp
    src/running_mode.cpp
    src/hello_world.cpp
    src/fisher_screen.cpp
    src/battery_node.cpp
    src/motor_node.cpp
    src/health_node.cpp
    src/running_node.cpp
    src/robot_node.cpp
    src/scrolling_label.cpp
)

# Wrap QObject-derived classes with moc
set(MOC_HEADERS
  include/main_gui.h
  include/motors.h
  include/ui_motor_screen.h
  include/ui_health_screen.h
  include/ui_running_mode_screen.h
  include/ui_hello_world_screen.h
  include/ui_main_screen.h
  include/main_screen.h
  include/fisher_screen.h
  include/battery_node.h
  include/motor_node.h
  include/health.h
  include/health_node.h
  include/running_mode.h
  include/running_node.h
  include/hello_world.h
  include/robot_node.h
  include/scrolling_label.h
)

QT5_WRAP_CPP(MOC_GENERATED_FILES ${MOC_HEADERS})

# Link the generated moc files to the target
target_sources(${PROJECT_NAME} PRIVATE ${MOC_GENERATED_FILES})

file(COPY assets DESTINATION ${CMAKE_BINARY_DIR})


target_include_directories(${PROJECT_NAME}
  PRIVATE
  ${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_link_libraries(${PROJECT_NAME}
  Qt5::Core
  Qt5::Quick
  Qt5::Widgets
  Qt5::UiTools
  ${CUDA_LIBRARIES}
)

ament_target_dependencies(${PROJECT_NAME}
  ${THIS_PACKAGE_INCLUDE_DEPENDS}
)

target_compile_options(${PROJECT_NAME}
    PRIVATE
    -Wall -Wextra
)

install(TARGETS ${PROJECT_NAME}
  RUNTIME DESTINATION lib/${PROJECT_NAME}
)

install(DIRECTORY launch/
  DESTINATION share/${PROJECT_NAME}/launch
)

set_target_properties(${PROJECT_NAME} PROPERTIES AUTOMOC TRUE)

ament_package()
