#include <stdio.h>

unsigned bitcount(unsigned x) {
    int b;

    for (b = 0; x != 0; x &= (x - 1)) {
        b++; 
    }
    return b;
}

int main() 
{
    unsigned testNum = 0b10100100;
    printf("%d",bitcount(testNum));

    return 0;
}