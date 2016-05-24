// #include <cs50.h>
// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>

// int main(void)
// {
//     int num = GetInt();
    
//     char arr [num][num];
    
//     for (int i = 0; i < num; i++)
//     {
        
//         for (int j = 0; j < num; j++)
//         {
//             arr [i][j] = '#';
//             printf("%c", arr[i][j]);
//         }
//       сprintf("\n");
//     }

// }
#include <stdio.h>
//#include <conio.h>
void main(void)
{
   clrscr();
   int mas[15][15];
   int n=1,x=6,y=6,k=1;
   int i,j;
   while(1){
      mas[x][y]=k++;
      switch(n){
         case 1: x++;break;
         case 2: y--;break;
         case 3: x--;break;
         case 4: y++;break;
      }
      if(x==15) break;
      if(x==y && x<6) n=4;
      else if(x+y==12 && x<6) n=1;
      else if(x+y==12 && x>6) n=3;
      else if(x==y+1 && x>6) n=2;
   }
   for(i=0;i<15;i++)
   {
      for(j=0;j<15;j++)
      {
         textcolor(12);
         if(mas[j][i]>2)
         for(k=2;k<mas[j][i];k++)
         if(mas[j][i]%k==0) textcolor(15);
         cprintf("%3d ",mas[j][i]);
      }
      printf("\n");
   }
   getch();
}