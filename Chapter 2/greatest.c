/*#include <stdio.h>

int main() {
    int number;
    int i;

    for ( i = 0; i <= 3; i++)
    {
        printf("Enter the numbers :");
        scanf("%d", &number);
    }
    

    return 0;
}*/

#include <stdio.h>

int main() {
    int number;
    int greatest;
    int i;

    printf("Enter number 1: ");
    scanf("%d", &greatest);

    for (i = 2; i <= 4; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &number);

        if (number > greatest) {
            greatest = number;
        }
    }

    printf("The greatest number is: %d\n", greatest);

    return 0;
}

