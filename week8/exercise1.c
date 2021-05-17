#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STRING 255
#define CHAR_SPACE ' '

int main()
{
    char *str = (char*) malloc (sizeof(char) * MAX_STRING);
    printf("Input string: ");
    scanf("%*c%[^\n]", str);
    int i = 0, j;
    char last_space_tmp = CHAR_SPACE;
    while (i < strlen(str)) {
        if (str[i] == CHAR_SPACE) {
            if (last_space_tmp == CHAR_SPACE) {
                j = i;
                while (j < strlen(str) && str[j] == CHAR_SPACE) j++;
                for (int u = j; u < strlen(str); u++) str[i + u - j] = str[u];
                str[i + strlen(str) - j] = '\0';
            }
        }
        last_space_tmp = str[i];
        i++;
    }
    if (str[strlen(str) - 1] == CHAR_SPACE) str[strlen(str) - 1] = '\0';
    printf("Fixed string: %s\n", str);
    return 0;
}