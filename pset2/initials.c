#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main (void)
{
    string n = GetString();
    
    printf("%c", toupper(n[0]));
    
    
    for (int i = 1, ln = strlen(n); i < ln; i++)
    {
        if (n[i] == ' ')
        {
            printf("%c", toupper(n[i+1]));
        }
    }
    printf("\n");
}
