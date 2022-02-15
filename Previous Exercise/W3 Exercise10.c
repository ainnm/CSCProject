#include <stdio.h>
#include <math.h>

int main(){

    const float susu = 3.5;
    int susuQuantity;

    const float kicap = 4;
    int kicapQuantity;
    
    const float tepung = 2;
    int tepungQuantity;

    const float gula = 1.8;
    int gulaQuantity;

    const float sardines = 3.7;
    int sardinesQuantity;
   

    printf("Enter susu quantity: ");
    scanf("%d", &susuQuantity);
  
    printf("Enter kicap quantity: ");
    scanf("%d", &kicapQuantity);
 
    printf("Enter tepung quantity: ");
    scanf("%d", &tepungQuantity);
 
    printf("Enter gula quantity: ");
    scanf("%d", &gulaQuantity);

    printf("Enter sardines quantity: ");
    scanf("%d", &sardinesQuantity);
    

    float total = pow(susu, susuQuantity) + pow(kicap, kicapQuantity) + pow(tepung, tepungQuantity) +  pow(gula, gulaQuantity) + pow(sardines, sardinesQuantity);

    printf("\n\t\tFRESH GROCER");
    printf("\n\tTaman Serene, \tSepang\n");

    printf("\n\t\t\t\tQty\tPrice");
    printf("\n1\tSihat Susu Pekat Manis\t%d\t%.2f", susuQuantity, susu);
    printf("\n2\tAlam Kicap Masin\t%d\t%.2f", kicapQuantity, kicap);
    printf("\n3\tTepung Gandum Pelita\t%d\t%.2f", tepungQuantity, tepung);
    printf("\n4\tGula Kasar\t\t%d\t%.2f", gulaQuantity, gula);
    printf("\n5\tTasty Sardines\t\t%d\t%.2f", sardinesQuantity, sardines);

    printf("\n\nTotal: %.2f", total);
    
}