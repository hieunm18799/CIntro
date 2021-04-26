#include <stdio.h>
#include <string.h>

#define MAX_STRING 255

int main()
{
    char first_letter = 'Z',
            sequence[MAX_STRING];
    printf("Input the sequence: ");
    scanf("%*c%[^\n]", sequence);
    for (int i = 0; i < strlen(sequence); i++) if (first_letter > sequence[i]) first_letter = sequence[i];
    printf("The alphabetically first letter in the sequence: %c\n", first_letter);
    return 0;
}