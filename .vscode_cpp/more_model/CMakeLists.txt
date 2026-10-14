cmake_minimum_required(VERSION 3.20)

project(point_circle LANGUAGES CXX)

# ================================
# C++ 标准
# ================================
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# 生成 compile_commands.json
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)


# ================================
# 创建可执行文件
# ================================
add_executable(my_app
    src/main.cpp
)


# ================================
# 头文件目录
# ================================
target_include_directories(my_app PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)