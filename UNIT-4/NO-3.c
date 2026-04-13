
#include <stdio.h>

int main() {
    FILE *sourceFile, *targetFile;
    char ch;

    sourceFile = fopen("example.txt", "r");
    if (sourceFile == NULL) {
        printf("Error: Could not open source file.\n");
        return 1;
    }

    targetFile = fopen("test.txt", "w");
    if (targetFile == NULL) {
        printf("Error: Could not open target file.\n");
        fclose(sourceFile);
        return 1;
    }

    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, targetFile);
    }

    printf("File copied successfully.\n");

    fclose(sourceFile);
    fclose(targetFile);

    return 0;
}
