/* Write a program to illustrate returning multiple values from function. */

#include <stdio.h>

void getNumbers(int *num1, int *num2) {
    printf("Enter two numbers: ");
    scanf("%d %d", num1, num2);
}

int main() {
    int num1, num2;
    getNumbers(&num1, &num2);
    printf("Sum of the two numbers: %d\n", num1 + num2);
    printf("Difference of the two numbers: %d\n", num1 - num2);
    printf("Product of the two numbers: %d\n", num1 * num2);
    printf("Division of the two numbers: %.2f\n", (float)num1 / num2);
    return 0;
}
