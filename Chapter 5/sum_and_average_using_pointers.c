#include <stdio.h>

void calculate(int *a, int *b, int *sum, float *average)
{
    *sum = *a + *b;
    *average = *sum / 2.0;
}

int main()
{
    int num1, num2, sum;
    float average;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    calculate(&num1, &num2, &sum, &average);

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}