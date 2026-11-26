#include <stdio.h>
#include <string.h>

int main() {
    char name[50];
    char copy[50];
    char full[100];

    printf("Enter your name: ");
    scanf("%49s", name);              // reads one word

    printf("Hello, %s\n", name);

    printf("Length: %zu\n", strlen(name));

    strcpy(copy, name);               // copy
    printf("Copy: %s\n", copy);

    strcpy(full, "Mr. ");
    strcat(full, name);               // join
    printf("Joined: %s\n", full);

    if (strcmp(name, copy) == 0)      // compare
        printf("Both strings are equal\n");
    else
        printf("Strings are different\n");

    // print each character
    for (int i = 0; name[i] != '\0'; i++) {
        printf("%c ", name[i]);
    }
    printf("\n");

    return 0;
}