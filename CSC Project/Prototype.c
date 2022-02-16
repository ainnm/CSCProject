#include <stdio.h>
#define spacingTabs "\t\t\t\t\t\t"
void Booking();

int main()
{
    /*--------------------------------------This is the art-------------------------------------------------*/
    printf("              888                                                     ,e,                                          \n");
    printf(" dP\"Y  ,e e,  888  ,\"Y88b 888 8e   e88 888  e88 88e  888,8,    ,\"Y88b  \"  888,8, Y8b Y8b Y888P  ,\"Y88b Y8b Y888P  dP\"Y \n");
    printf("C88b  d88 88b 888 \"8\" 888 888 88b d888 888 d888 888b 888 \"    \"8\" 888 888 888 \"   Y8b Y8b Y8P  \"8\" 888  Y8b Y8P  C88b  \n");
    printf(" Y88D 888   , 888 ,ee 888 888 888 Y888 888 Y888 888P 888      ,ee 888 888 888      Y8b Y8b \"   ,ee 888   Y8b Y    Y88D \n");
    printf("d,dP   \"YeeP\" 888 \"88 888 888 888  \"88 888  \"88 88\"  888      \"88 888 888 888       YP  Y8P    \"88 888    888    d,dP  \n");
    printf("                                    ,  88P                                                                888          \n");
    printf("                                   \"8\",P\"                                                                 888          \n\n\n");
    /*--------------------------------------This is the art-------------------------------------------------*/

    printf("%sWelcome to Selangor Airways\n\n", spacingTabs);
    printf("%sSlogan\n", spacingTabs);

    printf("%s\tMenu\n", spacingTabs);
    printf("%s----------------------\n", spacingTabs);
    printf("%s[0] Start Booking\n", spacingTabs);
    printf("%s[1] Display avalaible destination\n", spacingTabs);
    printf("%s[2] Display aircraft\n", spacingTabs);
    printf("%s[3] Display airport\n\n", spacingTabs);

    int menu;
    printf("\t\tChoose the number provided in the menu to go to your desired page: ");
    scanf("%d", &menu);

    switch (menu)
    {
    case 0:
        Booking();
        break;
    case 1:
        printf("You pick ");
        break;
    case 2:
        printf("You pick 2");
        break;
    case 3:
        printf("You pick 3");
        break;
    default:
        break;
    }
}

void Booking()
{
    printf("\n\n%s----------Booking Section----------\n", spacingTabs);
    printf("\t\tPlease choose your desired destination based on the destination code\n");
    printf("Destination Code\tDestination\tDeparture Time\tArrival Time\tTicket Price");
}