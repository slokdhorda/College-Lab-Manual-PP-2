#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp, *temp;
    char ch, filename[100];

    printf("Enter filename: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");
    temp = fopen("temp.dat", "w");

    if (fp == NULL || temp == NULL) {
        printf("Error opening file!");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        if (ch == 'a') {
            fputc('x', temp);
        } else if (ch == 'A') {
            fputc('X', temp);
        } else {
            fputc(ch, temp);
        }
    }

    fclose(fp);
    fclose(temp);

    remove(filename);
    rename("temp.dat", filename);

    printf("Replacement successful.\n");

    return 0;
}

