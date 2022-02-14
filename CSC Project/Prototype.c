#include <stdio.h>
#define spacingTabs "\t\t\t\t"
int main()
{
    /*--------------------------------------This is the art-------------------------------------------------*/
    printf("                          68b                         68b        `MM 68b                   \n");
    printf("                          Y89                         Y89         MM Y89                   \n");
    printf("  ____      ___     ____  ___   ____            ___   ___ ___  __ MM ___ ___  __     ____  \n");
    printf(" 6MMMMb.  6MMMMb   6MMMMb\\`MM  6MMMMb.        6MMMMb  `MM `MM 6MM MM `MM `MM 6MMb   6MMMMb\n");
    printf("6M'   Mb 8M'  `Mb MM'    ` MM 6M'   Mb       8M'  `Mb  MM  MM69   MM  MM  MMM9 `Mb 6M'  `Mb\n");
    printf("MM    `'     ,oMM YM.      MM MM    `'           ,oMM  MM  MM'    MM  MM  MM'   MM MM    MM\n");
    printf("MM       ,6MM9'MM  YMMMMb  MM MM             ,6MM9'MM  MM  MM     MM  MM  MM    MM MMMMMMMM\n");
    printf("MM       MM'   MM      `Mb MM MM             MM'   MM  MM  MM     MM  MM  MM    MM MM      \n");
    printf("YM.   d9 MM.  ,MM L    ,MM MM YM.   d9       MM.  ,MM  MM  MM     MM  MM  MM    MM YM    d9\n");
    printf(" YMMMM9  `YMMM9'YbMYMMMM9 _MM_ YMMMM9        `YMMM9'Yb_MM__MM_   _MM__MM__MM_  _MM_ YMMMM9 \n\n\n");
    /*--------------------------------------This is the art-------------------------------------------------*/

    printf("%sWelcome to Casic Airlines\n\n", spacingTabs);
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
        printf("You pick 0");
        break;
    case 1:
        printf("You pick 1");
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
