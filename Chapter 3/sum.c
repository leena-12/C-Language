#include <stdio.h>

int main() {
    int n = 0;
    int i = 1;

    while (i<= 10) {
        n = n+i ;
        i++;
    }

    printf("The sum of first ten natural numbers is : %d\n", n);

    for (i = 1 ; i <=10 ; i++) {
        n = n+i ;
    }

    printf("The sum of first ten natural numbers is : %d\n", n);

    return 0;
}