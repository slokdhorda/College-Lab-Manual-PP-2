#include <stdio.h>

int binarySearch(int arr[], int low, int high, int searchValue) {
    if (low > high) {
        return -1; 
    }

    int mid = (low + high) / 2;

    if (arr[mid] == searchValue) {
        return mid; 
    } else if (arr[mid] < searchValue) {
        return binarySearch(arr, mid + 1, high, searchValue);
    } else {
        return binarySearch(arr, low, mid - 1, searchValue);
    }
}

int main() {
    int N, i, searchValue, result;

    printf("Enter number of elements: ");
    scanf("%d", &N);

    int arr[N];  

    printf("Enter %d elements in sorted order:\n", N);
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter value to search: ");
    scanf("%d", &searchValue);

    result = binarySearch(arr, 0, N - 1, searchValue);

    if (result != -1) {
        printf("Value %d found at position %d\n", searchValue, result + 1);
    } else {
        printf("Value %d not found in the list.\n", searchValue);
    }

    return 0;
}