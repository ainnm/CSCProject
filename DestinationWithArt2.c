#include <stdio.h>
#include <string.h>
// Made by Megat
int Booking(void);
void Destination(void);

void Aircraft();

int main()
{

    int menu;
    char wantContinue;
    int canContinue = 1;

    White(); // To make white bold text
    /*----------------------------------------------------------------THIS IS ART------------------------------------------------------------*/
    printf("              888                                                     ,e,                                          \n");
    printf(" dP\"Y  ,e e,  888  ,\"Y88b 888 8e   e88 888  e88 88e  888,8,    ,\"Y88b  \"  888,8, Y8b Y8b Y888P  ,\"Y88b Y8b Y888P  dP\"Y \n");
    printf("C88b  d88 88b 888 \"8\" 888 888 88b d888 888 d888 888b 888 \"    \"8\" 888 888 888 \"   Y8b Y8b Y8P  \"8\" 888  Y8b Y8P  C88b  \n");
    printf(" Y88D 888   , 888 ,ee 888 888 888 Y888 888 Y888 888P 888      ,ee 888 888 888      Y8b Y8b \"   ,ee 888   Y8b Y    Y88D \n");
    printf("d,dP   \"YeeP\" 888 \"88 888 888 888  \"88 888  \"88 88\"  888      \"88 888 888 888       YP  Y8P    \"88 888    888    d,dP  \n");
    printf("                                    ,  88P                                                                888          \n");
    printf("                                   \"8\",P\"                                                                 888          \n\n\n");
    /*----------------------------------------------------------------THIS IS ART------------------------------------------------------------*/
    Reset(); // Reset white bold text back to default color

    while (canContinue == 1)
    {

        printf("%81s", "----------------Menu----------------\n\n");

        printf("%61s", "[0] Start Booking\n");
        printf("%67s", "[1] Display Destination\n");

        printf("\n\n%94s", "Choose the number provided in the menu to go to your desired page: ");
        scanf("%d", &menu);

        switch (menu)
        {
        case 0:
            Booking();
            canContinue = 0;
            break;
        case 1:
            Destination();
            canContinue = 0;
            break;
        default:
            printf("\n\n%66s\n", "Invalid Input");
            canContinue = 0;
            break;
        }

        printf("\n\n%79s\n\n", "--------------Shutdown--------------");

        printf("\n%85s", "Do you still want to choose other menu? [y/n]: ");
        scanf(" %c", &wantContinue);

        if (wantContinue == 'y')
        {
            printf("\n\n");
            canContinue = 1;
        }
        else
        {
            canContinue = 0;
        }
    }
}

int Booking(void)
{
    Destination();

    int numberTicket;
    char destinationCharacter;
    float totalPrice;
    char destinationName[60];
    char departure[60];
    char arrival[60];
    float discount;
    float priceDiscount;
    int canContinue2 = 1;
    float ticketPrice;

    printf("\n\n%96s", "Please choose your desired destination based on the destination code: ");
    scanf(" %c", &destinationCharacter);

    switch (destinationCharacter)
    {
    case 'A':
        strcpy(destinationName, "Kuantan");
        strcpy(departure, "9:30am");
        strcpy(arrival, "10:40pm");
        ticketPrice = 185.5;

        break;
    case 'B':
        strcpy(destinationName, "Kuala Terengganu");
        strcpy(departure, "10:30am");
        strcpy(arrival, "12:00pm");
        ticketPrice = 190.5;

        break;
    case 'C':
        strcpy(destinationName, "Kota Bharu");
        strcpy(departure, "11:30am");
        strcpy(arrival, "1:30pm");
        ticketPrice = 210.0;

        break;
    case 'D':
        strcpy(destinationName, "Johor Bharu");
        strcpy(departure, "11:30am");
        strcpy(arrival, "11:15pm");
        ticketPrice = 185.5;

        break;
    case 'E':
        strcpy(destinationName, "Penang");
        strcpy(departure, "11:00am");
        strcpy(arrival, "12:30pm");
        ticketPrice = 190.5;

        break;
    case 'F':
        strcpy(destinationName, "Alor Setar");
        strcpy(departure, "12:00am");
        strcpy(arrival, "2:00pm");
        ticketPrice = 210.5;

        break;
    default:
        printf("\n%67s", "Invalid Input");
        canContinue2 = 0;
        break;
    }

    if (canContinue2 == 1)
    {

        printf("\n%84s", "Please insert number of tickets you want to buy: ");
        scanf("%d", &numberTicket);
        totalPrice = numberTicket * ticketPrice;

        printf("\n%78s\n", "--------------Receipt--------------");

        printf("\n%63s%s\n", "Destination: ", destinationName);
        printf("%63s%s\n", "Departure Time: ", departure);
        printf("%63s%s\n", "Arrival Time: ", arrival);
        if (totalPrice > 500)
        {
            discount = 0.1;
            priceDiscount = discount * totalPrice;
            printf("%65s%.2f\n%62s %d", "Total ticket price: RM", totalPrice, "Total number ticket:", numberTicket);
            printf("\n\n%102s\n%78s", "Due to the pandemic of Covid 19, Selangor Airways will give a 10%% discount ", "for customers with a total price more than RM500.00.");

            Aircraft();
        }
        else
        {
            printf("%65s%.2f\n%63s%d", "Total ticket price: RM", totalPrice, "Number of ticket: ", numberTicket);

            Aircraft();
        }
    }
}

void Destination(void)
{

    printf("\n\n%79s\n", "-------Available Destinations-------");

    printf("\n\n%107s\n", "Destination Code      Destination         Departure Time     Arrival Time      Ticket Price");
    printf("%107s", "[A]             Kuantan               9:30am            10:40pm          RM185.50 \n");
    printf("%107s", "[B]             Kuala Terengganu      10:30am           12:00pm          RM190.50 \n");
    printf("%107s", "[C]             Kota Bharu            11:30am           1:30pm           RM210.00 \n");
    printf("%107s", "[D]             Johor Bharu           10:00am           11:15pm          RM185.50 \n");
    printf("%107s", "[E]             Penang                11:00am           12:30pm          RM190.50 \n");
    printf("%107s", "[F]             Alor Setar            12:00am           2:00pm           RM210.00 \n");
}

void Aircraft()
{

    printf("\n\n%80s\n\n", "Thanks for choosing Selangor Airways!");

    printf("%90s", "______                                                    \n");
    printf("%90s", "         _\\ _~-\\___                                       \n");
    printf("%90s", " =  = ==(____AA____D                                      \n");
    printf("%90s", "             \\_____\\___________________,-~~~~~~~`-.._     \n");
    printf("%90s", "             /     o O o o o o O O o o o o o o O o  |\\_   \n");
    printf("%90s", "             `~-.__        ___..----..                  ) \n");
    printf("%90s", "                   `---~~\\___________/------------`````   \n");
    printf("%90s", "                   =  ===(_________D                      \n");
}