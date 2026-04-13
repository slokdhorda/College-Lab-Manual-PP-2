#include <stdio.h>

int main() {
    FILE *f1, *f2;
    int num, rev = 0, rem;

    f1 = fopen("input.txt", "r");
    f2 = fopen("output.txt", "w");

    if (f1 == NULL || f2 == NULL) {
        printf("Error opening files!");
        return 1;
    }

    if (fscanf(f1, "%d", &num) == 1) {
        int temp = num;
        while (temp != 0) {
            rem = temp % 10;
            rev = rev * 10 + rem;
            temp /= 10;
        }
        fprintf(f2, "%d", rev);
        printf("Number reversed and saved to output.txt\n");
    } else {
        printf("No valid number found in input.txt\n");
    }

    fclose(f1);
    fclose(f2);

    return 0;
}

