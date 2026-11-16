#include <stdio.h>

int greatest(int a, int b);

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("The greatest number is: %d\n", greatest(num1, num2));
    return 0;
}

int greatest(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}