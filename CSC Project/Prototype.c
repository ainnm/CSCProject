#include <stdio.h>

#define sixTabs "\t\t\t\t\t\t"
#define fiveTabs "\t\t\t\t\t"
#define fourTabs "\t\t\t\t"
#define tripleTabs "\t\t\t"
#define twoTabs "\t\t"

int Booking();
void Destination(void);
int billBooking(char destinationCharacter, int numberTicket);

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
    printf("%s  [2] Display Aircraft\n", sixTabs);

    char continueOperation;
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
    case 2:
        printf("\n%s\tAircraft\n\n", sixTabs);
        break;
    default:
        printf("\n\n%s      Invalid input", fiveTabs);
        break;
    }
}

int Booking()
{
    char destinationCharacter;
    int numberTicket;
    printf("\n\n%s   ----------Booking Section----------", fiveTabs);
    Destination();

    printf("\n\n%sPlease choose your desired destination based on the destination code: ", fourTabs);
    scanf(" %c", &destinationCharacter);

    printf("\n\n%sHow many tickets would you like to buy?");
    scanf("%d", numberTicket);

    billBooking(destinationCharacter, numberTicket);
}

int billBooking(char destinationCharacter, int numberTicket)
{

    switch (destinationCharacter)
    {
    case 'A':
        printf("Destination: Kuantan\tDeparture: 9:30am\tArrival: 10:40pm\n");
        printf("Ticket price: %d", numberTicket * 185.5);
        break;
    case 'B':
        printf("Destination: Kuantan\tDeparture: 9:30am\tArrival: 10:40pm\n");
        printf("Ticket price: %d", numberTicket * 190.5);
        break;
    case 'C':
        printf("Destination: Kuantan\tDeparture: 9:30am\tArrival: 10:40pm\n");
        printf("Ticket price: %d", numberTicket * 210.0);
        break;
    case 'D':
        printf("Destination: Kuantan\tDeparture: 9:30am\tArrival: 10:40pm\n");
        printf("Ticket price: %d", numberTicket * 185.5);
        break;
    case 'E':
        printf("Destination: Kuantan\tDeparture: 9:30am\tArrival: 10:40pm\n");
        printf("Ticket price: %d", numberTicket * 190.5);
        break;
    case 'F':
        printf("Destination: Kuantan\tDeparture: 9:30am\tArrival: 10:40pm\n");
        printf("Ticket price: %d", numberTicket * 210.5);
        break;
    default:
        break;
    }
}

void Destination(void)
{
    char destination;
    printf("\n\n%s   -------Available Destination-------\n", fiveTabs);
    printf("\n\n%s  Destination Code      Destination         Departure Time     Arrival Time      Ticket Price\n", twoTabs);
    printf("%s       [A]                Kuantan               9:30am            10:40pm          RM185.50 \n", twoTabs);
    printf("%s       [B]                Kuala Terengganu      10:30am           12:00pm          RM190.50 \n", twoTabs);
    printf("%s       [C]                Kota Bharu            11:30am           1:30pm           RM210.00 \n", twoTabs);
    printf("%s       [D]                Johor Bharu           10:00am           11:15pm          RM185.50 \n", twoTabs);
    printf("%s       [E]                Penang                11:00am           12:30pm          RM190.50 \n", twoTabs);
    printf("%s       [F]                Alor Setar            12:00am           2:00pm           RM210.00 \n", twoTabs);
}
