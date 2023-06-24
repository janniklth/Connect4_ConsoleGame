cmake_minimum_required(VERSION 3.24)
project(Connect4_ConsoleGame)

set(CMAKE_CXX_STANDARD 23)

add_executable(Connect4_ConsoleGame
        src/main.cpp
        src/App.cpp
        src/App.hpp
        src/Game.cpp
        src/Game.hpp
        src/Board.cpp
        src/Board.hpp
        src/Player.cpp
        src/Player.hpp
        src/Human.cpp
        src/Human.hpp
        src/Bot_Random.cpp
        src/Bot_Random.hpp)
