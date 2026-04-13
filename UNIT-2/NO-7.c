#include <stdio.h>

// 1. Define the structure
struct Complex {
    float real;
    float imag;
};

// 2. Function that takes structures as arguments
struct Complex add(struct Complex n1, struct Complex n2) {
    struct Complex temp;
    temp.real = n1.real + n2.real;
    temp.imag = n1.imag + n2.imag;
    return temp;
}

int main() {
    struct Complex num1, num2, sum;

    // Input first number
    printf("Enter real and imaginary part for 1st number: ");
    scanf("%f %f", &num1.real, &num1.imag);

    // Input second number
    printf("Enter real and imaginary part for 2nd number: ");
    scanf("%f %f", &num2.real, &num2.imag);

    // 3. Pass the structures to the function
    sum = add(num1, num2);

    // Print result
    printf("Sum = %.1f + %.1fi", sum.real, sum.imag);

    return 0;
}
