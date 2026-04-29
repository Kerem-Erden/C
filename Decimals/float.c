#include <stdio.h>

int main () {
    float radius, pi, area;

    pi = 3.14;
    printf("Radius: \n");
    scanf("%f", &radius);

    area = radius * radius * pi;
    printf("Area: %f", area);



    return 0;
}