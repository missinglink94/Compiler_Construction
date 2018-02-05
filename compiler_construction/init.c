//
// Created by Subha on 2/2/2018.
//

#include "global.h"
#include "symbol.h"

struct entry keywords[] =
        {
                {"auto", AUTO},
                {"break", BREAK},
                {"case", CASE},
                {"const", CONST},
                {"continue", CONTINUE},
                {"default", DEFAULT},
                {"do", DO},
                {"double", DOUBLE},
                {"else", ELSE},
                {"enum", ENUM},
                {"extern", EXTERN},
                {"float", FLOAT},
                {"for", FOR},
                {"goto", GOTO},
                {"if", IF},
                {"int", INT},
                {"long", LONG},
                {"register", REGISTER},
                {"return", RETURN},
                {"short", SHORT},
                {"signed", SIGNED},
                {"sizeof", SIZEOF},
                {"static", STATIC},
                {"struct", STRUCT},
                {"switch", SWITCH},
                {"typedef", TYPEDEF},
                {"union", UNION},
                {"unsigned", UNSIGNED},
                {"void", VOID},
                {"volatile", VOLATILE},
                {"while", WHILE},
                {"+", 43},
                {"-", 45},
                {"/", 47},
                {"*", 42},
                {"%", 37},
                {"(", 40},
                {")", 41},
                {"{", 123},
                {"}", 125},
                {"[", 91},
                {"]", 93},
                {"=", 61},
                {";", 59}
        };

int init() {
    struct entry *p;
    for (p = keywords; p->token; p++)
        insert(p->lexptr, p->token);
    return 0;
}