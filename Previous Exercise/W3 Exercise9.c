#include <stdio.h>
#include <math.h>

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

    float bmi = myweight / pow(myheight, 2);
    float bsa = sqrt((myheight*100*myweight)/3600);

printf("\nName:\t\t%s", myname);
printf("\nGender:\t\t%c", mygender);
printf("\nAge:\t\t%d", myage);
printf("\nHeight:\t\t%.2fm", myheight);
printf("\nWeight:\t\t%.2fkg", myweight);
printf("\nBMI:\t\t%.2f", bmi);
printf("\nBSA:\t\t%.2f", bsa);
}