#include <stdio.h>

unsigned rightrot(unsigned x, int n) {

    int sumOfBit = sizeof(unsigned) * 8;

    n = n % sumOfBit;

    if (n == 0) {
        return x;
    }

    return (x >> n) | (x << (sumOfBit - n));
}

int main() 
{
    unsigned tmp;
    tmp = rightrot(0b10101010, 3);
    printf("%u", tmp);
    
    return 0;
}