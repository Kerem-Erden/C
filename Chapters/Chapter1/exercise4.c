#include <stdio.h>

int main() 
{
    static int c, nl, ct, cb;
    
    nl = ct = cb = 0;
    while((c = getchar()) != EOF)
    {
        if (c == '\n')
            nl++;
        else if (c == ' ')
            cb++;
        else if (c == '\t')
            ct++;     
        
    }

    printf("New line count: %d\nTabs count: %d\nBlank count: %d\n", nl, ct, cb);

    return 0;
}