#include <stdio.h>
#include <stdlib.h>

int main(void)
{
printf("\033[7m RRRRRRRRRRRRRRRRRRRR");
printf("\033[%d;%dH", 5, 5);
}
