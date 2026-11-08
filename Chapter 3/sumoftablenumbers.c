//to calculate the sum of numbers occuring in the multiplication table.

#include <stdio.h>

int main() {
    int n;
    int i;
    int sum = 0;

    printf("Enter a number to print it's multiplication table :");
    scanf("%d", &n);

    for (i = 1 ; i<= 10 ; i++) {
        printf("%d x %d = %d\n", n, i, n*i);
        sum = sum + (n*i);
    }
     
    printf("The sum of the numbers occuring in the multiplication is : %d\n", sum);
    return 0;
}