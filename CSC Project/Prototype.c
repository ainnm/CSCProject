#include <stdio.h>

#define sixTabs "\t\t\t\t\t\t"
#define fiveTabs "\t\t\t\t\t"
#define fourTabs "\t\t\t\t"
#define tripleTabs "\t\t\t"
#define twoTabs "\t\t"

int Booking();
void Destination(void);

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

    printf("%s       Welcome to Selangor Airways\n\n", fiveTabs);
    printf("%s                 Slogan\n\n\n", fiveTabs);

    printf("%s   ---------------Menu----------------\n\n", fiveTabs);
    printf("%s  [0] Start Booking\n", sixTabs);
    printf("%s  [1] Display Destination\n", sixTabs);

    int menu;
    printf("\n\n%s      Choose the number provided in the menu to go to your desired page: ", tripleTabs);
    scanf("%d", &menu);
    switch (menu)
    {
    case 0:
        Booking();
        break;
    case 1:
        Destination();
        break;
    default:
        printf("\n\n%s      Invalid input. Please choose again: ", fiveTabs);
        scanf("%d", menu);
        break;
    }
}

int Booking()
{
    char destinationCharacter;
    printf("\n\n%s   ----------Booking Section----------", fiveTabs);
    Destination();
    printf("\n\n%sPlease choose your desired destination based on the destination code: ", fourTabs);
    scanf("%c", &destinationCharacter);
}

void Destination(void)
{
    char destination;
    printf("\n\n%s   -------Available Destination------\n", fiveTabs);
    printf("\n\n%s  Destination Code      Destination        Departure Time     Arrival Time      Ticket Price\n", twoTabs);
    printf("%s       [A]                Kuantan              9:30am           10:40pm           RM185.50 \n", twoTabs);
    printf("%s       [A]                Kuantan              9:30am           10:40pm           RM185.50 \n", twoTabs);
    printf("%s       [A]                Kuantan              9:30am           10:40pm           RM185.50 \n", twoTabs);
    printf("%s       [A]                Kuantan              9:30am           10:40pm           RM185.50 \n", twoTabs);
    printf("%s       [A]                Kuantan              9:30am           10:40pm           RM185.50 \n", twoTabs);
    printf("%s       [A]                Kuantan              9:30am           10:40pm           RM185.50 \n", twoTabs);
}
