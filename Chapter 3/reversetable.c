#include <stdio.h>

int main() {
    int n;
    int i;

    printf("Enter a number to print it's multiplication table in reverse order:");
    scanf("%d", &n);

    for (i = 10 ; i>= 1 ; i--) {
        printf("%d x %d = %d\n", n, i, n*i);
    }
    return 0;
}