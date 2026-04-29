#include <stdio.h>
#define F fflush(stdout);

void multi (int tableNumber, int value)
{
    int result;

    result = tableNumber * value;
    printf("%d x %d = %d\n", tableNumber, value, result);

    return;
}

int main() 
{
    int x, table;

    printf("Select multiplication table: "); F;
    scanf("%d", &table);

    for (x = 0; x < 13; x++)
      multi(table, x);
    
    return 0;
}