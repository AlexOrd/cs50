#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int Coding (int str, int key);
bool _Alpha (string str);

int main(int argc, string argv[])
{
    if ((argc != 2) || (_Alpha(argv[1])))
    {
        printf("1");
        return 1; // error 1
    }
    
    string kod = argv[1]; // переводим аргумент в строку
    
    int kod_now = 0;
    
    string Str_Norm = GetString(); // get normal string from user
    
   
    for (int i = 0, len = strlen(Str_Norm), kod_len = strlen(kod); i < len; i++)
    {
         if (isalpha(Str_Norm[i]))
         {
            if (kod_now == kod_len)
            {
                kod_now = 0;
            }
            
            char c = Coding(Str_Norm[i],kod[kod_now]);
            printf("%c", c); 
            
            kod_now ++;
            
         }
         else
         {
            printf("%c", Str_Norm[i]);
         }
    }

printf("\n");    
return 0;
}

bool _Alpha (string str)
{   
    bool res = false;
    for (int i = 0, ln = strlen(str); i < ln; i++)
    {
        if (isalpha(str[i]))
        {
            
        }
        else
        {
            res = true;
        }
    }
return (res);
}

int Coding (int str, int key)
{
    if (islower(key))
    {
        key = key - ('a'-'A');
    }
    
    key = key - 'A';
    
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
        if (str > 'z')
        {
            str = str - 26;
        }
    }
return (str);
}