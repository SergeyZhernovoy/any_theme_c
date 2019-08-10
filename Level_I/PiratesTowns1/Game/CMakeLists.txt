cmake_minimum_required(VERSION 2.8)

project(PiratesTowns)

set(SOURCES PirateTown.cpp MenuUtility.cpp main.cpp )
SET(HEADERS PirateTown.h MenuUtility.h)

add_executable(${PROJECT_NAME} ${HEADERS} ${SOURCES})
