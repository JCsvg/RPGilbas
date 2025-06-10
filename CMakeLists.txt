cmake_minimum_required(VERSION 3.31)
project(RPGilbas C)

set(CMAKE_C_STANDARD 11)

add_executable(RPGilbas src/main.c
        src/structs/lista/lista.c
        src/structs/lista/lista.h
        src/biblioteca.c
        src/utils.h)
