
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char randchar() {
    //Generate a random number between 65(A) and 90(Z)
    int randomNum = rand() % 26 + 65;
    
    //random number ---> character
    char randomChar = (char)randomNum;
    return randomChar;
}