cmake_minimum_required(VERSION 3.9)
project(compiler_construction C)

set(CMAKE_C_STANDARD 99)

add_executable(compiler_construction lextest.c lexer.c global.h symbol.c error.c error.h init.c symbol.h lexer.h init.h lextest.h javaclass.c javaclass.h bytecode.h bytecode.c)