cmake_minimum_required(VERSION 3.5)

project(classes_dll LANGUAGES CXX)
set(source_dll 
Race.cpp Race.h
vehicle.cpp vehicle.h
ground_vehicle.cpp ground_vehicle.h
cammel.cpp cammel.h
cammel_speedboat.cpp cammel_speedboat.h
centaur.cpp centaur.h
walking_boots.cpp walking_boots.h
air_vehicle.cpp air_vehicle.h
eagle.cpp eagle.h
flying_carpet.cpp flying_carpet.h
broom.cpp broom.h
)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
add_library(dll_lib SHARED ${source_dll})

