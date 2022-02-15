#include <stdio.h>

    #define RENTSAGA 120.00
    #define RENTPESONA 140.00
    #define RENTEXORA 200.00
    #define RENTMYVI 100.00
    #define RENTARUZ 200.00

int main(){

    const int RATEINSURANCE = 10;

    printf("PULAU CAR RENTAL\n\n"); 
    printf("\tVEHICLE MODEL\t\tRENTAL PER DAY (RM)\n");
    printf("\t[1] PROTON SAGA\t\t\t%.2f\n", RENTSAGA);
    printf("\t[2] PROTON PESONA\t\t%.2f\n", RENTPESONA);
    printf("\t[3] PROTON EXORA\t\t%.2f\n", RENTEXORA);
    printf("\t[4] PROTON MYVI\t\t\t%.2f\n", RENTMYVI);
    printf("\t[5] PROTON ARUZ\t\t\t%.2f\n", RENTARUZ);

    printf("\n\t*Listed cost excludes car insurance i.e. %d %%", RATEINSURANCE);
}