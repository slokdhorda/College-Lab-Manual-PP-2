#include <stdio.h>

int main() {
    FILE *fp;
    char ch;

    fp = fopen("demo.txt", "w+");
    fputs("ABCDEFGHIJ", fp); // Writing 10 characters

    // 1. Using ftell() to see current position (should be 10)
    printf("Current position after writing: %ld\n", ftell(fp));

    // 2. Using fseek() to move 3 bytes from the beginning
    fseek(fp, 3, SEEK_SET);
    printf("Position after fseek(3, SEEK_SET): %ld\n", ftell(fp));
    printf("Character at this position: %c\n", fgetc(fp)); // Reads 'D'

    // 3. Using fseek() to move 2 bytes backward from current position
    fseek(fp, -2, SEEK_CUR);
    printf("Position after fseek(-2, SEEK_CUR): %ld\n", ftell(fp));
    printf("Character at this position: %c\n", fgetc(fp)); // Reads 'C'

    // 4. Using rewind() to go back to the start
    rewind(fp);
    printf("Position after rewind(): %ld\n", ftell(fp));
    printf("First character: %c\n", fgetc(fp)); // Reads 'A'

    fclose(fp);
    return 0;
}

