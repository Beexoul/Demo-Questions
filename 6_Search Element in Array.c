/* WAP to check whether the given number is present in an array or not and if present find
its position.
*/

#include <stdio.h>

int main() {
    int arr[100];
    int n, i, num, found = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input elements
    for(i = 0; i < n; i++) {
        printf("Enter elements %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the number to search: ");
    scanf("%d", &num);
    
    // Search for the number
    for(i = 0; i < n; i++) {
        if(arr[i] == num) {
            found = i;
            break;
        }
    }
    printf("The number %d is ", num);
    if(found!=0) {
        printf("found at position %d\n", found+1);
    } else {
        printf("not found\n");
    }
    return 0;
}