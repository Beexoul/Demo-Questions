/*  Write a program to read the records of n students (roll no, name, per, address) using 
 structures and display the records of those student whose address is Chitwan. */

//asuming per as percentage

#include<stdio.h>
#include<string.h>

struct Student {
    int rollNo;
    char name[50];
    float per;
    char address[100];
};

int main() {
    int n, i;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    
    struct Student students[n];
    
    printf("Enter the records of students:\n");
    for(i = 0; i < n; i++) {
        printf("Student %d:\n", i+1);
        printf("Roll No: ");
        scanf("%d", &students[i].rollNo);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Percentage: ");
        scanf("%f", &students[i].per);
        printf("Address: ");
        scanf("%s", students[i].address);
    }
    
    printf("\nRecords of students whose address is Chitwan:\n");
    printf("----------------------------------------------\n");
    printf("Roll No\tName\tPercentage\tAddress\n");
    printf("----------------------------------------------\n");
    for(i = 0; i < n; i++) {
        if(strcmp(students[i].address, "Chitwan") == 0) {
            printf("%d\t%s\t%.2f\t%s\n", students[i].rollNo, students[i].name, students[i].per, students[i].address);
        }
    }
    
    return 0;
}