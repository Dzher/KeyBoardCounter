cmake_minimum_required(VERSION 3.21)
set(PROJECT_NAME "keyBoardCounter")
set(PROJECT_SOURCES
    main.cpp
    keyboardCounterUI.cpp
    keyboardCounterUI.h
)
project(PROJECT_NAME VERSION 1.0.0 LANGUAGES CXX)

# about Qt
# set(CMAKE_AUTOUIC ON)
# set(CMAKE_AUTOMOC ON)
# set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# This tells CMake to look up Qt 5, and import the Widgets module.
# There is no point in continuing if CMake cannot locate the module, so we do set the REQUIRED flag to let CMake abort in this case.
# find_package(Qt5 REQUIRED COMPONENTS Widgets)
