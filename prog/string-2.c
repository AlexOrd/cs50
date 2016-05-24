#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // get line of text
    string s,s2,s3; 
    s = GetString();
    s2 = GetString();
    s3 = GetString();

    //print string, one character per line
    if (s != NULL)
    {
        for (int i = 0, n = 10; i < n; i++)
        {
            printf("%c\n", s[i]);
        }
    }
}
