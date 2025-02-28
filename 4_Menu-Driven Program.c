/* . Write a menu driven program to work following cases, take appropriate input whenever
required.
1.Reverse a number
2.Find sum of individual unit
3.Display all ASCII characters from 0 to 255
4.Exit
*/

#include <stdio.h>

int main() {
    int choice;
    int n;
    int num;
    int sum = 0;
    int reverse = 0;
    int i;
    char ch;
    
    while (n==1) {
        printf("1. Reverse a number\n");
        printf("2. Find sum of individual unit\n");
        printf("3. Display all ASCII characters from 0 to 255\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                printf("Enter a number: ");
                scanf("%d", &num);
                while (num != 0) {
                    reverse = reverse * 10 + num % 10;
                    num = num / 10;
                }
                printf("The reverse of the number is: %d\n", reverse);
                break;
            case 2:
                printf("Enter a number: ");
                scanf("%d", &num);
                while (num != 0) {
                    sum += num % 10;
                    num = num / 10;
                }
                printf("The sum of individual unit is: %d\n", sum);
                break;
            case 3:
                for (i = 0; i <= 255; i++) {
                    ch = i;
                    printf("%d = %c\n", i, ch);
                }
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice\n");
        }
        printf("\n");
        printf("do you want to continue (y/n)? ");
        printf("Enter 1 to continue and 0 to exit:");
        scanf(" %d", &n);
    }

    return 0;
}

