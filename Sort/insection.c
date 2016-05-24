#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
#define ARR {2, 1, 5, 6, 4, 3, 7, 11, 9, 8}
#define ARR_SIZE 10

void Print_Arr (int arr[], int size);
void Re (int arr[], int pos_min, int pos_big);

int main (void)
{
    int arr[ARR_SIZE] = ARR;
    
    for (int i = 1; i < ARR_SIZE; i++) {
        
        for (int j = 0; j < i; j++) {
            
                if (arr[j] > arr[i]) {
                    Re(arr, j, i);
                    break;//j = i; // exit from for
                }
        }
    }
    
    Print_Arr(arr, ARR_SIZE);
}

void Print_Arr (int arr[], int size)
{
    for (int i = 0; i < size; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

void Re (int arr[], int pos_min, int pos_big)
{
    int buf = arr[pos_big];
    
    for(int i = pos_big; i > pos_min; i--) {
        arr[i] = arr[i-1];
    }
    
    arr[pos_min] = buf;
}