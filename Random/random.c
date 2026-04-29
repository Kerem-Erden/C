#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int our_random_function(int max);

int our_random_function(int max) 
{
    return rand() % max + 1;
}

int main() {

    int random;

   /* printf("%d\n", getpid());
    return 0;
*/
    /* ******************** */

    srand(getpid());
    random = our_random_function(5);
    printf("%d\n", random);

    random = our_random_function(10);
    printf("%d\n", random);

    return 0;
}