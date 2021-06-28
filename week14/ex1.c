#include <stdio.h>
#include <stdlib.h>

typedef struct Date
{
    int day;
    int month;
    int year;
} Date;

Date *inputDate();
int datecmp(Date *date1, Date *date2);

void main()
{
    Date *date1, *date2;
    int rescmp;
    
    printf("Please input the first day!\n");
    date1 = inputDate();
    printf("Please input the second day!\n");
    date2 = inputDate();

    rescmp = datecmp(date1, date2);
    if (rescmp > 0) printf("%d/%d/%d is after %d/%d/%d\n", date1->day, date1->month, date1->year, date2->day, date2->month, date2->year);
    else if (rescmp < 0) printf("%d/%d/%d is before %d/%d/%d\n", date1->day, date1->month, date1->year, date2->day, date2->month, date2->year);
    else printf("%d/%d/%d is identical to %d/%d/%d\n", date1->day, date1->month, date1->year, date2->day, date2->month, date2->year);
}

Date *inputDate()
{
    Date *res = (Date *)malloc(sizeof(Date));

    printf("Input a date!\n");

    printf("Input the day: ");
    scanf("%d", &res->day);
    while (res->day < 1 || res->day > 31)
    {
        printf("Your day is incorrect! (1 <= day <= 31)\nInput the day: ");
        scanf("%d", &res->day);
    }

    printf("Input the month: ");
    scanf("%d", &res->month);
    while (res->month < 1 || res->month > 12)
    {
        printf("Your month is incorrect! (1 <= day <= 12)\nInput the month: ");
        scanf("%d", &res->month);
    }

    printf("Input the year: ");
    scanf("%d", &res->year);
    while (res->year < 1)
    {
        printf("Your year is incorrect! (0 < year)\nInput the year: ");
        scanf("%d", &res->year);
    }

    return res;
}

int datecmp(Date *date1, Date *date2)
{
    if (date1->year < date2->year)
        return -1;
    else if (date1->year > date2->year)
        return 1;
    else
    {
        if (date1->month < date2->month)
            return -1;
        else if (date1->month > date2->month)
            return 1;
        else
        {
            if (date1->day < date2->day)
                return -1;
            else if (date1->day > date2->day)
                return 1;
            else return 0;
        }
    }
}