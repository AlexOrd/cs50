#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n = 0; // input num
    do
    {
        printf("height: ");
        n =  GetInt();
    }
    while ((n < 0) || (n > 23) /*|| (n == 0)*/);
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (n - i); j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= (n - (n-i)); k++)
        {
            printf("#");
        }
        printf("#");
        printf("\n");
    }
}