#include <stdio.h>

#define BUFFER 255

void main()
{
    char name[BUFFER] = "\0";
    gets(name);
    printf("*************************\nMy name is %s.\nNice to meet you.\nHope you will have happy time\n*************************\n", name);
}