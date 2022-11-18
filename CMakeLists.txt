cmake_minimum_required(VERSION 3.20)
project(untitled5)

set(CMAKE_CXX_STANDARD 11)

add_executable(
        untitled5 src/main.cpp src/DataModels/Company.cpp src/DataModels/Company.h src/utils.h src/DataModels/Model.cpp src/DataModels/Model.h
        src/DataModels/Color.cpp src/DataModels/Color.h src/DataModels/Car.cpp src/DataModels/Car.h src/DataModels/Client.cpp src/DataModels/Client.h src/DataModels/Invoice.cpp
        src/DataModels/Invoice.h src/utils.cpp
        src/queries.cpp src/queries.h src/seed_database.cpp src/seed_database.h)

configure_file(database.txt database.txt COPYONLY)
