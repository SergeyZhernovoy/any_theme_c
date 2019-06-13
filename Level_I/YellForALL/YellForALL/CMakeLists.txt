cmake_minimum_required(VERSION 2.8)

project(YellForAll)

set(SOURCES Main.cpp Nation.cpp MenuUtility.cpp GameFunction.cpp Game.cpp board.cpp)
SET(HEADERS EduNamespace.h Nation.h MenuUtility.h GameFunction.h Game.h board.h)

add_executable(${PROJECT_NAME} ${HEADERS} ${SOURCES})
