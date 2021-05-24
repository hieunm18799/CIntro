#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define WAGE 15000
#define MIN_HOUR 10
#define MAX_HOUR 65
#define TODO_HOUR 40
#define MULTI_WAGE 1.5

int wageCal(int hours);

int main()
{
    int hours;
    printf("Input worker's hours: ");
    scanf("%d", &hours);

    printf("Worker's wage: %d\n", wageCal(hours));
    return 0;
}

int wageCal(int hours) {
    return hours < MIN_HOUR ? 0 : ( hours > MAX_HOUR ? WAGE * TODO_HOUR + WAGE * MULTI_WAGE * (MAX_HOUR - TODO_HOUR) : (hours > TODO_HOUR ? WAGE * TODO_HOUR + (hours - TODO_HOUR) * WAGE * MULTI_WAGE : WAGE * hours));
}