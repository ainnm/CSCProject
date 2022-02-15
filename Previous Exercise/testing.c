#include <stdio.h>

int main()
{
    float salary;

    printf("Net salary (2021): ");
    scanf("%f", &salary);

    if (salary < 0)
    {
        printf("Please enter again\n");
        printf("Net salary must be greater than zero\n");
        scanf("%f", &salary);
        printf("%.2f", salary);
    }

    if (salary <= 20000)
    {
        float incomeTax = 0.01;
        float incomeTaxTotal = (salary - 5000) * incomeTax;
        printf("Income Tax (2021): %f", incomeTaxTotal);
    }
}