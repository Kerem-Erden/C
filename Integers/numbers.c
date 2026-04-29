#include <stdio.h>


//%d integer
//% string

int main () {
    int number1, number2, result;

    printf("Number1: \n");
    scanf ("%d", &number1);

    printf("Number2: \n");
    scanf ("%d", &number2);

    result = number1 + number2;
    printf ("Result: %d\n", result);


    return 0;
}