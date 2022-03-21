#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int number;
    srand(time(0));            // it used for time to change random number in every time in execution
    number = rand() % 100 + 1; // generate random number between 1 to 100
    printf(" The number is %d \n ", number);

    return 0;
}