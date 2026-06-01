#include <stdio.h>

unsigned setbits(unsigned x, int p, int n, unsigned y) {
    unsigned mask = ~(~0 << n);

    unsigned xHizali = x & ~(mask << (p + 1 - n));
    unsigned yHizali = (y & mask) << (p + 1 - n);

    return xHizali | yHizali;
}

int main() 
{
    unsigned tmp;
    tmp = setbits(0b11111111, 4, 3, 0b00000000);
    printf("%u", tmp);

    return 0;
}