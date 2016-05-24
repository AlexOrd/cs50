#include <stdio.h>
#include <cs50.h>
#include <string.h>


int main(void)
{
    string s = GetString();
    
    
    for (int i = 0; i<= 255; i++)
    {m
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = s[i] - ('a' - 'A');
        }
    }
    printf ("%s\n", s);
}