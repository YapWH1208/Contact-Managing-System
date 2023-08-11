cmake_minimum_required(VERSION 3.26)
project(ContactManaging)

set(CMAKE_CXX_STANDARD 17)

add_executable(ContactManaging main.cpp
        lib/addContact.cpp
        lib/addContact.h
        lib/person.h
        lib/addressbook.h
        lib/viewContact.cpp
        lib/viewContact.h
        lib/deleteContact.cpp
        lib/deleteContact.h
        lib/searchContact.cpp
        lib/searchContact.h
        lib/isExist.cpp
        lib/isExist.h
        lib/modifyContact.cpp
        lib/modifyContact.h
        lib/emptyContact.cpp
        lib/emptyContact.h)
