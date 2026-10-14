cmake_minimum_required(VERSION 3.20)

project(point_circle)

set(CMAKE_CXX_STANDARD 17)
# 包含头文件目录
# 生成可执行文件
add_executable(my_app scr/time.cpp scr/ scr/main1.cpp)
target_include_directories(my_app PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
# 【避坑核心】静态链接，解决 MSYS2 编译出的 exe 在 Windows 下缺少 DLL 报错的问题
target_link_options(my_app PRIVATE -static)