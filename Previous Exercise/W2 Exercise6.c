#include <stdio.h>

int main(){
    char firstProduct[50];
    int firstQuantity;
    float firstPrice;

    char secondProduct[50];
    int secondQuantity;
    float secondPrice;
    
    char thirdProduct[50];
    int thirdQuantity;
    float thirdPrice;

    char fourthProduct[50];
    int fourthQuantity;
    float fourthPrice;

    char fifthProduct[50];
    int fifthQuantity;
    float fifthPrice;
   
    printf("Enter first product: ");
    scanf("%s", firstProduct);
    printf("Enter quantity: ");
    scanf("%d", &firstQuantity);
    printf("Enter Price: ");
    scanf("%f", &firstPrice);

    printf("\nEnter second product: ");
    scanf("%s", secondProduct);
    printf("Enter quantity: ");
    scanf("%d", &secondQuantity);
    printf("Enter Price: ");
    scanf("%f", &secondPrice);

    printf("\nEnter third product: ");
    scanf("%s", thirdProduct);
    printf("Enter quantity: ");
    scanf("%d", &thirdQuantity);
    printf("Enter Price: ");
    scanf("%f", &thirdPrice);

    printf("\nEnter fourth product: ");
    scanf("%s", fourthProduct);
    printf("Enter quantity: ");
    scanf("%d", &fourthQuantity);
    printf("Enter Price: ");
    scanf("%f", &fourthPrice);

    printf("\nEnter fifth product: ");
    scanf("%s", fifthProduct);
    printf("Enter quantity: ");
    scanf("%d", &fifthQuantity);
    printf("Enter Price: ");
    scanf("%f", &fifthPrice);

    float total = firstPrice * firstQuantity + secondPrice * secondQuantity + thirdPrice * thirdQuantity + fourthPrice * fourthQuantity + fifthPrice * fifthQuantity;

    printf("\n\t\tFRESH GROCER");
    printf("\n\tTaman Serene, \tSepang\n");

    printf("\n1\t%s\t%d\t%.2f", firstProduct, firstQuantity, firstPrice);
    printf("\n2\t%s\t%d\t%.2f", secondProduct, secondQuantity, secondPrice);
    printf("\n3\t%s\t%d\t%.2f", thirdProduct, thirdQuantity, thirdPrice);
    printf("\n4\t%s\t%d\t%.2f", fourthProduct, fourthQuantity, fourthPrice);
    printf("\n5\t%s\t%d\t%.2f", fifthProduct, fifthQuantity, fifthPrice);

    printf("\nTotal: %.f", total);
    
}