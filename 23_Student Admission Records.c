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

for(i=0; i<n; i++) {
    printf("Enter name: ");
    scanf("%s", s.name);
    printf("Enter address: ");
    scanf("%s", s.address);
    printf("Enter registration no: ");
    scanf("%d", &s.registrationNo);
    printf("Enter faculty: ");
    scanf("%s", s.faculty);
    printf("Enter academic year: ");
    scanf("%d", &s.academicYear);
    fwrite(&s, sizeof(s), 1, file);
}

rewind(file);

printf("\nStudents who got admission in 2016:\n");
while(fread(&s, sizeof(s), 1, file)==1) {
    if(s.academicYear == 2016) {
        printf("Name: %s\n", s.name);
        printf("Address: %s\n", s.address);
        printf("Registration no: %d\n", s.registrationNo);
        printf("Faculty: %s\n", s.faculty);
        printf("Academic year: %d\n", s.academicYear);
    }
}

fclose(file);
    return 0;
}


