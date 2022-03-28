#include <stdio.h>
#include <string.h>

// Made by Amirul
int main()
{

    char name[200], nationality[200], placeOfBirth[200], terms1, terms2, terms3;
    int age, birthYear, i, numberOfTerms = 3;

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

    printf("-------Terms and Regulations--------\n");
    printf("Please read the terms accordingly and agree to continue this operation");

    for (i = 0; i < numberOfTerms; i++)
    {
        switch (i)
        {
        case 0:
        {
            printf("\n\nCustomers must arrive at the departure stations 30 mins before take off (y/n): ");
            scanf(" %c", &terms1);
            break;
        }
        case 1:
        {
            printf("\nCustomers should not bring any dangerous substance or alcholic drinks on the aircraft (y/n): ");
            scanf(" %c", &terms2);
            break;
        }
        case 2:
        {
            printf("\nAny airline passenger service assistants have the right\nto stop your flight operation if you violate any terms and regulation stated above (y/n): ");
            scanf(" %c", &terms3);
            break;
        }
        }
    }

    if (terms1 == 'y' && terms2 == 'y' && terms3 == 'y')
    {
        printf("Thank you for your cooperation. See you later!");
    }
    else
    {
        printf("\nDue to the fact that you doesn't agree with our terms and regulations we cannot continue this operation.");
    }
}
