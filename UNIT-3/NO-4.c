#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    float sum = 0, average;
    int *arr;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    arr = (int*)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    average = sum / n;

    printf("\nSum = %.2f", sum);
    printf("\nAverage = %.2f\n", average);

    free(arr);

    return 0;
}
