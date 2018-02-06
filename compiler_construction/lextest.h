//
// Created by Subha on 2/5/2018.
//

#ifndef COMPILER_CONSTRUCTION_LEXTEST_H
#define COMPILER_CONSTRUCTION_LEXTEST_H
int nexttoken();
void error();
void match(int token);
void factor();
void term();
void expr();
void stmt();
void opts_stmts();
#endif //COMPILER_CONSTRUCTION_LEXTEST_H
