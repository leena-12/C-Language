#include <stdio.h>

int factorial(int n);

int main() {
    int num, result;

    printf("Enter a positive number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for the negative numbers.\n");
    } else {
        result = factorial(num);
        printf("Factorial of %d is: %d\n", num, result);
    }

    return 0;
}

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}