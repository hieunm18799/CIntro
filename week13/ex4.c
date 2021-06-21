#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER 255

void main()
{
    char *str = (char *)malloc(sizeof(char) * BUFFER);
    printf("Write sone string: ");
    scanf("%[^\n]", str);
    
    char * res = strtok(str, " ");
    printf("First name: %s\n", res);
    res = strtok(NULL, " ");
    printf("Last name: %s\n", res);
}