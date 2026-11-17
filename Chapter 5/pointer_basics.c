#include <stdio.h>

int main()
{
    int age = 20;
    int *ptr;

    ptr = &age;

    printf("Value of age = %d\n", age);
    printf("Address of age = %p\n", ptr);
    printf("Value using pointer = %d\n", *ptr);

    return 0;
}