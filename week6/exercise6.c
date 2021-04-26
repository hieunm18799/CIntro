#include <stdio.h>
#include <limits.h>

#define MAX_STRING 255
#define NUMBER_INTEGERS 3

int smallest_number(int* a);

int main()
{
    int a[NUMBER_INTEGERS];
    printf("Input three integers: ");
    for (int i = 0; i < NUMBER_INTEGERS; i++) scanf("%d", &a[i]);
    int tmp = smallest_number(a);
    if (tmp != NULL) printf("The smallest number: %d\n", tmp);
    else printf("There aren't no smallest number\n");
    return 0;
}

int smallest_number(int* a) {
    int max = a[0];
    for (int i = 1; i < NUMBER_INTEGERS; i++) if (a[i] < max) max = a[i];
    if (max != a[NUMBER_INTEGERS - 1]) return max;
    return NULL;
}