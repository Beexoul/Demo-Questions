/*
Write a program to read the radius of the circular plot and calculate its area and print
 "Forest" if area > 5000
 "Sports Complex" if 2000 ≤ area ≤ 5000
 “Lawn" if the area is < 2000 
*/

#include <stdio.h>
int main() {
    float radius;

    printf("Enter the radius of the circular plot: ");
    scanf("%f", &radius);

    float area = 3.14159 * radius * radius;

    if (area > 5000) {
        printf("Forest\n");
    } else if (2000 <= area && area <= 5000) {
        printf("Sports Complex\n");
    } else {
        printf("Lawn\n");
    }

    return 0;
}