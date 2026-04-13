#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char ch, filename[100];
    int upper = 0, lower = 0, digits = 0, vowels = 0, special = 0;

    printf("Enter the filename to read: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Could not open file %s\n", filename);
        return 1;
    }

    // Read character by character until End Of File (EOF)
    while ((ch = fgetc(fp)) != EOF) {
        // 1. Check for Uppercase and Lowercase
        if (isupper(ch)) {
            upper++;
        } else if (islower(ch)) {
            lower++;
        }

        // 2. Check for Digits
        if (isdigit(ch)) {
            digits++;
        }

        // 3. Check for Vowels (both cases)
        char lower_ch = tolower(ch);
        if (lower_ch == 'a' || lower_ch == 'e' || lower_ch == 'i' ||
            lower_ch == 'o' || lower_ch == 'u') {
            vowels++;
        }

        // 4. Check for Special Symbols
        // (Non-alphanumeric and not a whitespace character)
        if (!isalnum(ch) && !isspace(ch)) {
            special++;
        }
    }

    fclose(fp);

    // Display Results
    printf("\n--- File Analysis Results ---\n");
    printf("Upper Case Letters : %d\n", upper);
    printf("Lower Case Letters : %d\n", lower);
    printf("Digits             : %d\n", digits);
    printf("Vowels             : %d\n", vowels);
    printf("Special Symbols    : %d\n", special);

    return 0;
}

