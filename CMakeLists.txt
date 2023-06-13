cmake_minimum_required(VERSION 3.21)
set(PROJECT_NAME "keyBoardCounter")

set(PROJECT_SOURCES
    main.cpp
    keyboardCounterUI.cpp
    keyboardCounterUI.h
    keyboardConfig.h
)

project(PROJECT_NAME VERSION 1.0.0 LANGUAGES CXX)

# about Qt
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(QT_DIR C:/Qt/Qt5.13.2/5.13.2/mingw73_64/lib/cmake/Qt5) 
find_package(Qt5 COMPONENTS Core Gui Widgets REQUIRED)

include_directories(${QT_INCLUDES})
link_directories(${QT_LIBRARIES})

add_executable(counter 
                        ${PROJECT_SOURCES}
)

target_link_libraries(counter Qt5::Core Qt5::Gui Qt5::Widgets)

