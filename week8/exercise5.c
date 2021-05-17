#include <stdio.h>
#include <stdlib.h>

#define MAX_ARR 100
#define SYMBOL_PASSED 'p'
#define SYMBOL_FAILED 'f'

int main()
{
    int stud_arr[MAX_ARR], stud_n, i = 0, stud_passed = 0, stud_failed = 0;
    char char_tmp;
    printf("Number of student: ");
    scanf("%d", &stud_n);
    while (i < stud_n)
    {
        printf("The student's number %d is passed or faiiled?(p/f): ", i + 1);
        while ((char_tmp = getchar()) == '\n');
        switch (char_tmp)
        {
        case SYMBOL_PASSED:
            stud_passed++;
            break;
        case SYMBOL_FAILED:
            stud_failed++;
            break;
        default:
            break;
        }
        i++;
    }
    printf("The number of passed student and failed is %d and %d.\n", stud_passed, stud_failed);
    
    return 0;
}