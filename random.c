#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <stdio.h>

#define INT_MIN 1  // min for random number generator
#define INT_MAX 26 // max for random number generator

char * randChar(){
    srand((unsigned)time(NULL));
    int x = rand() % (INT_MAX + 1) + INT_MIN;
    return NULL;

    /*switch(x){
        case 1: 
        result = 'A';
            return &result;
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
            return '5';
    }

    */
}