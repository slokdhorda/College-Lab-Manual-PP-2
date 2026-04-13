#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[50];

    printf("Enter first string: ");
    gets(s1);
    printf("Enter second string: ");
    gets(s2);
    strcat(s1, s2);

    printf("Concatenated string: %s\n", s1);

    return 0;
}

