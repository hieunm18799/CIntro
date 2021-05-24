#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX_ARR 100

void printnchars(int ch, int n);

int main()
{
    printnchars('*', 1);
    printf("\n");
    printnchars('*', 2);
    printf("\n");
    printnchars('*', 3);
    printf("\n");
    printnchars('*', 5);
    return 0;
}

void printnchars(int ch, int n) {
    for (int i = 0; i < n; i++) printf("%c", ch);
}