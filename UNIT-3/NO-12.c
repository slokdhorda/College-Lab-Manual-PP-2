#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    gets(str);

    while (str[i]) {

        str[i] = tolower(str[i]);
        i++;
    }

    printf("Lowercase string: %s\n", str);

    return 0;
}

