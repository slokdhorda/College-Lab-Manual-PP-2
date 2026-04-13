#include <stdio.h>

int getmaxnum(int a, int b) {
    return (a > b) ? a : b;
}

int getminnum(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    int x, y;

    int (*ptr)(int, int);

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    ptr = getmaxnum;
    printf("Maximum: %d\n", ptr(x, y));

    ptr = getminnum;
    printf("Minimum: %d\n", ptr(x, y));

    return 0;
}

