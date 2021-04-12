#include <stdio.h>
#include <stdlib.h>

#define BUFFER 255

int main()
{
    char x[BUFFER];
    int i;
    scanf("%s", &x, 256);   // Read a wide-character string
    printf("Your string: %s\n", x);
    scanf("%ld", &i, 45454545);
    printf("%ld\n", i);
    return 0;
}