#include <stdio.h>
#include <stdlib.h>

void main(){
    float *ptr = (float*) malloc (sizeof(float));


    printf("Input the 3 float: ");
    scanf("%f", ptr);
    ptr += 4;
    scanf("%f", ptr);
    ptr += 4;
    scanf("%f", ptr);

    printf("The value after add 100 is: %.2f, %.2f and %.2f.\n", *(ptr - 8) + 100, *(ptr - 4) + 100, *ptr + 100);
}