cmake_minimum_required(VERSION 3.13)
project(travelingSaleman)

set(CMAKE_CXX_STANDARD 14)

add_executable(travelingSaleman main.cpp City.cpp City.h TravelingSalesman.cpp TravelingSalesman.h)