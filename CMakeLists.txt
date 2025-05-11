cmake_minimum_required(VERSION 3.30)
project(Lab_7)

set(CMAKE_CXX_STANDARD 23)

add_executable(Lab_7 main.cpp
        ConveyorBelt.h
        ConveyorBelt.cpp
        UndergroundConveyorBelt.h
        UndergroundConveyorBelt.cpp
        ConveyorSplitter.h
        ConveyorSplitter.cpp
        TransportSystemFactory.h
        TransportSystemFactory.cpp
        TransportSystemBuilder.h
        TransportSystemBuilder.cpp
        Menu.h
        Menu.cpp
)
