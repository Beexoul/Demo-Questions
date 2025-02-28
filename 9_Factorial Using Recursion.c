/*  Write a program to find factorial of a given number using recursive function. */
#include <stdio.h>
/* Recursive function to calculate factorial */

int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    int result = factorial(num);
    printf("Factorial of %d is %d\n", num, result);
    return 0;
}
