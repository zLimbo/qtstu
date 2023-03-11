cmake_minimum_required(VERSION 3.5)

message("==== qtstu ====")
project(QtStu VERSION 0.1)
set(CMAKE_CXX_STANDARD 20)

# 在src的同级目录使用include和lib路径来保存依赖，这样让整个系统看起来更整洁
# INCLUDE_DIRECTORIES(${PROJECT_SOURCE_DIR}/../include)
# LINK_DIRECTORIES(${PROJECT_SOURCE_DIR}/../lib)


message("==== qt5 config ====")
# moc ui和rcc编译开关
SET(CMAKE_AUTOMOC ON)
SET(CMAKE_AUTOUIC ON)
SET(CMAKE_AUTORCC ON)
# 有些只编写了.h文件，例如常量声明，结构体声明等，请务必配置这一项
set(CMAKE_INCLUDE_CURRENT_DIR ON)
# CMAKE_PREFIX_PATH，对应各个模块的cmake文件路径，其次FIND_PACKAGE才能生效
# SET(CMAKE_PREFIX_PATH <PREFIX_PATH>/lib/cmake)
find_package(Qt5 COMPONENTS Core Gui Widgets REQUIRED)
link_libraries(Qt5::Core Qt5::Gui Qt5::Widgets fmt)

# QDebug在release下依然可以输出函数名和行号
ADD_DEFINITIONS(-DQT_MESSAGELOGCONTEXT)

# sub
add_subdirectory(hello)

