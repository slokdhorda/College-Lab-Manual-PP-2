#include <stdio.h>

int main() {
    int N, i, searchValue, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &N);

    int arr[N];  

    printf("Enter %d elements:\n", N);
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter value to search: ");
    scanf("%d", &searchValue);

    for (i = 0; i < N; i++) {
        if (arr[i] == searchValue) {
            printf("Value %d found at position %d\n", searchValue, i + 1);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Value %d not found in the list.\n", searchValue);
    }

    return 0;
}