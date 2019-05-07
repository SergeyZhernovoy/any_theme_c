cmake_minimum_required(VERSION 2.8)

project(LordDragon)

set(SOURCES dragon.cpp main.cpp )
SET(HEADERS dragon.h)

add_executable(${PROJECT_NAME} ${HEADERS} ${SOURCES})

