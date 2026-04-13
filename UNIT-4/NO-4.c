#include <stdio.h>

int main() {
    FILE *fptr;
    char content[100];

    fptr = fopen("example.txt", "a");

    if (fptr == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    printf("Enter text to append to the file: ");
    gets(content);

    fprintf(fptr, "\n%s", content);

    fclose(fptr);

    printf("Content appended successfully!\n");
    return 0;
}

