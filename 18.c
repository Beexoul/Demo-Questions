/*  Create a structure for the following data. */
/* Emp_name  Address  Salary Department  Date of Birth     
                                            mm dd yy 
Also write a program to input 100 employee records and display who was born in 1995 and 
whose department is marketing.*/

#include <stdio.h>
#include <string.h>

struct date {
    int day;
    int month;
    int year;
};

struct employee {
    char Emp_name[50];
    char Address[100];
    float Salary;
    char Department[50];
    struct date dob;
};

int main() {
    struct employee e;
    int i;
    printf("Enter 100 employee records:\n");
    for(i = 0; i < 100; i++) {
    printf("Enter employee name: ");
    gets(e.Emp_name);
    printf("Enter employee address: ");
    gets(e.Address);
    printf("Enter employee salary: ");
    scanf("%f", &e.Salary);
    printf("Enter employee department: ");
    gets(e.Department);
    printf("Enter employee date of birth (mm dd yyyy): ");
    scanf("%d %d %d", &e.dob.month, &e.dob.day, &e.dob.year);
    }
    
    printf("\nEmployees born in 1995:\n");
    for(i = 0; i < 100; i++) {
    if(e.dob.year == 1995) {
        printf("\n");
        printf("Name: %s\n", e.Emp_name);
        printf("Address: %s\n", e.Address);
        printf("Salary: %.2f\n", e.Salary);
        printf("Department: %s\n", e.Department);
        printf("Date of Birth: %d-%d-%d\n", e.dob.month, e.dob.day, e.dob.year);
    }
    }
    return 0;    
}