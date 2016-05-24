#include <stdio.h>
#include <math.h>
#include <cs50.h>

int main(void)
{
    printf("minutes: ");
    int min;
    min = GetInt();
    
    float gal;
    gal = 1.5 * min;

    float oun;
    oun = gal * 128;
    
    int bot;
    bot = oun / 16;
    
    printf("bottles: %i\n", bot);
}