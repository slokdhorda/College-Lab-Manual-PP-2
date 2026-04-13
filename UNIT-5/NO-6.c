#include <stdio.h>

int main() {
    int N, i, j, gap, temp;

    printf("Enter number of elements: ");
    scanf("%d", &N);

    int arr[N]; 

    printf("Enter %d elements:\n", N);
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    for (gap = N / 2; gap > 0; gap /= 2) {
        for (i = gap; i < N; i++) {
            temp = arr[i];
            j = i;

            while (j >= gap && arr[j - gap] > temp) {
                arr[j] = arr[j - gap];
                j -= gap;
            }
            arr[j] = temp;
        }
    }

    printf("Array in ascending order:\n");
    for (i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}