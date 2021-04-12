#include <stdio.h>
#include <stdlib.h>

#define BUFFER 255

int main()
{
    char *str;
    str = (char*)malloc(sizeof(char)*BUFFER);
    printf("Write sone string: ");
    scanf("%[^\n]", str);
    printf("Your string: %s\n", str);
    return 0;
}