#include <stdio.h>
#include <io.h>
#include "global.h"
#include "lexer.h"
#include "init.h"
#include    "symbol.h"
int main() {
    FILE * fp;
    int token;
    fclose(stdin);
    fp = fopen("D:/compiler_construction/mytest", "r");
    init();
    while (token!=300) {
        token = lexan();
        if(token <= 255){
            printf("<%c, %d>", (char)token, tokenval);
        }
        else {
            printf("<%d, %d>",token, tokenval);
        }
    }
    fclose(fp);
    return 0;
}