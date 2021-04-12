#include <stdio.h>

#define BUFFER 255

int main()
{
    char name[BUFFER] = "\0";
    gets(name);
    printf("*************************\nHello %s.\nNice to meet you.\nHope you will have happy time\n*************************\n", name);

    return 0;
}