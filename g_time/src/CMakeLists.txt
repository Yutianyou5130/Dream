cmake_minimum_required(VERSION 3.27)
project(ProjectName)

# 设置头文件目录
include_directories(./../inc/)

# 获取目录下的所有.cpp文件
file(GLOB_RECURSE SOURCES "./*.cpp")

# 添加可执行文件
add_executable(your_executable_name ${SOURCES})

# 链接库（如果有的话）
# target_link_libraries(your_executable_name your_library_name)
