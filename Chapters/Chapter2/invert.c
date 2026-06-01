#include <stdio.h>

unsigned invert(unsigned x, int p, int n) {
    
    unsigned mask = ~(~0 << n);
    return (x ^ (mask << (p + 1 - n))); 
    //0 ^ 1 = 1 
    //1 ^ 1 = 0 
    //0 ^ 0 = 0 XOR
    //1 ^ 0 = 1

}

int main() 
{
    unsigned tmp;
    tmp = invert(0b11111111, 4, 3);
    printf("%u",tmp);

    return 0;
}