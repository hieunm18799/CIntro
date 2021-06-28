#include <stdio.h>
#include <stdlib.h>

#define MAX_ARRAY 100

typedef struct
{
    char id[6];
    char name[31];
    float grade;
    char classement;
} student;

student *inputStudent();

void main()
{
    int n = 0;
    student *students = (student*)malloc(sizeof(student)*MAX_ARRAY);

    printf("Input the number of students: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        printf("Input the student %d!\n", i + 1);
        students[i] = *inputStudent();
    }

    printf("%-31s%-10s%s\n", "Name", "Grade", "Classment");
    for (int i = 0; i < n; i++) printf("%-31s%-10.1f%c\n", (students + i)->name, (students + i)->grade, (students + i)->classement);
}

student *inputStudent(){
    student *res = (student*)malloc(sizeof(student));

    printf("Input student's ID: ");
    scanf("\n%[^\n]", res->id);

    printf("Input student's name: ");
    scanf("\n%[^\n]", res->name);
    
    printf("Input student's grade: ");
    scanf("%f", &res->grade);

    if (res->grade < 6.5) res->classement = 'D';
    else if (res->grade < 8) res->classement = 'C';
    else if (res->grade < 9) res->classement = 'B';
    else res->classement = 'A';

    return res;
}