cmake_minimum_required(VERSION 3.28)
project(Survivor)

set(CMAKE_CXX_STANDARD 17)

set(SFML_DIR "C:/SFML/lib/cmake/SFML")

find_package(SFML 2.5 COMPONENTS graphics window system REQUIRED)

file(GLOB SOURCES "src/*.cpp" "src/*.h")

add_executable(Survivor ${SOURCES})

target_link_libraries(Survivor sfml-graphics sfml-window sfml-system)
