cmake_minimum_required(VERSION 2.8)

project(GuessMyNumber)

set(SOURCES Main.cpp GuessGame.cpp)
SET(HEADERS GuessGame.h)

add_executable(${PROJECT_NAME} ${HEADERS} ${SOURCES})
