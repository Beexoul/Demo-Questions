/* Write a program to create a structure and read the name, author, and price of 500 books
stored in the file named ‘library.dat’ and print the name and price of books whose price is
above 300. */

#include <stdio.h>
#include <stdlib.h>

struct Book {
    char Name[50];
    char author[50];
    float price;
};

int main() {
    int i;
    struct Book book[500];
    FILE *file;
    file = fopen("library.dat", "wb+");
    if (file == NULL) {
        printf("Error in opening file\n");
        exit(1);
    }

    // taking input from user 
for(i=0; i<1; i++) {
    printf("Enter the name of the book %d : ", i+1);
    gets(book[i].Name);
    printf("Enter the author of the book %d: ",i+1);
    gets(book[i].author);
    printf("Enter the price of the book %d: ",i+1);
    scanf("%f", &book[i].price);
    fwrite(&book[i], sizeof(struct Book), 1, file); //storing in the file 
}

rewind(file); //rewind the file pointer to the beginning of the file
printf("The books with price greater than 300 are: \n");
printf("Name\t | \t Price\n");
printf("__________________________________________\n");
for(i=0; i<1; i++) {
    fread(&book[i], sizeof(struct Book), 1, file); //reading the data from the file
    if(book[i].price > 300) {     //checking if the price is greater than 300
        printf("%s\t | \t%f", book[i].Name, book[i].price); 
    }

}
fclose(file);  //closing the file
    return 0;
}
