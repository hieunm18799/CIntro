#include <stdio.h>

#define BUFFER 255

void main()
{
    char name[BUFFER] = "\0";
    gets(name);
    printf("Hi my neighbor, %s.\n", name);
}