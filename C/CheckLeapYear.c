#include <stdio.h>

int main()
{
    int year = 0;
    printf("Enter a year\n");
    scanf("%d", &year);
    // every 4th year is a leap year, but not every 100th year unless it is a 400th year
    if ((year % 4 == 0) && (((!(year % 100 == 0))) || (year % 400 == 0)))
    {
        printf("The year %d is a leap year", year);
    }
    else
    {
        printf("The year %d is not a leap year", year);
    }
    return 0;
}