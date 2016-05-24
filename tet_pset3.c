#include <stdio.h>

int main(void)
{
    for (int j = n; j > 1; j--)
    {
        for (int i = 0; i < n; i ++) {
            swap(values, i, i + 1);
        }
    }
}                                                                                                                                                                                                                                                                                                                                                                                                                                               

void swap(int values[], a, b)
{
    int nw = values[a];
    values[a] = values[b];
    values[b] = nw;
}