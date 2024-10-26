cmake_minimum_required(VERSION 3.28)
project(Survivor)

set(CMAKE_CXX_STANDARD 17)

set(SFML_DIR "C:/SFML/lib/cmake/SFML")

find_package(SFML 2.5 COMPONENTS graphics window system REQUIRED)

add_executable(Survivor main.cpp
        game.cpp
        game.h
        enemy.cpp
        enemy.h
        player.cpp
        player.h
        environment.cpp
        environment.h
)

target_link_libraries(Survivor sfml-graphics sfml-window sfml-system)
