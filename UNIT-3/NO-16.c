#include <stdio.h>
#include <string.h>

int main() {
    char str[50];
    int i, n, flag = 0;

    printf("Enter a string: ");
    gets(str);

    n = strlen(str);

    for (i = 0; i < n / 2; i++) {
        if (str[i] != str[n - 1 - i]) {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("%s is a palindrome.\n", str);
    else
        printf("%s is not a palindrome.\n", str);

    return 0;
}

