#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define BUFFER 255

int countSpace(char *str);

void main()
{
    char *str = (char *)malloc(sizeof(char) * BUFFER);
    printf("Write sone string: ");
    scanf("%[^\n]", str);
    
    printf("The number of space int string: %d\n", countSpace(str));
}

int countSpace(char* str) {
    int res = 0;

    for (int i = 0; i < strlen(str); i++) if (isspace(str[i])) res++;
    
    return res;
}