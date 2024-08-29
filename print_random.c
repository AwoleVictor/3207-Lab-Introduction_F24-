//Given Project code
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "random.h" //header file for randchar function
/*Implement a main*/
//Function takes empty strings and fills it with randomly generated letter
void rand_string(char *c, size_t size)
{
    char temp = randChar(); //temp char to hold the randomly generated char
    //building string with the randomly generated character
    for (int i = 0; i < size; i++)
    {
        c[i] = temp;
    }
}
//Function allocates space for the string and calls rand_string fill it
char* rand_string_alloc(size_t size)
{
     char *s = malloc(size + 1);
     if (s) {
         rand_string(s, size);
     }
     return s;
}

int main(void){
    size_t x = 7; //7 was chosen to be the size of string
    char * str = rand_string_alloc(x); //getting memory allocated for str string
    if(str != NULL){ //checking if str is non null then printing results
        printf("The word is: %s\n" , str);
        free(str); //freeing memory allocated for str
    }
    else {
        exit(0);
    }
    exit(0);

}
