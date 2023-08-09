cmake_minimum_required(VERSION 3.26)
project(ContactManaging)

set(CMAKE_CXX_STANDARD 17)

add_executable(ContactManaging main.cpp
        addContact.cpp
        addContact.h
        person.h
        addressbook.h)
