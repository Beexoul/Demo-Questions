/*
An electricity board charges according to following rates.
For the first 20 units …………………….Rs.80
For the next 80 units……………….Rs.7.5 per unit
For the next 100 units ……………….Rs. 8.5 per unit
For the beyond 200 units…………..Rs.9.5 per unit And Tax 15% in total amount is
charged to all users. Write a program to read number of units consumed and print out the
total charge.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int units;
    float charge, totalCharge;
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);
    if(units <= 20) { // For the first 20 units
        charge = 80;
    } else if(units <= 100) { // For the next 80 units
        charge = 80 + (units - 20) * 7.5;
    } else if(units <= 200) { // For the next 100 units
        charge = 80 + 80 * 7.5 + (units - 100) * 8.5;
    } else {   // For the beyond 200 units 
        charge = 80 + 80 * 7.5 + 100 * 8.5 + (units - 200) * 9.5;
    }
    totalCharge = charge * 1.15; // Adding 15% tax
    printf("The total charge is: %.2f\n", totalCharge);
    return 0;   
}