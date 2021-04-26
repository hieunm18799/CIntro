#include <stdio.h>
#include <string.h>

#define MAX_STRING 255

char *return_class(int age);

int main()
{
    int age;
    printf("Input the age(age >= 0): ");
    scanf("%d", &age);
    printf("Your class: %s\n", return_class(age));
    return 0;
}

char *return_class(int age) {
    if (0 <= age && age < 18) return "Child";
    if (18 <= age && age < 65) return "Adult";
    if (65 <= age) return "Senior Citizen";
    return "NONE";
}