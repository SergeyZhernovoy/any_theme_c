cmake_minimum_required(VERSION 3.12)
project(QuizFibbo)

set(CMAKE_CXX_STANDARD 17)
set(SOURCES Game.cpp User.cpp main.cpp)
SET(HEADERS Game.h User.h)


add_executable(${PROJECT} ${HEADERS} ${SOURCES})

