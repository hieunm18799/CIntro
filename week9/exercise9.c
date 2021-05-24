#include <stdio.h>
#include <stdbool.h>

bool isLeapYear(int year);

int main()
{
    int year;

    printf("Input year: ");
    scanf("%d", &year);
    if (isLeapYear(year)) printf("%d is a leap year\n", year);
    else printf("%d isn't a leap year\n", year);

    return 0;
}

bool isLeapYear(int year) {
    if (year % 400 == 0) return true;
    if (year % 4 == 0 && year % 100 != 0) return true;
    return false;
}