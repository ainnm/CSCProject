#include <stdio.h>
// Made by Ain

void Yellow();
void Reset();

int main()
{
    int num;
    char meal, repeat;
    float price, total = 0;

    Yellow();
    printf("----------------Meal----------------\n");
    Reset();

    printf("[A] Nasi lemak\t\t(RM15.00)\n");
    printf("[B] Nasi kandar\t\t(RM15.00)\n");
    printf("[C] Sandwich\t\t(RM 7.00)\n");
    printf("[D] Nasi goreng ayam\t(RM15.00)\n");
    printf("[E] Mee kari\t\t(RM10.00)\n");
    printf("[F] Spaghetti bolognese\t(RM13.00)\n");

    do
    {
        printf("\nEnter code of meal: ");
        scanf(" %c", &meal);
        printf("Total: ");
        scanf("%d", &num);

        switch (meal)
        {
        case 'a':
        case 'A':
            price = num * 15.00;
            break;
        case 'b':
        case 'B':
            price = num * 15.00;
            break;
        case 'c':
        case 'C':
            price = num * 7.00;
            break;
        case 'd':
        case 'D':
            price = num * 15.00;
            break;
        case 'e':
        case 'E':
            price = num * 10.00;
            break;
        case 'f':
        case 'F':
            price = num * 13.00;
            break;
        default:
            printf("Please enter right code of meal\n");
            break;
        }

        printf("Do you want to book another meal (Y/N): ");
        scanf(" %c", &repeat);

        total += price;
    } while (repeat == 'Y' || repeat == 'y');

    printf("\nTotal price: %.2f", total);
    return 0;
}

void Yellow()
{
    printf("\033[1;33m");
}

void Reset()
{
    printf("\033[0m");
}