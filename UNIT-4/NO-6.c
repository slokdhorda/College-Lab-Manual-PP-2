
#include <stdio.h>

int main() {
    FILE *f1, *f2, *f3;
    int num, i;

    f1 = fopen("DATA.txt", "w");
    if (f1 == NULL) {
        printf("Error opening DATA.txt\n");
        return 1;
    }
    for (i = 1; i <= 10; i++) {
        fprintf(f1, "%d\n", i);
    }
    fclose(f1);

    f1 = fopen("DATA.txt", "r");
    f2 = fopen("ODD.txt", "w");
    f3 = fopen("EVEN.txt", "w");

    if (f1 == NULL || f2 == NULL || f3 == NULL) {
        printf("Error opening files for processing\n");
        return 1;
    }

    while (fscanf(f1, "%d", &num) != EOF) {
        if (num % 2 == 0) {
            fprintf(f3, "%d\n", num);
        } else {
            fprintf(f2, "%d\n", num);
        }
    }


    fclose(f1);
    fclose(f2);
    fclose(f3);

    printf("Data successfully separated into ODD.txt and EVEN.txt\n");

    return 0;
}
