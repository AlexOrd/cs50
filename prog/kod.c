#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    printf("Enter string: ");
    string s1;
    s1 = GetString();
    
    printf("%s\n", s1);
}