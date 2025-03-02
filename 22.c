/* Write a program to create a structure for storing movie information, including the title, 
director, genre, and rating. The program should read information for 50 movies from the 
user, store it in a file named 'movies.dat,' and then read the information from the file to 
display the title and genre of movies with a rating above 4.5.  */

#include <stdio.h>
#include <stdlib.h>

struct Movie {
    char title[50];
    char director[50];
    char genre[50];
    float rating;
};

int main() {
    struct Movie movies[50];
    FILE *file;
    file = fopen("movies.dat", "rb+");
    if (file == NULL) {
        printf("Error in opening file\n");
        exit(1);
    }
    
    // Read movie information from user
    for(int i=0; i<50; i++) {
        printf("Enter title: ");
        scanf("%s", movies[i].title);
        printf("Enter director: ");
        scanf("%s", movies[i].director);
        printf("Enter genre: ");
        scanf("%s", movies[i].genre);
        printf("Enter rating: ");
        scanf("%f", &movies[i].rating);
    }
    fwrite(movies, sizeof(movies), 50, file);
    rewind(file);
    
    printf("\nMovies with rating above 4.5:\n");
    printf("Title\t\tGenre\n");
    printf("---------------------------------\n");
    fwrite(&movies, sizeof(movies), 50, file);
    for(int i=0; i<50; i++) {
        if(movies[i].rating > 4.5) {
            printf("%s\t\t%s\n", movies[i].title, movies[i].genre);
        }
    }
    fclose(file);
    return 0;
}
    
    // Read movie information from file and display title and genre of movies with a rating above 4.5

