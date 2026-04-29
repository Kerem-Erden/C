#include <stdio.h>
#include<string.h>

struct person 
{
    char name[8];
    char lastName[16];
    int age;
};

int main()
{
    struct person person1;

    strncpy(person1.name, "Kerem", 7);
    strncpy(person1.lastName,"Blade", 15);
    person1.age = 100;

    printf("%s %s of the age: %d\n", person1.name, person1.lastName, person1.age);

    return 0;
}