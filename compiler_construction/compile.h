//
// Created by Subha on 2/5/2018.
//

#ifndef COMPILER_CONSTRUCTION_LEXTEST_H
#define COMPILER_CONSTRUCTION_LEXTEST_H

#include "javaclass.h"
#include "bytecode.h"
#include "init.h"
#include "lexer.h"

#define ERROR_STRING "Invalid Character"

void setEndLocation(int loc);
int getEndLocation(int index);
int nextToken();

void match(int token);

void factor();

void term();

void expr();

void stmt();

void opts_stmts();

#endif //COMPILER_CONSTRUCTION_LEXTEST_H
