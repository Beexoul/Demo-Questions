/*  In a bank there are n customers with attributes name, account no and balance. Write a 
Program to find out information of customer who has highest balance in bank. */

#include <stdio.h>
#include <string.h>

struct Customer {
    char name[50];
    int accountNo;
    float balance;
};

int main() {
    int n, i, maxIndex;
    float maxBalance;
    struct Customer customers[100];
    
    printf("Enter the number of customers: ");
    scanf("%d", &n);
    
    printf("\nEnter customer details:\n");
    for (i = 0; i < n; i++) {
        printf("Customer %d:\n", i+1);
        printf("Name: ");
        scanf("%s", customers[i].name);
        printf("Account Number: ");
        scanf("%d", &customers[i].accountNo);
        printf("Balance: ");
        scanf("%f", &customers[i].balance);
    }
    
    maxBalance = customers[0].balance; // Initialize maxBalance with the first customer's balance
    maxIndex = 0; // Initialize maxIndex with the first customer's index

    for (i = 1; i < n; i++) {
        if (customers[i].balance > maxBalance) {
            maxBalance = customers[i].balance;
            maxIndex = i;
        }
    }
    
    printf("\nCustomer with the highest balance is: %s\n", customers[maxIndex].name);
    printf("Account Number: %d\n", customers[maxIndex].accountNo);
    printf("Balance: %.2f\n", customers[maxIndex].balance);
    
    return 0;
}
