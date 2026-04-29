#include <stdio.h>
#include <unistd.h>

int main() {

    printf("Wait 5 second...\n");
    fflush(stdout);
    sleep(5);
    printf("Ok\n");
}
