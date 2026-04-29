#include <stdio.h>

void addittion(int val1, int val2, int *target)
{
    *target = val1 + val2;
    return;
} 

int main()
{
    int x, y, answer;

    x = 5;
    y = 10;
    addittion(x, y, &answer);

    printf("%d\n", answer);

    return 0;
}