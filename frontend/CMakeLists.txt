cmake_minimum_required(VERSION 3.0)

project(BookingSystem)

set(OUTFILE a.out)

file(
    GLOB_RECURSE
    SRC_FOLDER
    CONFIGURE_DEPENDS 
    "src/*.h"
    "src/*.cpp"
)

add_executable(${OUTFILE} ${SRC_FOLDER})

find_package(Qt5 COMPONENTS Core Widgets)

target_link_libraries(
    ${OUTFILE}
    PUBLIC Qt5::Core Qt5::Widgets
)