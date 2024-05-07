cmake_minimum_required(VERSION 3.22.1)

project(TicTacToe)

include_directories(${CMAKE_SOURCE_DIR}/includes)

add_library(
    game_funcs
    ../src/funcs.cpp
)

add_executable(tictactoe ../src/main.cpp)

target_link_libraries(tictactoe PRIVATE game_funcs)