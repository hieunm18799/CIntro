#include <stdio.h>
#include <stdlib.h>

#define INCOMEPLUS_SALARY_MUL 1.1

void incomeplus(int *year, int* salary);

void main()
{
    int year, cur_salary;

    printf("Input the number of years passed from the beginning years of current salary: ");
    scanf("%d", &year);
    printf("Input the current salary($): ");
    scanf("%d", &cur_salary);

    incomeplus(&year, &cur_salary);
    printf("The current salary now is: %d\n", cur_salary);
}

void incomeplus(int *year, int* salary){
    if (*year > 3) {
        *salary *= INCOMEPLUS_SALARY_MUL;
        *year = 0;
    }
}