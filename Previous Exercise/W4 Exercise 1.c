#include <stdio.h>

int main()
{
    float salary;

    printf("Net salary (2021): ");
    scanf("%f", &salary);

    if (salary >= 0)
    {
        printf("%.2f", salary);
    }

    if (salary < 0)
    {
        printf("Please enter again\n");
        printf("Net salary must be greater than zero\n");
        scanf("%f", &salary);
        printf("%.2f", salary);
    }
}