#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
#define ARR {1,2,4,5,6,7,8,9,10,11}
#define ARR_SIZE 10
#define TARGET 20

//void Print_Arr (int arr[], int size);
// void bsort (int arr[], int pos_m, int pos_m);

int main (void)
{
   int arr[ARR_SIZE] = ARR;
   int pos_m = 0;
   int pos_b = ARR_SIZE;
   int mid = 0;
   
   while ((pos_b - pos_m) >= 0) {
       mid = (pos_m + pos_b) / 2.0;
       if (arr[mid] != TARGET && arr[mid] > TARGET) {
           pos_b = mid - 1;
       }
       else if (arr[mid] != TARGET && arr[mid] < TARGET) {
           pos_m = mid + 1;
       }
       else if (arr[mid] == TARGET) {
           printf("Number: %d\t is in position: %d\t", TARGET, mid+1);
           break;
       }
   }
   if ((pos_b - pos_m) < 0) {
       printf("Error no target in array!!!\n");
   }
}