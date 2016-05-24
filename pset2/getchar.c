#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
 int c, d, e, f;
 c = d = e = f = 0;
 
 c = getchar();
 while ((c = getchar()) != EOF) {
     putchar (c);
     if (c == '1') { 
         c = -1;
     }
 }
}