#include <stdio.h>

int main()
{
    int x;

    printf("Choose 1. apples, 2. pears or 3. bananas\n");
    scanf("%d", &x);

    switch(x)
    {
        case 1:
            printf("Apples\n");
            break;
        case 2:
            printf("pears\n");
            break;
        case 3:
            printf("bananas\n");
            break;
        case 4:
            printf("someting else\n");
            break;
        default:
            break;
    }


    return 0;
}