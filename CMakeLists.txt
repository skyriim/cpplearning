cmake_minimum_required(VERSION 3.0.0)
# 会自动创建两个变量，PROJECT_SOURCE_DIR和PROJECT_NAME
# ${PROJECT_SOURCE_DIR}：本CMakeLists.txt所在的文件夹路径
# ${PROJECT_NAME}：本CMakeLists.txt的project名称
project(cpplearning VERSION 0.1.0)

include_directories(${PROJECT_SOURCE_DIR}/include/basic/)
include(CTest)
include(CPack)

enable_testing()
set(CMAKE_BUILD_TYPE Debug)

# aux_source_directory不会递归
aux_source_directory(${PROJECT_SOURCE_DIR}/src_basic SRC_LIST)

# list(APPEND SRC_LIST main.cpp)
set(SRC_LIST main.cpp ${SRC_LIST} )

#set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/build)

add_executable(run ${SRC_LIST})