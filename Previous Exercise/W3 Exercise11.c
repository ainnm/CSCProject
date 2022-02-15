#include <stdio.h>

int main(){
    int day1;
    int day2;
    int day3;
    int day4;
    int day5;
    int day6;

    printf("Enter the quantity of chicken in day sequence: ");
    scanf("%d %d %d %d %d %d %d", &day1, &day2, &day3, &day4, &day5, &day6);

    double totalChicken = day1 + day2 + day3 + day4 + day5 + day6;
    double totalSales = pow(13.6, day1 + day2 + day3 + day4 + day5 + day6 );
    double averageSales = totalSales/totalChicken;

    printf("The total chicken you sold this week: %.lf", totalChicken);
    printf("The total sales you made this week: %lf", totalSales);
    printf("The average sales you made this week: %lf", averageSales);
    

}