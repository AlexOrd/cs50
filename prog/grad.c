#include <stdio.h>
#include <math.h>
#include <cs50.h>

int main(void) 
{ 
    printf("Enter in Faringate: ");
    float f = GetInt();
    
    float c = 5.0 / 9.0 * (f - 32.0);
    
    printf ("Celsiy: %4.1f\n", c);
} 
