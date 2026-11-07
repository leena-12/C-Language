#include <stdio.h>

int main() {
    int income ;
    float amount ;

    printf("Enter the amount of employees salary :");
    scanf("%d", &income);

    if (income > 250000 && income < 500000) {
        printf("The tax will be applied is %5 .\n");

        amount = income * 5/ 100;
        printf("The total tax the employee will pay is : %.2f\n", amount);
    }

    else if (income > 500000 && income < 1000000) {
        printf("The tax will be applied is %20 .\n");

        amount = income * 20/ 100;
        printf("The total tax the employee will pay is : %.2f\n", amount);
    }

    else if (income > 1000000 ) {
        printf("The tax will be applied is %30 .\n");

        amount = income * 30/ 100;
        printf("The total tax the employee will pay is : %.2f\n", amount);
    }

    else {
        printf("The tax is not applied .");
    }

    return 0;
}