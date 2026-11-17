#include <stdio.h>

void findLargest(int *a, int *b, int *largest)
{
    if (*a > *b)
    {
        *largest = *a;
    }
    else
    {
        *largest = *b;
    }
}

int main()
{
    int num1, num2, largest;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    findLargest(&num1, &num2, &largest);

    printf("Largest number = %d\n", largest);

    return 0;
}