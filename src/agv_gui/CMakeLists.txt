cmake_minimum_required(VERSION 3.5)
project(agv_gui)

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
find_package(Qt5 COMPONENTS Core Quick Widgets REQUIRED) # Changed Qt5 find_package syntax
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
)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_INCLUDE_CURRENT_DIR YES)

add_executable(${PROJECT_NAME}
    src/charge_node.cpp
    src/battery_node_1.cpp
    src/battery_node_2.cpp
    src/battery_node_3.cpp
    src/battery_node_4.cpp
    src/main_gui.cpp
)

# Wrap QObject-derived classes with moc
set(MOC_HEADERS
  include/charge_node.hpp
  include/battery_node_1.hpp
  include/battery_node_2.hpp
  include/battery_node_3.hpp
  include/battery_node_4.hpp
  # Add other header files containing QObject classes here
)
QT5_WRAP_CPP(MOC_GENERATED_FILES ${MOC_HEADERS})

# Link the generated moc files to the target
target_sources(${PROJECT_NAME} PRIVATE ${MOC_GENERATED_FILES})


target_include_directories(${PROJECT_NAME}
  PRIVATE
  ${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_link_libraries(${PROJECT_NAME}
  Qt5::Core
  Qt5::Quick
  Qt5::Widgets
)

ament_target_dependencies(${PROJECT_NAME}
  ${THIS_PACKAGE_INCLUDE_DEPENDS}
)

target_compile_options(${PROJECT_NAME} PRIVATE -Wall -Wextra)

install(TARGETS ${PROJECT_NAME}
  RUNTIME DESTINATION lib/${PROJECT_NAME}
)

install(DIRECTORY launch/
  DESTINATION share/${PROJECT_NAME}/launch
)

set_target_properties(${PROJECT_NAME} PROPERTIES AUTOMOC TRUE)

ament_package()
