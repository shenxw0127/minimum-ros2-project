cmake_minimum_required(VERSION 3.8)
project(node_example) #要和package.xml中的name标签一致

find_package (ament_cmake_auto REQUIRED)

ament_auto_find_build_dependencies ()

ament_auto_add_executable(test_node 
    src/example.cpp
)

ament_auto_package()

