#include <stdio.h>

#define CON 27
#define MAX 100

int main()
{
    for (int i = 1; i <= MAX; i++) {
        if (i > CON) 
        {
            printf("%2d ", i);
            if ((i - CON) % 10 == 0) printf("\n");
        }
    }
    return 0;
}