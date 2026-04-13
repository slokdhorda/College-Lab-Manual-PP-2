#include <stdio.h>
#include <stdlib.h>

int isPrime(int num) {
    if (num < 2) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n, sum = 0;
    int *arr;

    printf("Enter number of elements (N): ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if (isPrime(arr[i])) {
            sum += arr[i];
        }
    }

    printf("Sum of prime numbers = %d\n", sum);

    free(arr);

    return 0;
}

