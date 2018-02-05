cmake_minimum_required(VERSION 3.9)
project(Pr1)

set(CMAKE_CXX_STANDARD 11)

include_directories(.)

add_executable(Pr1
        bytecode.c
        bytecode.h
        calcclass.c
        javaclass.c
        javaclass.h
        Makefile compile.c compile.h)
