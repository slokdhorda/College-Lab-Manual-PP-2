#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    FILE *fs, *ft;
    char ch;

    if (argc != 3) {
        printf("Usage: %s <source> <destination>\n", argv[0]);
        return 1;
    }

    fs = fopen(argv[1], "rb");
    if (fs == NULL) {
        printf("Cannot open source file %s\n", argv[1]);
        return 1;
    }

    ft = fopen(argv[2], "wb");
    if (ft == NULL) {
        fclose(fs);
        printf("Cannot open destination file %s\n", argv[2]);
        return 1;
    }

    while ((ch = fgetc(fs)) != EOF) {
        fputc(ch, ft);
    }

    printf("File copied successfully.\n");

    fclose(fs);
    fclose(ft);

    return 0;
}

