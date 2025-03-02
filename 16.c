/*  Write a program to input n number in an array and find largest number in an array using 
user-defined function.  */

#include <stdio.h>

int findLargest(int arr[], int n) {
    int largest = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int largestNumber = findLargest(arr, n);
    printf("Largest number in the array is: %d\n", largestNumber);
    
    return 0;
}
