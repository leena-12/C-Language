#include <stdio.h>

int main() {
    int subject1;
    int subject2;
    int subject3;
    float percentage;

    printf("Enter the marks for subject1 :");
    scanf("%d", &subject1);

    printf("Enter the marks for subject2 :");
    scanf("%d", &subject2);

    printf("Enter the marks for subject3 :");
    scanf("%d", &subject3);
    
    percentage = (subject1+subject2+subject3) / 3.0 ;

    printf("The total percentage of the student is : %.2f%%\n", percentage);
    
    if (percentage < 40){
        printf("The student is fail.");
    } else {
        printf("The student is passed .");
    }

    return 0;
}