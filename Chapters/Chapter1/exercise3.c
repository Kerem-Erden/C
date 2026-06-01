#include <stdio.h>

int main() 
{
    int c;
    
    while((c = getchar()) != EOF)
    {
        
        printf("\n%d\n", c);
        printf("EOF: %d\n", EOF);
    }

    return 0;
}