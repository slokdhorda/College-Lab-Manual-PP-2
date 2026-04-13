#include <stdio.h>

int main() {
    int N, i, j, key;

    printf("Enter number of elements: ");
    scanf("%d", &N);

    int arr[N];  
    printf("Enter %d elements:\n", N);
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 1; i < N; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }

    printf("Array in ascending order:\n");
    for (i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}