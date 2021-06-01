#include <stdio.h>

#define SIZE 3

int main()
{
    int A[][SIZE] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int B[][SIZE] = {{1, 1, 1}, {2, 2, 2}, {3, 3, 3}};
    int C[SIZE][SIZE];
    for (int i = 0; i < SIZE; ++i)
        for (int j = 0; j < SIZE; ++j)
            C[i][j] = A[i][j] * B[i][j];

    for (int i = 0; i < SIZE; ++i)
    {
        printf("|");
        for (int j = 0; j < SIZE; ++j)
        {
            printf("%-3d", A[i][j]);
        }
        printf("|");

        if (i != SIZE % 2) printf("\t\t");
        else printf("\t*\t");

        printf("|");
        for (int j = 0; j < SIZE; ++j)
        {
            printf("%-3d", B[i][j]);
        }
        printf("|");

        if (i != SIZE % 2) printf("\t\t");
        else printf("\t=\t");

        printf("|");
        for (int j = 0; j < SIZE; ++j)
        {
            printf("%-3d", C[i][j]);
        }
        printf("|\n");
    }
    return 0;
}