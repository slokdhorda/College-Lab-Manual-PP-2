#include <stdio.h>

int main() {
    int N, i, j, minIndex, temp;

    printf("Enter number of elements: ");
    scanf("%d", &N);

    int arr[N]; 

    printf("Enter %d elements:\n", N);
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < N - 1; i++) {
        minIndex = i;
        for (j = i + 1; j < N; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }

    printf("Array in ascending order:\n");
    for (i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}