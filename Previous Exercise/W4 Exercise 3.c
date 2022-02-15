#include <stdio.h>

int main()
{
    float salary;
    float zakat;
    float incomeTaxTotal;
    float zakatTotal;

    printf("Net salary (2021): ");
    scanf("%f", &salary);

    if (salary < 0)
    {
        printf("Please enter again\n");
        printf("Net salary must be greater than zero\n");
        scanf("%f", &salary);
        printf("%.2f", salary);
    }

    if (salary <= 20265)
    {
        printf("Zakat\t(2021): 0.00\n");
    }
    else
    {
        float zakat = 0.025;
        zakatTotal = salary * zakat;
        printf("Zakat\t(2021): %.2f\n", zakatTotal);
    }

    if (salary <= 20000)
    {
        float incomeTax = 0.01;
        incomeTaxTotal = (salary - 5000) * incomeTax;
        printf("Incometax (2021): %.2f", incomeTaxTotal);
    }

    if ((salary > 20000) && (salary <= 35000))
    {
        float incomeTax = 0.03;
        incomeTaxTotal = (salary - 5000) * incomeTax;
        printf("Incometax (2021): %.2f", incomeTaxTotal);
    }
}
