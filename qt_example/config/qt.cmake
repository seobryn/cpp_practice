set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(QT_CMAKE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/libs/qt/6.6.0/macos/lib/cmake")

macro(SetupQt)
    list(APPEND CMAKE_PREFIX_PATH "${QT_CMAKE_DIR}")
    find_package(Qt6 REQUIRED COMPONENTS Widgets Gui Core)
endmacro(SetupQt)