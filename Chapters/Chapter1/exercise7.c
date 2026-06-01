#include <stdio.h>

int main() 
{
    int c, nl, blank;
    
    blank = 0;
    while((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t' || c == '\n')
        {
            if (blank)
            {
                putchar('\n');
                blank = 0;
            }
        }    
        else 
        {
            putchar(c);
            blank = 1;
        }  
    }

    return 0;
}