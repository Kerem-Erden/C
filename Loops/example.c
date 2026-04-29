#include <stdio.h>

int main () {
    int bombSec;

    bombSec = 10; // defining the second
    while (bombSec >= 0) {
        printf("%d second remaining.\n",bombSec);
        
        if (bombSec == 0){
            printf("BOOOM!!");
            return 0;
        }
        else{
            bombSec--;
        }
    }
}