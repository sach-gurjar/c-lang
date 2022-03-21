#include "stdio.h"
int main()
{
    int month = 0;
    int year = 0;
    printf("enter month in number ");
    scanf("%d", &month);
    if (month == 1)
    {
        printf("january, days= 31");
    }
    if (month == 2)
    {
        printf("enter year");
        scanf("%d", &year);
           if((year%4==0) && ((year%400==0) || (year%100!=0)))
    {
            printf("%d is a leap year", &year);  
    } else {
            printf("%d is not a leap year", &year);  
    }

        // if (year % 400 == 0)
        // {
        //     printf("february, days=29 === its a leap year !!! ");
        // }
        // else if (year % 4 == 0)
        // {
        //     printf("february, days=29 === its a leap year !!! ");
        // }
        // else if (year % 100 != 0)
        // {
        //     printf("february, days=28 === its not a leap year!!!");
        // }
        // // else
        // // {
        // //     printf("february, days=28 === its not a leap year!!!");
        // // }
    }

    else if (month == 3)
    {
        printf("march, days= 31");
    }
    else if (month == 4)
    {
        printf("apirl, days= 30");
    }
    else if (month == 5)
    {
        printf("may, days= 31");
    }
    else if (month == 6)
    {
        printf("june, days= 30");
    }
    else if (month == 7)
    {
        printf("july, days= 31");
    }
    else if (month == 8)
    {
        printf("august, days= 31");
    }
    else if (month == 9)
    {
        printf("september, days= 30");
    }
    else if (month == 10)
    {
        printf("october, days= 31");
    }
    else if (month == 11)
    {
        printf("november, days= 30");
    }
    else if (month == 12)
    {
        printf("december, days= 31");
    }

    return 0;
}
