#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
/*Repository Link: https://github.com/AwoleVictor/3207-Lab-Introduction_F24-.git*/

#define INT_MIN 1  // min for random number generator
#define INT_MAX 26 // max for random number generator
/*Function generates a random char from A-Z*/
char randchar(){
    int x = rand() % (INT_MAX + 1) + INT_MIN; //generating a random number
    //Determining the letter that was chosen by the random num generator and returning it
    switch(x){ 
        case 1: 
            return 'A';
        case 2:
            return 'B';
        case 3:
            return 'C';
        case 4:
            return 'D';
        case 5:
            return 'E';
        case 6:
            return 'F';
        case 7:
            return 'G';
        case 8:
            return 'H';
        case 9:
            return 'I';
        case 10:
            return 'J';
        case 11:
            return 'K';
        case 12:
            return 'L';
        case 13:
            return 'M';
        case 14:
            return 'N';
        case 15:
            return 'O';
        case 16:
            return 'P';
        case 17:
            return 'Q';
        case 18:
            return 'R';
        case 19:
            return 'S';
        case 20:
            return 'T';
        case 21:
            return 'U';
        case 22:
            return 'V';
        case 23:
            return 'W';
        case 24:
            return 'X';
        case 25:
            return 'Y';
        case 26:
            return 'Z';
            default:
            return '\0';
    }

    
}