#include <stdio.h>

int fib (int n)
{
    if (n == 0) printf("%d\n", 1);
    if (n == 1) printf ("%d\n", 1);
    printf ("%d\n", x);
    int x = fib (n - 2) + fib (n - 1);
    return x;
    
}


int main(void) 
{
    fib(6);
    
}