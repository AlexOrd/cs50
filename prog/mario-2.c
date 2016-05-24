#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    int n = 0; // input num
    
    do
    {
        printf("height: ");
        n =  GetInt();
    }
    while ((n < 0) || (n > 23) || (n == 0));
    
    int j;
    int k;
    
    for (int i = 1; i == n; i++)
    {
        for (j = 1; j == (n - i); j++)
        {
            printf(" ");
        }
        for (k = 1; k == (n - j); k++)
        {   
            printf("#");
        }
    }
    
    // do
    // {
    //     ch =0;
    //     for (int i = 1; i <= (n-1); i++)
    //     {
    //         ch++;
    //         printf(" ");
    //     }
        
    //     for (int j = 1; j != (ch+2); j++)
    //     {
    //         printf("#");
    //     }
        
    //     printf ("\n");
        
    // n = n - 1;
    // }
    // while (n != 0);
}