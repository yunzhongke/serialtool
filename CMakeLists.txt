cake_minimum_required(VERSION 3.0)

project(qtserialtool)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

add_definitions(-std=c++11)
set(CMAKE_AUTOMOC ON)

set(CMAKE_AUTORCC ON) # 自动查找.qrc 文件

set(CMAKE_PREFIX_PATH "/home/yunzhongke/work/Qt5.6.2/5.6/gcc_64/lib/cmake/Qt5Widgets/Qt5WidgetsConfig.cmake")

aux_source_directory(./src SRC_LIST)
include_directories(./src)
include_directories(./ui)
find_package(Qt5Widgets)
if(Qt5Widgets_FOUND)
    message(STATUS ${Qt5Widgets_VERSION_STRING})
endif()
find_package(Qt5Core)
if(NOT Qt5Core_FOUND)
    message(FATAL_ERROR "not find Qt5Core" )
endif()


set(UIS ./ui/serialtool.ui)
qt5_wrap_ui(UI_H ${UIS})

add_executable(${PROJECT_NAME} ${SRC_LIST} ${UI_H} ./ui/myresource.qrc) #编译.qrc文件
target_link_libraries(${PROJECT_NAME} ${Qt5Widgets_LIBRARIES} ${Qt5Core_LIBRARIES})
