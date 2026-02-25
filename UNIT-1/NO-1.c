#include <stdio.h>

int main() {
    int n, i;

    printf("How many elements: ");
    scanf("%d", &n);

    int arr[n];


    for(i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\nyour elements are: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
