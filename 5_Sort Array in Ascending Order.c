/*
Write a program to store n number in an array and sort them in ascending order.
*/

#include <stdio.h>

int main() {
    int n;
int arr[100];
    int i, j, temp;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    
    // Input elements
    for(i = 0; i < n; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    
    // Bubble Sort
    for(i = 0; i < n-1; i++) {
        for(j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    // Output sorted array
    printf("Sorted array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}