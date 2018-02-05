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
#define AUTO        256
#define BREAK       257
#define CASE        258
#define CHAR        259
#define CONST       260
#define CONTINUE    261
#define DEFAULT     262
#define DO          263
#define DOUBLE      264
#define ELSE        265
#define ENUM        266
#define EXTERN      267
#define FLOAT       268
#define FOR         269
#define GOTO        270
#define IF          271
#define INT         272
#define LONG        273
#define REGISTER    274
#define RETURN      275
#define SHORT       276
#define SIGNED      277
#define SIZEOF      278
#define STATIC      279
#define STRUCT      280
#define SWITCH      281
#define TYPEDEF     282
#define UNION       283
#define UNSIGNED    284
#define VOID        285
#define VOLATILE    286
#define WHILE       287
/* to be completed */
#define DONE   300
#define ID     301
#define NUM    321
#define INT8   302
#define INT16  303
#define INT32  304
int tokenval;
int lineno;
struct entry {
    char *lexptr;
    int token;
};
struct entry symtable[];
#endif //COMPILER_CONSTRUCTION_GLOBAL_H
