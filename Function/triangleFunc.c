#include <stdio.h>

int triangle_Area(int base, int height)
{
    return base * height / 2;
}

int main() {
    int baseVal, heightVal, areaVal;

    printf("Triangle base: ");
    fflush(stdout); //clear the previos output buffer
    scanf("%d", &baseVal);

    printf("Triangle height: ");
    fflush(stdout);
    scanf("%d", &heightVal);

    areaVal = triangle_Area(baseVal, heightVal);

    printf("Trinangle area is: %d", areaVal);

    return 0;
}