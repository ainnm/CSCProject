#include <stdio.h>

int main(){
   
    int orderNo;

    int firstQuantity;
    float firstPrice = 30.00;

    int secondQuantity;
    float secondPrice = 28.00;
    
    int thirdQuantity;
    float thirdPrice = 20.00;
  
    printf("Item\tDescription\tPrice(RM)\n");
    printf("----\t------------\t---------\n");
    printf("Pineapple Tart\t50pcs\t%.2f\n", firstPrice);
    printf("Almond Cookies\t50pcs\t%.2f\n", secondPrice);
    printf("Fruit Cake\t500g\t%.2f\n", thirdPrice);

    printf("\nEnter order no: ");
    scanf("%d", &orderNo);

    printf("Enter quantity for Pineapple Tart: ");
    scanf("%d", &firstQuantity);

    printf("Enter quantity for Almond Cookies: ");
    scanf("%d", &secondQuantity);
    
    printf("Enter quantity for Fruit Cake: ");
    scanf("%d", &thirdQuantity);

  
    float total = firstPrice * firstQuantity + secondPrice * secondQuantity + thirdPrice * thirdQuantity;

    printf("\n\t\t**INVOICE**");
    printf("\nOrder No: %d", orderNo);
    printf("\nItem\tDescription\tPrice(RM)\n");
    printf("----\t------------\t---------");
    printf("\n1\tPineapple Tart\t%d\t%.2f", firstQuantity, firstPrice);
    printf("\n2\tAlmond Cookies\t%d\t%.2f", secondQuantity, secondPrice);
    printf("\n3\tFruit Cake\t%d\t%.2f", thirdQuantity, thirdPrice);
 
    printf("\n\nTOTAL PRICE (RM): %.2f", total);
    
}