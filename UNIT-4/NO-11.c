#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    long size;

    printf("Enter filename: ");
    scanf("%s", filename);

    fp = fopen(filename, "rb");
    if (fp == NULL) {
        printf("File not found!\n");
        return 1;
    }

    fseek(fp, 0L, SEEK_END);
    size = ftell(fp);
    fclose(fp);

    printf("Size of the file is %ld bytes.\n", size);

    return 0;
}

