#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>


int main(void)
{

char key = 'a';

if (islower(key))
    {
        key = key - ('a'-'A');
    }
    
printf("%c", key);


}




// //   int Upper(int c, int k)
// // {
//     int c = 64;
//     //int k = 2;
//     //bool bo = false;
    
//     c -= 64;
//     printf("--%d--", (28)%26);
//     // while (bo == false)
//     // {
        
//     //     // if ( (c+k)%26 >= 1 )
//     //     // {
//     //     //     k -= 26;
//     //     // }
//     //     // else
//     //     // {
//     //     //     bo = true;
//     //     // }
//     // }    // while end
//     c += 64;
    
// printf("\n %d", (c = c + (28)%26));
