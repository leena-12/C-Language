#include <stdio.h>

int main() {
    int n;
    int i;
    int factorial =1;

    printf("Enter the number to calculate it's factorial :");
    scanf("%d", &n);

    for (i = 1 ; i <= n ; i++) {
        factorial = factorial *i ;
    }

    printf("The factorial of the number %d is : %d\n", n, factorial);

    return 0;
}