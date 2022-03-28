#include <stdio.h>
#include <string.h>

// Made by Amirul
int main()
{

    char name[200], nationality[200], placeOfBirth[200];
    int age, icSize, birthYear, repeat = 'y';

    do
    {
        printf("\n-------------User Info--------------\n\n");

        printf("Insert your full name: ");
        fgets(name, 200, stdin);

        printf("Please insert your nationality: ");
        fgets(nationality, 200, stdin);

        printf("Place of birth: ");
        fgets(placeOfBirth, 200, stdin);

        printf("Please insert your age: ");
        scanf("%d", &age);

        if (age < 18)
        {
            printf("\nSorry but you're not permitted to travel alone at the age of below 18\n");
        }
        else
        {
            printf("\n-----Personal Information------\n\n");
            printf("Name: %s", name);
            printf("Age: %d\n", age);
            printf("Nationality: %s", nationality);
            printf("Place of birth: %s\n", placeOfBirth);
        }

        printf("Do you want to reinsert your personal information? (y/n): ");
        scanf(" %c", &repeat);

    } while (repeat == 'y');
}