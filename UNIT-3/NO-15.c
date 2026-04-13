#include <stdio.h>
#include <string.h>

int main() {
    char source[100], target[100];

    printf("Enter a string: ");
    gets(source);

    strcpy(target, source);

    printf("Source string: %s\n", source);
    printf("Target string: %s\n", target);

    return 0;
}

