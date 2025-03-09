#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 100

int main() {
    char firstName[MAX_LENGTH];
    char lastName[MAX_LENGTH];

     printf("Enter your first name: ");
    if (fgets(firstName, MAX_LENGTH, stdin) == NULL) {
        perror("Error reading first name");
        return 1;
    }
 
    firstName[strcspn(firstName, "\n")] = '\0';

     printf("Enter your last name: ");

    if (fgets(lastName, MAX_LENGTH, stdin) == NULL) {
        perror("Error reading last name");
        return 1;
    }

     lastName[strcspn(lastName, "\n")] = '\0';
 
    printf("Hello, %s %s!\n", firstName, lastName);
    return 0;

}
