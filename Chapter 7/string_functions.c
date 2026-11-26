#include <stdio.h>
#include <string.h>

int main() {
    char st[] = "rohan";

    printf("Length of st = %d\n", strlen(st));

    char source[] = "leeena";
    char target[30];

    strcpy(target, source);

    printf("Source = %s\n", source);
    printf("Target = %s\n", target);

    return 0;
}