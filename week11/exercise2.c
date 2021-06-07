#include <stdio.h>

int a[7] = {13, -355, 235, 47, 67, 943, 1222};

void main()
{
    for (int i = 0; i < 5; i++)
        printf("The address (in hexadecimal format) of element %d of the array: %x\n", i + 1, &a[i]);
}