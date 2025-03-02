/*  Write a program to store n numbers and find the largest number among them using 
dynamic memory allocation. */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, *arr;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    arr = (int*)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d numbers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int largest = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    printf("The largest number is: %d\n", largest);

    free(arr);

    return 0;
}