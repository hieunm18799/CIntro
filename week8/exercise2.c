#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STRING 255
#define CHAR_TAB '\t'
#define CHAR_RUBOUT '\b'

int main()
{
    char *str = (char*) malloc (sizeof(char) * MAX_STRING);
    printf("Input string: ");
    scanf("%*c%[^\n]", str);
    int i = 0, j;
    while (i < strlen(str)) {
        switch (str[i])
        {
        case CHAR_TAB:
        case CHAR_RUBOUT:
            str[i] = '\\';
            break;
        default:
            break;
        }
        i++;
    }
    printf("Changed string: %s\n", str);
    return 0;
}