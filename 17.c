/* Write a user-defined function to find the sum of elements of m*n matrix and finally 
returns the sum to the calling function. */

#include <stdio.h>

int sumMatrix(int matrix[10][10], int m, int n) {
    int sum = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            sum += matrix[i][j];
        }
    }
    return sum;
}

int main() {
    int matrix[10][10], m, n;
    printf("Enter the number of rows (m): ");
    scanf("%d", &m);
    printf("Enter the number of columns (n): ");
    scanf("%d", &n);
    
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Element at [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
    
    int sum = sumMatrix(matrix, m, n);
    printf("Sum of elements in the matrix: %d\n", sum);
    
    return 0;

}