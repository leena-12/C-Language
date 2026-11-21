#include <stdio.h>

int main()
{
    int arr[5];
    int i, temp;

    printf("Enter 5 numbers:\n");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 5 / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[4 - i];
        arr[4 - i] = temp;
    }

    printf("Reversed array:\n");

    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}