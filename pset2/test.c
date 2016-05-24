#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int Coding (int str, int key);

int main(void)
{

char a = Coding ('t', 'o');
printf("%c", a);


}

int Coding (int str, int key)
{
    if (islower(key))
    {
        key = key - ('a'-'A');
        
    }
    
    key = key - 'A';
    printf("%d --- %d", key, str);
    
    if (isupper(str))
    {
        str = str + key;
        if (str > 'Z')
        {
            str = str - 26;
            
        }
    }
    else
    {
        str = str + key;
        printf(" .... %d", str);
        if (str > 'z')
        {
            str = str - 26;
            
        }
        
    }
return (str);
}
