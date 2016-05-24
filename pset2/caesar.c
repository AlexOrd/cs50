#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

char Upper(int c, int k);
char Lower(int c, int k);

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("1");
        return wget1; // error 1
    }
    
    int k = atoi(argv[1]); // переводим ключ в число инт.
    
    string Str_Norm = GetString();
    
    for (int i = 0, len = strlen(Str_Norm); i < len; i++)
    {
         if (isalpha(Str_Norm[i]) && isupper(Str_Norm[i]))
         {
            printf("%c", Upper(Str_Norm[i],k)); 
         }
         else if (isalpha(Str_Norm[i]) && islower(Str_Norm[i]))
         {
            printf("%c", Lower(Str_Norm[i],k)); 
         }
         else
         {
            printf("%c", Str_Norm[i]);
         }
    }
   
printf("\n");    
return 0;
}

char Upper(int c, int k)
{
    int key = k%26;
    if (key == 0)
    {
        key = 1;
    }
    
    c = c + key;
    
    if (c > 90)
    {
        c = c - 26;
    }
    
return (c);
}
char Lower(int c, int k)
{
    int key = k%26;
    if (key == 0)
    {
        key = 1;
    }
    
    c = c + key;
    
    if (c > 122)
    {
        c = c - 26;
    }
    
return (c);
}