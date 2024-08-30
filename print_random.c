// Given Project code
/*Repository Link: https://github.com/AwoleVictor/3207-Lab-Introduction_F24-.git*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "random.h"

int main()
{
    int a;
    /* seed the randomizer */
    srand((unsigned)time(NULL)); 
    printf("Today's random word: ");
    for (a = 0; a < 7; a++) //getting random char and displaying it to screen 7 times
        putchar(randchar());
    putchar('\n');
    return (0);
}
