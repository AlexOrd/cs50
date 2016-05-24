#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
#define ARR {2, 1, 5, 6, 4, 3, 7, 11, 9, 8}
#define ARR_SIZE 10
#define SRC 4

//void Print_Arr (int arr[], int size);
//void Re (int arr[], int pos_min, int pos_big);

int main (void)
{
    int arr[ARR_SIZE] = ARR;
    int src = SRC;
    
    for(int i = 0; i < ARR_SIZE; i++) {
        if (arr[i] == src) {
            printf("Num: %d\t is in pos: %d\t\n", src, i+1);
            break;
        }
    }
}