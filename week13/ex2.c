#include <stdio.h>
#include <string.h>

#define MAX_STRING 255

int main()
{
    char s[MAX_STRING], c1, c2;
    int i;

    printf("Input  the string : ");
    gets(s);

    printf("Enter a character replace: ");
    c1 = getchar();
    getchar();
    printf("Enter character to replace  with %c: ", c1);
    c2 = getchar();
    printf("Before replace: %s\n", s);

    for (i = 0; s[i]; i++)
    {
        if (s[i] == c1)
        {
            s[i] = c2;
        }
    }

    printf("After replace: %s\n", s);

    return 0;
}