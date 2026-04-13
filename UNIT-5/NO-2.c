#include <stdio.h>

int main() {
    int N, i, searchValue, low, high, mid, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &N);

    int arr[N]; 

    printf("Enter %d elements in sorted order:\n", N);
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter value to search: ");
    scanf("%d", &searchValue);

    low = 0;
    high = N - 1;

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == searchValue) {
            printf("Value %d found at position %d\n", searchValue, mid + 1);
            found = 1;
            break;
        } else if (arr[mid] < searchValue) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (!found) {
        printf("Value %d not found in the list.\n", searchValue);
    }

    return 0;
}