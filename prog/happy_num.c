#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("Enter num: ");
    int num = GetInt();
    
     int x = 0;
     int y = 0;
    
    for (int i = 0; i != 3; i++)
    {
        x = x + num % 10;
        num = num / 10;
    }
    
    //printf("%.i", num);
    
    for (int j = 0; j != 3; j++)
    {
        y = y + num % 10;
        num = num / 10;
    }
    
    if (x == y)
    {
        printf("Happy number!\n");
    }
    else 
    {
        printf("No NO No\n");
    }
}