#include <stdio.h>

int main() {
    int n;
    int i;

    printf("Enter a number to print it's multiplication table :");
    scanf("%d", &n);

    for (i = 1 ; i<= 10 ; i++) {
        printf("%d x %d = %d\n", n, i, n*i);
    }
    return 0;
}