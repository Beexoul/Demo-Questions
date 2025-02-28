/* Write a program to input name, address, registration no, faculty and academic year of
admission in university of ‘n’ number of students of Pokhara University and append them
in data file called ‘STUDENT.DAT’. Then display the records of those students by
reading the records from ‘STUDENT.DAT’ data file who got admission in 2016. */

#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    char address[100];
    int registrationNo;
    char faculty[50];
    int academicYear;
};

int main() {
    struct Student s;
    int n, i;
    FILE *file;
    file = fopen("STUDENT.DAT", "ab+");
    if (file == NULL) {
        printf("Error in opening file\n");
        exit(1);
    }

