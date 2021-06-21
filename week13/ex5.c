#include <stdio.h>
#include <string.h>

#define MAX_STRING 255

int strend(char* s, char* t);

void main()
{
    char s[MAX_STRING], t[MAX_STRING];
    
    printf("Enter the s string: ");
    gets(s);

    printf("Enter the t string: ");
    gets(t);

    if (strend(s, t)) printf("The string t occurs at the end of the string s\n");
    else printf("The string t not occurs at the end of the string s\n");
}

int strend(char* s, char* t) {
    char *found = strstr(s, t);
    int pos;

    if (!found) return 0;
    pos = found - s;
    if (pos + strlen(t) == strlen(s)) return 1;
    else return 0;
}