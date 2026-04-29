#include <stdio.h>

int main() {
    float height, width, area;

    printf("Height: \n");
    scanf("%f",&height);

    printf("Width: \n");
    scanf("%f", &width);

    area = width * height / 2;
    printf("Area: %f", area);

    return 0;

}