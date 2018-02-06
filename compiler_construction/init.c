//
// Created by Subha on 2/2/2018.
//

#include "global.h"
#include "symbol.h"

struct entry keywords[] =
        {
                {"else", ELSE},
                {"if", IF},
                {"return", RETURN},
                {"while", WHILE},
                {"arg", ARG}
        };

int init() {
    struct entry *p;
    for (p = keywords; p->token; p++)
        insert(p->lexptr, p->token);
    return 0;
}