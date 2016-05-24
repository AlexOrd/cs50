#include <stdio.h>
#include <cs50.h>

int main(void)
{
    float c = 0; // input num
    do
    {
        printf("O hai! How match change is owned? \n");
        c =  GetFloat();
    }
    while (( c >= 100) || (c <= 0));
    
    
    int n = (c + 0.001) * 100;
    
    int sum = 0;
    do
    {
        if (n >= 25)
        {
            n = n - 25;
            sum++;
        }
        else if (n >= 10)
            {
                n = n - 10;
                sum++;
            }
        else if (n >= 5)
            {
                n = n - 5;
                sum++;
            }
        else if (n >= 1)
            {
                n = n - 1; 
                sum++;
            }
    } while (n > 0);
    
    printf ("%i\n", sum);
}