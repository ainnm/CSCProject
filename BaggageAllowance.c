#include <stdio.h>
int main()
// Made by Ainul

{

    char type;
    float weight, bill;
    int quantity;

    printf("\n\t\t**BUGGAGE ALLOWANCE**\n\n");
    printf("-------------------------------------------------------------\n");
    printf("|Weight Category\t\t|         Domestic          |\n");
    printf("|\t\t\t\t|---------------------------|\n");
    printf("|\t\t\t\t|Online(MYR) | Counter(MYR) | \n");
    printf("|-----------------------------------------------------------|\n");
    printf("|0-20kg \t\t\t|    Free    |     Free     |\n");
    printf("|21-25kg\t\t\t|     60     |      75      |\n");
    printf("|26-30kg\t\t\t|    120     |     150      |\n");
    printf("|31-35kg\t\t\t|    180     |     225      |\n");
    printf("-------------------------------------------------------------\n\n");

    printf("Payment type;\n");
    printf("O = Online\n");
    printf("C = Counter\n\n");

    printf("Insert Payment Type: ");
    scanf(" %c", &type);

    if (type == 'O' || 'o')
    {
        printf("Weight (kg) : ");
        scanf("%f/n", &weight);

        if (weight > 0 && weight <= 20)
        {
            printf("Your bill : FREE  ");
        }
        else if (weight >= 21 && weight <= 25)
        {
            printf("Quanitity : ");
            scanf("%d/n", &quantity);
            printf("Your bill : RM%.2d\n ", quantity * 60);
        }
        else if (weight >= 26 && weight <= 30)
        {
            printf("Quanitity : ");
            scanf("%d/n", &quantity);
            printf("Your bill : RM%.2d\n ", quantity * 120);
        }
        else if (weight >= 31 && weight <= 35)
        {
            printf("Quanitity : ");
            scanf("%d/n", &quantity);
            printf("Your bill : RM%.2d\n ", quantity * 180);
        }
        else if (weight >= 36)
        {
            printf(" Too Heavy");
        }
        else
            printf("invalid\n");
    }

    else if (type == 'C' || 'c')
    {
        printf("Weight (kg) : ");
        scanf("%f/n", &weight);

        if (weight > 0 && weight <= 20)
        {
            printf("Your bill : FREE  ");
        }
        else if (weight >= 21 && weight <= 25)
        {
            printf("Quanitity : ");
            scanf("%d/n", &quantity);
            printf("Your bill : RM%.2d\n ", quantity * 75);
        }
        else if (weight >= 26 && weight <= 30)
        {
            printf("Quanitity : ");
            scanf("%d/n", &quantity);
            printf("Your bill : RM%.2d\n ", quantity * 150);
        }
        else if (weight >= 31 && weight <= 35)
        {
            printf("Quanitity : ");
            scanf("%d/n", &quantity);
            printf("Your bill : RM%.2d\n ", quantity * 225);
        }
        else if (weight >= 36)
        {
            printf(" Too Heavy");
        }
        else
            printf("invalid\n");
    }
    else
    {
        printf("invalid\n");
    }

    return 0;
}