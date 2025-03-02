/*  Write a program to store n numbers and find their sum using dynamic memory allocation */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, *arr;
    long long sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    arr = (int*)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        sum += arr[i];
    }

    printf("Sum of the elements: %lld\n", sum);

    free(arr);

    return 0;
}