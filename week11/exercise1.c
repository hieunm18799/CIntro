#include <stdio.h>

void main(){
    int tmp;

    printf("Input the integer: ");
    scanf("%d", &tmp);
    printf("The value %d dereferencing the pointer: %d\n", tmp, &tmp);

    printf("Input the integer: ");
    scanf("%d", &tmp);
    printf("The value %d dereferencing the pointer: %d\n", tmp, &tmp);

    printf("Input the integer: ");
    scanf("%d", &tmp);
    printf("The value %d dereferencing the pointer: %d\n", tmp, &tmp);
}