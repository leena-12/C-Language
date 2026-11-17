#include <stdio.h>

int main()
{
    int number = 10;
    int *ptr;

    ptr = &number;

    printf("Before changing: %d\n", number);

    *ptr = 50;

    printf("After changing: %d\n", number);

    return 0;
}