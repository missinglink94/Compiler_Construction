//
// Created by Subha on 2/2/2018.
//
#include "global.h"
#include "error.h"
#include "symbol.h"

char lexbuf[BSIZE];
int lineno = 1;
int tokenval = NONE;

int lexan() {
    int t;
    while (1) {
        t = getchar();
        if (t == ' ' || t == '\t');
        else if (t == '\n') {
            lineno = lineno + 1;
        } else if (isdigit(t)) {
            ungetc(t, stdin);
            scanf("%d", &tokenval);
            int p = 0;
            itoa(tokenval, lexbuf, 10);
            p = lookup(lexbuf);
            if(p == 0){
                if(tokenval < 128){
                    p = insert(lexbuf, INT8);
                }else if (tokenval >= 128 && tokenval <= 32768){
                    p = insert(lexbuf, INT16);
                }else if(tokenval >= 32768 && tokenval <= 2147483647){
                    p = insert(lexbuf, INT32);
            }
        }
        return symtable[p].token;
        } else if (isalpha(t) || t == '_') {
            int p, b = 0;
            while (isalnum(t) || t == '_') {
                lexbuf[b] = t;
                t = getchar();
                b = b + 1;
                if (b >= BSIZE)
                    error("compiler error");
            }
            lexbuf[b] = EOS;
            if (t != EOF)
                ungetc(t, stdin);
            p = lookup(lexbuf);
            if (p == 0) {
//                printf("calling insert\n");
                p = insert(lexbuf, ID);
            }
            tokenval = p;
            return symtable[p].token;
        }
        else if (t == EOF)
            return DONE;
        else {
            tokenval = NONE;
            return t;
        }
    }
}
