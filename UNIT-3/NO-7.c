
#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows, cols, i, j;

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);
1

    int *mat1[rows], *mat2[rows], *res[rows];

    for (i = 0; i < rows; i++) {
        mat1[i] = (int *)malloc(cols * sizeof(int));
        mat2[i] = (int *)malloc(cols * sizeof(int));
        res[i]  = (int *)malloc(cols * sizeof(int));
    }

    printf("Enter elements of Matrix 1:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", (mat1[i] + j));
        }
    }

    printf("Enter elements of Matrix 2:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", (mat2[i] + j));
        }
    }

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            *(*(res + i) + j) = *(*(mat1 + i) + j) + *(*(mat2 + i) + j);
        }
    }

    printf("\nResultant Matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", *(*(res + i) + j));
        }
        printf("\n");
    }

    // 7. Free allocated memory
    for (i = 0; i < rows; i++) {
        free(mat1[i]);
        free(mat2[i]);
        free(res[i]);
    }

    return 0;
}
