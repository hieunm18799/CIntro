#include <stdio.h>

#define REGULAR_WPH 25000
#define OVERTIME_WPH 40000

int main()
{
    long wages;
    int hours;
    printf("Worked hours: ");
    scanf("%d", &hours);
    wages = hours > 40 ? 40*REGULAR_WPH + (hours - 40)*OVERTIME_WPH : REGULAR_WPH * hours;
    printf("Employee’s total wages for week %ld VND\n", wages);
    return 0;
}