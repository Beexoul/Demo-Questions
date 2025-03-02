/* Write a program to input name, address, faculty, program and GPA(in maximum 4.0) of 
500 students and store them in ‘RESULT.DAT’ data file and display the records of those 
student whose faculty is ‘Engineering’ and GPA>3.5.   

Emp_name  Address  Salary Department  Date of Birth     mm dd yy 
*/

#include <stdio.h>
#include <stdlib.h>

struct Student {
    char Emp_name[50];
    char Address[100];
    char Faculty[50];
    char Program[50];
    float GPA;
};

int main() {
    int i;
    struct Student student[500];
    FILE *file;
    file = fopen("RESULT.DAT", "wb+");
    if (file == NULL) {
        printf("Error in opening file\n");
        exit(1);
    }
    
    // taking input from user
    for(i=0; i<500; i++) {
        printf("Enter the name of student %d: ", i+1);
        scanf("%s", student[i].Emp_name);
        printf("Enter the address of student %d: ", i+1);
        scanf("%s", student[i].Address);
        printf("Enter the faculty of student %d: ", i+1);
        scanf("%s", student[i].Faculty);
        printf("Enter the program of student %d: ", i+1);
        scanf("%s", student[i].Program);
        printf("Enter the GPA of student %d: ", i+1);
        scanf("%f", &student[i].GPA);
        fwrite(&student[i], sizeof(struct Student), 1, file);
    }
    rewind(file); // rewind the file pointer to the beginning of the file
    printf("\nRecords of students with faculty 'Engineering' and GPA > 3.5:\n");
    printf("----------------------------------------------------------\n");
    printf("Name\t\tAddress\t\tFaculty\t\tProgram\t\tGPA\n");
    printf("----------------------------------------------------------\n");
    for(i=0; i<500; i++) {
        fread(&student[i], sizeof(struct Student), 1, file);
        if (strcmp(student[i].Faculty, "Engineering") == 0 && student[i].GPA > 3.5) {
            printf("%s\t\t%s\t\t%s\t\t%s\t\t%.2f\n", student[i].Emp_name, student[i].Address, student[i].Faculty, student[i].Program, student[i].GPA);
        }
    }
    fclose(file);
    return 0;
}
