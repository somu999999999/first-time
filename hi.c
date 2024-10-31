#include <stdio.h>

int main()
{
    int year, cen, yr;
    printf("enter a year \n");
    scanf("%d", &year);
    yr = year % 100;
    cen = year / 100;
    if (yr % 4 == 0 && cen % 4 == 0)
        printf("%d is a leap year 🥳💃🎉🎉", year);
    else
    {
        if (yr == 0)
        {
            printf("%d is not a leap year and there is 4 years left which is %d", year, year + 4);
        }
        else
        {
            printf("%d is not a leap year and there is %d years left which is %d", year, 4 - year % 4, year + (4 - year % 4));
        }
    }
    return 0;
}