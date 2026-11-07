//to check whether the word is in lowercase or not.

#include <stdio.h>
#include <ctype.h>

int main() {
    char word ;

    printf ("Enter the word you want to check : ");
    scanf("%c", &word);

    if (islower(word)) {
        printf("The entered word is in lowercase.\n", word); 
    } else {
        printf("The entered word is not in lowercase.\n", word); 
    }

    return 0;
}