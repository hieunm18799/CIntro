#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STRING 255
#define SPACE_STRING " "

int countSpace(char* str);

void main()
{
    char* str = (char*) malloc (sizeof(char) * MAX_STRING);

    printf("Input the input string: ");
    scanf("%[^\n]", str);
    
    printf("The space in string is %d.\n", countSpace(str));
}

int countSpace(char* str) {
    int res = 0;
    char* str_tmp = (char*) malloc (sizeof(char) * MAX_STRING);
    str_tmp = str;

    do {
        str_tmp = strstr(str_tmp, SPACE_STRING);
        if (str_tmp != NULL) 
        {
            res++;
            str_tmp++;
        } else return res;
    } while (1);
}