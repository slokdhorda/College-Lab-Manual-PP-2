#include <stdio.h>

int main() {
    FILE *fptr;
    char ch;
    int characters = 0, spaces = 0, tabs = 0, lines = 0;

    fptr = fopen("test.txt", "r");

    if (fptr == NULL) {
        printf("Could not open file.\n");
        return 1;
    }

    while ((ch = fgetc(fptr)) != EOF) {
        characters++;

        if (ch == ' ') {
            spaces++;
        } else if (ch == '\t') {
            tabs++;
        } else if (ch == '\n') {
            lines++;
        }
    }

    if (characters > 0 && ch != '\n') {
        lines++;
    }

    fclose(fptr);

    printf("Characters: %d\n", characters);
    printf("Spaces: %d\n", spaces);
    printf("Tabs: %d\n", tabs);
    printf("Lines: %d\n", lines);

    return 0;
}
