//Given Project code
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "random.h"
/*Implement a main*/

void rand_string(char *c, size_t size)
{
    for (int i = 0; i < size; i++)
    {
        c[i] = randChar();
    }
}

char* rand_string_alloc(size_t size)
{
     char *s = malloc(size + 1);
     if (s) {
         rand_string(s, size);
     }
     return s;
}




int main(void){
    size_t x = 7;
    char * str = rand_string_alloc(x);
    if(str != NULL){
        printf("The word is: %s\n" , str);
        free(str);
    }
    else {
        exit(0);
    }
    exit(0);

}
