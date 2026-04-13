#include <stdio.h>
#include <stdlib.h>

int main() {
    int r, c, i, j;
    printf("Rows/Cols: "); scanf("%d %d", &r, &c);

    int **a = malloc(r * sizeof(int*)), **b = malloc(r * sizeof(int*));
    for (i = 0; i < r; i++) {
        a[i] = malloc(c * sizeof(int));
        b[i] = malloc(c * sizeof(int));
    }

    printf("Matrix A:\n");
    for (i = 0; i < r; i++) for (j = 0; j < c; j++) scanf("%d", (*(a+i)+j));

    printf("Matrix B:\n");
    for (i = 0; i < r; i++) for (j = 0; j < c; j++) scanf("%d", (*(b+i)+j));

    printf("Result (A-B):\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++)
            printf("%d ", *(*(a+i)+j) - *(*(b+i)+j));
        printf("\n");
    }

    return 0;
}
