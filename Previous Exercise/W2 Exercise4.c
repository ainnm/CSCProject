#include <stdio.h>

int main(){
    char myname[10];
    char mygender;
    int myage;
    float myheight; //double = float
    float myweight;

    printf("Enter name: ");
    scanf("%s", myname);

    printf("Enter gender (f/m): ");
    scanf(" %c", &mygender);

    printf("Enter age: ");
    scanf("%d", &myage);

    printf("Enter height (m): ");
    scanf("%f", &myheight);

    printf("Enter weight (kg): ");
    scanf("%f", &myweight);

    printf("\n\n\tMY BIODATA");
    printf("\n\t----------");

printf("\nName:\t\t%s", myname);
printf("\nGender:\t\t%c", mygender);
printf("\nAge:\t\t%d", myage);
printf("\nHeight:\t\t%.1fm", myheight);
printf("\nWeight:\t\t%.1fkg", myweight);
}