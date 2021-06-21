#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_STRING 255
#define REPLACE_CHAR ' '

bool checkIfPuncSigns(char c);

char punc_signs[] = {',', '.', ';', ':', '!', '?'};

void main()
{
    char str[MAX_STRING];
    
    printf("Enter a string: ");
    gets(str);

    for (int i = 0; i < strlen(str); i++)
    if (checkIfPuncSigns(str[i])) str[i] = REPLACE_CHAR;
    printf("The string after replace: %s\n", str);
}

bool checkIfPuncSigns(char c){
    for (int i = 0; i < strlen(punc_signs); i++) 
    if (punc_signs[i] == c) return true;
    return false;
}