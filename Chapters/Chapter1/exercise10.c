#include <stdio.h>

float fahrenheitToCelcius (float fah);
 //C = (F - 32) X 5/9

int main() 
{
    printf("%.2f\n", fahrenheitToCelcius(100));
    return 0;
}

float fahrenheitToCelcius (float fah)
{
   
    float  c;
    return c = (fah - 32 ) * 5 / 9;
}