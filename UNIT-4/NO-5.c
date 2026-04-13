#include <stdio.h>
#include <string.h>

int main() {
    FILE *f1, *f2;
    char str[100];
    int length, i;

    f1 = fopen("greencity.txt", "w");
    if (f1 == NULL) {
        printf("Error opening greencity.txt\n");
        return 1;
    }

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;
    fprintf(f1, "%s", str);
    fclose(f1);

    f1 = fopen("greencity.txt", "r");
    f2 = fopen("cleancity.txt", "w");

    if (f1 == NULL || f2 == NULL) {
        printf("Error opening files for processing\n");
        return 1;
    }

    fgets(str, sizeof(str), f1);
    length = strlen(str);

    printf("\n--- Terminal Output ---\n");
    printf("Original String (from greencity.txt): %s\n", str);
    printf("Reversed String (sent to cleancity.txt): ");

    for (i = length - 1; i >= 0; i--) {
        fputc(str[i], f2);
        putchar(str[i]);
    }

    printf("\n-----------------------\n");

    fclose(f1);
    fclose(f2);

    return 0;
}
