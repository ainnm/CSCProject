#include <stdio.h>

#define sixTabs "\t\t\t\t\t\t"
#define fiveTabs "\t\t\t\t\t"
#define fourTabs "\t\t\t\t"
#define tripleTabs "\t\t\t"
#define twoTabs "\t\t"

int Booking();
void Destination(void);
int billBooking(char destinationCharacter, int numberTicket, char name[50], int age, char nationality[50]);

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
        printf("\n\n%s      Invalid input", sixTabs);
        break;
    }
}

int Booking()
{
    int age;
    char name[50];
    char destinationCharacter;
    int numberTicket;
    char nationality[50];

    printf("\n\n%s   ----------Booking Section----------", fiveTabs);
    Destination();

    printf("\n\n%sPlease choose your desired destination based on the destination code: ", fourTabs);
    scanf(" %c", &destinationCharacter);

    printf("\n\n%sNumber of passengers: ", fourTabs);
    scanf("%d", &numberTicket);

    printf("\n\n%s   --------------User Information-------------", fiveTabs);
    printf("\n\n%sInsert your username: ", fiveTabs);
    scanf("%s", name);

    printf("\n\n%sInser your age: ", fiveTabs);
    scanf("%d", &age);

    printf("\n\n%sNationality: ", fiveTabs);
    scanf("%s", nationality);

    billBooking(destinationCharacter, numberTicket, name, age, nationality);
}

int billBooking(char destinationCharacter, int numberTicket, char name[50], int age, char nationality[50])
{
    float totalPrice;
    printf("\n\n%s-------------------------BOARDING PASS-------------------------", fourTabs);
    printf("\n\n%sName: %s\t\tAge: %d\t\t\t\tNationality: %s", fourTabs, name, age, nationality);
    switch (destinationCharacter)
    {
    case 'A':

        printf("\n\n%sDestination: Kuantan\tDeparture: 9:30am\tArrival: 10:40pm\n", fourTabs);
        totalPrice = numberTicket * 185.5;
        printf("\n%sTicket ticket price: RM%.2f\t\tNumber of passengers: %d", fourTabs, totalPrice, numberTicket);
        break;
    case 'B':

        totalPrice = numberTicket * 190.5;
        printf("\n\n%sDestination: Kuantan\tDeparture: 9:30am\tArrival: 10:40pm\n", fourTabs);
        printf("\n%sTicket ticket price: RM%.2f\t\tNumber of passengers: %d", fourTabs, totalPrice, numberTicket);
        break;
    case 'C':

        totalPrice = numberTicket * 210.0;
        printf("\n\n%sDestination: Kuantan\tDeparture: 9:30am\tArrival: 10:40pm\n", fourTabs);
        printf("\n%sTicket ticket price: RM%.2f\t\tNumber of passengers: %d", fourTabs, totalPrice, numberTicket);
        break;
    case 'D':

        totalPrice = numberTicket * 185.5;
        printf("\n\n%sDestination: Kuantan\tDeparture: 9:30am\tArrival: 10:40pm\n", fourTabs);
        printf("\n%sTotal ticket price: RM%.2f\t\tNumber of passengers: %d", fourTabs, totalPrice, numberTicket);
        break;
    case 'E':

        totalPrice = numberTicket * 190.5;
        printf("\n\n%sDestination: Kuantan\tDeparture: 9:30am\tArrival: 10:40pm\n", fourTabs);
        printf("\n%sTicket ticket price: RM%.2f\t\tNumber of passengers: %d", fourTabs, totalPrice, numberTicket);
        break;
    case 'F':

        totalPrice = numberTicket * 210.5;
        printf("\n\n%sDestination: Kuantan\tDeparture: 9:30am\tArrival: 10:40pm\n", fourTabs);
        printf("\n%sTicket ticket price: RM%.2f\t\tNumber of passengers: %d", fourTabs, totalPrice, numberTicket);
        break;
    default:
        printf("Invalid Character");
        break;
    }

    printf("\n\n%s---------------------------------------------------------------", fourTabs);
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
