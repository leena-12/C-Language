#include <stdio.h>

void swap(int a, int b);

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Before swapping: %d and %d\n", num1, num2);

    swap(num1, num2);

    printf("After swapping in main: %d and %d\n", num1, num2);
    return 0;
}

void swap(int a, int b) {
    int temp;

    temp = a;
    a = b;
    b = temp;

    printf("Inside swap function: %d and %d\n", a, b);
}