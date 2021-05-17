#include <stdio.h>

int main()
{
    float grade, grade_sum = 0;
    int  grade_n = 1;
    do {
        printf("Put a negative grade to end the loop\nThe grade %d is: ", grade_n);
        scanf("%f", &grade);
        printf("------------------------------------------------------------------\n");
        grade_n++;
        grade_sum += grade;
    } while (grade >= 0);
    grade_sum += -grade;
    printf("The average of grades is %.2f.\n", grade_sum/ (grade_n - 2));
    return 0;
}