#include <stdio.h>

void findArea(float *r, float *a) {
    *a = 3.14159 * (*r) * (*r);
}

int main() {
    float radius, area;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    findArea(&radius, &area);

    printf("The area of the circle is: %.2f\n", area);

    return 0;
}

