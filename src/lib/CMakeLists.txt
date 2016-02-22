cmake_minimum_required(VERSION 3.3)
project(samChessLib)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp SmartTile.cpp SmartTile.h Piece.cpp Piece.h Pawn.cpp Pawn.h)
add_executable(samChessLib ${SOURCE_FILES})