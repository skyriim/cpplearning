cmake_minimum_required(VERSION 3.0.0)
# 会自动创建两个变量，PROJECT_SOURCE_DIR和PROJECT_NAME
# ${PROJECT_SOURCE_DIR}：本CMakeLists.txt所在的文件夹路径
# ${PROJECT_NAME}：本CMakeLists.txt的project名称
project(cpplearning VERSION 0.1.0)

include_directories(${PROJECT_SOURCE_DIR}/include)
include(CTest)
include(CPack)

enable_testing()
set(CMAKE_BUILD_TYPE Debug)

aux_source_directory(${PROJECT_SOURCE_DIR}/src SRC_LIST)
# list(APPEND SRC_LIST main.cpp) ?
set(SRC_LIST main.cpp ${SRC_LIST} )

#set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/build)

# 为什么在此环境只能叫main? launch.json配置的明明是无后缀文件 在哪里被替换了？
add_executable(run ${SRC_LIST})