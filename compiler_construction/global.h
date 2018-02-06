//
// Created by Subha on 2/2/2018.
//

#ifndef COMPILER_CONSTRUCTION_GLOBAL_H
#define COMPILER_CONSTRUCTION_GLOBAL_H

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define BSIZE 128
#define NONE  -1
#define EOS   '\0'
#define IF          265
#define ELSE        266
#define WHILE       267
#define RETURN      268
#define ARG         269
/* Check if anything else required */
#define DONE   300
#define ID     301
#define INT8   302
#define INT16  303
#define INT32  304
int temp_tokenval;
int tokenval;
int lineno;
struct entry {
    char *lexptr;
    int token;
};
struct entry symtable[];
#endif //COMPILER_CONSTRUCTION_GLOBAL_H
