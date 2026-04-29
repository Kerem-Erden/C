#include <stdio.h>

int main() {
    int velocity;

    printf("What is your speed ?\n");
    scanf("%d",&velocity);

    if (velocity > 100)
        printf("You are too fast!\n");
    else if (velocity > 80)
        printf("Your speed safely\n");
    else
        printf("OK");
        
    return 0;
}