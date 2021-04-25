#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number_student;

    printf("Enter the number of student: ");
    scanf("%d", &number_student);

    printf("%d\n", number_student / 7);
    printf("The number of students in the smallest class: %d\n", number_student == 7 * (number_student / 7)? 7 : (7 - number_student + 7 * (number_student / 7)));
    printf("The number of students in the largest class: %d\n", number_student == 7 * (number_student / 7)? 7 : (number_student - 7 * (number_student / 7)));
    printf("The average number of students per class: %.2f\n", (float)((float)number_student / 7));
    printf("The number of classes of above average size: %d\n", number_student == 7 * (number_student / 7)? 7 : (number_student - 7 * (number_student / 7)));
    printf("The number of classes of at most average size: %d\n", number_student > 7*(number_student / 7)? ((number_student / 7) >= 7 / 2? 7 - number_student + 7 * (number_student / 7) : number_student - 7 * (number_student / 7)) : 7);
    printf("The number of students in classes of larger than average size: %d\n", number_student == 7 * (number_student / 7)? 0 : ((number_student / 7) + 1));
    printf("The number of classes of exactly average size: %d\n", number_student == 7 * (number_student / 7)? 7 : 0);

    return 0;
}
