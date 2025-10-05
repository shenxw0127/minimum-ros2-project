cmake_minimum_required(VERSION 3.8)
project(msg_example)

find_package(ament_cmake_auto REQUIRED)

ament_auto_find_build_dependencies()

file(GLOB_RECURSE 
    MSG_FILES 
    RELATIVE 
    
    ${CMAKE_CURRENT_SOURCE_DIR}
    msg/*.msg
)

rosidl_generate_interfaces(${PROJECT_NAME}

  ${MSG_FILES}

   DEPENDENCIES 
   ${${PROJECT_NAME}_FOUND_BUILD_DEPENDS}

  ADD_LINTER_TESTS
 )
ament_export_dependencies(rosidl_default_runtime)

ament_auto_package()
