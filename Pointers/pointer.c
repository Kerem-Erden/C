#include <stdio.h>
#include <string.h>

int main() {
    char str[32];
    char *p;

    strncpy(str,"I like apples", sizeof(str));
    p = str;

    printf("%s\n", p);

    return 0;
}