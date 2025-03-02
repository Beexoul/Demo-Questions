/* Write a program to illustrate call by value and call by reference.  */

#include <stdio.h>

void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

void swapByReference(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10, y = 20;
    
    printf("Before swapping:\n");
    printf("x = %d, y = %d\n", x, y);
    
    // Call by value
    swapByValue(x, y);  // giving actual values to the function
    printf("After swapping by value:\n");
    printf("x = %d, y = %d\n", x, y);
    
    // Call by reference
    swapByReference(&x, &y); // giving addresses of the variables to the function
    printf("After swapping by reference:\n");
    printf("x = %d, y = %d\n", x, y);
    
    return 0;
}