#include <stdio.h>

int main()
{
    int arr[5];
    int *ptr;
    int i, sum = 0;

    ptr = arr;

    printf("Enter 5 numbers:\n");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", ptr + i);
    }

    for (i = 0; i < 5; i++)
    {
        sum = sum + *(ptr + i);
    }

    printf("Sum of array elements = %d\n", sum);

    return 0;
}