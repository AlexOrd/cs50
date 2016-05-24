#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define IN 1 // в слове
#define OUT 2 // out word

int main(void)
{
    int c, nl, nw, nc, state;
    state = OUT;
    nl = 1;
    nw = nc = 0;
    
    while ((c = getchar()) != EOF) {
        nc++;
        if (c == '\n') {
            nl++;
        }
        if (c == ' ' || c == '\t' || c == '\n') {
            state = OUT;
        }
        else if (state == OUT) {
            state = IN;
            nw++;
        }
        if (c == '0') {
            break;
        }
    }
    printf("Chars: %d\t Words: %d\t Lines: %d\t\n", nc, nw, nl);
}