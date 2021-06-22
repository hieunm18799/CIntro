#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STRING 255
#define MAX_ARR 100

char arr_str[MAX_ARR][MAX_STRING] = {"TV127 31 inch Television",
"CD057 CD Player",
"TA877 Answering Machine",
"CS409 Car Stereo",
"PC655 Personal Computer"
};

int arr_str_length = 5;

void main()
{
    char str_tmp[MAX_STRING];

    printf("Input choice: ");
    scanf("%s", str_tmp);
    
    if (strcmp(str_tmp, "all") == 0)
    {
        for (int i = 1; i < arr_str_length; i++) printf("%s\n", arr_str[i]);
    } else {
        for (int i = 0; i < arr_str_length; i++)
        if (strstr(arr_str[i], str_tmp)) {
            printf("%s\n", arr_str[i]);
        }
    }
}