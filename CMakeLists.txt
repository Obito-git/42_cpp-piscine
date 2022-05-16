cmake_minimum_required(VERSION 3.22)
project(cpp)

set(CMAKE_CXX_STANDARD 98)

include_directories(c00/ex01)

add_executable(cpp
        c00/ex01/Contact.cpp
        c00/ex01/main.cpp
        c00/ex01/PhoneBook.cpp)
