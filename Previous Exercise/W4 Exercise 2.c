#include <stdio.h>
#define zakat 0.025

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

    if (salary <= 20265)
    {
        printf("Zakat\t(2021): 0.00\n");
    }

    // if (salary > 20265)
    // {
    //     float zakatTotal = salary * zakat + salary;
    //     printf("Zakat\t(2021): %.2f\n", zakatTotal);
    // }

    // if (salary > 20000)
    //     printf("Incometax (2021): 0.00\n");

    if (salary <= 20000)
    {
        float incomeTax = 0.01;
        float incomeTaxTotal = (salary - 5000) * incomeTax + salary;
        if (incomeTaxTotal < 0)
        {
            printf("Incometax (2021): 0.00\n");
        }

        if (incomeTaxTotal > 0)
        {
            printf("Incometax (2021): %f\n", incomeTaxTotal);
        }
    }
}
