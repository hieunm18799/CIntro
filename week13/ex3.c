#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

#define BUFFER 255
#define FORMAT "LLLNNNN"

bool checkFormat(char* str);

void main()
{
    char *str = (char *)malloc(sizeof(char) * BUFFER);
    printf("Write sone string: ");
    scanf("%[^\n]", str);
    
    if (checkFormat(str)) printf("Corrected format!\n");
    else printf("Wrong format!\n");
}

bool checkFormat(char* str) {
    if (strlen(str) != strlen(FORMAT)) return false;
    for (int i = 0; i < strlen(FORMAT); i++){
        switch (FORMAT[i])
        {
        case 'L':
            if (!isalpha(str[i])) return false;
            break;
        case 'N':
            if (!isdigit(str[i])) return false;
            break;
        default:
            break;
        }
    }
    return true;
}