#include <cs50.h> // без счетчика СВАПА = -1, если 0 == прекр. цикл !!!!!
#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
#define ARR {1, 2, 5, 6, 4, 3, 7, 8, 9, 10}
#define ARR_SIZE 10

void Print_Arr (int arr[], int size);
void Re_1 (int arr[], int pos1, int pos2);

int main (void)
{
    int arr[ARR_SIZE] = ARR;
    
    for (int i = ARR_SIZE; i >= 0; i--) {
        
        for (int j = 0; j < i - 1; j++) {
            if (arr[j] > arr[j+1]) {
                Re_1(arr, j, j+1);
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

void Re_1 (int arr[], int pos1, int pos2)
{
    int x = 0;
    x = arr[pos2];
    arr[pos2] = arr[pos1];
    arr[pos1] = x;
}