#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX_ARR 100

int sumOfCube(int n);
int *listSubmultiples(int n, int *arrLength);
int *listFirstPerfectSquare(int n, int *arrLength);

int main()
{
    int n, length;
    int* tmp;
    tmp = (int *) malloc (sizeof(int) * MAX_ARR);

    printf("Input n: ");
    scanf("%d", &n);

    printf("Sum of Cube: %d\n", sumOfCube(n));
    printf("List Submultiples:\n");
    tmp = listSubmultiples(n, &length);
    for (int i = 0; i < length; i++) printf("%d ", tmp[i]);
    printf("\n");
    printf("List First Perfect Square\n");
    tmp = listFirstPerfectSquare(n, &length);
    for (int i = 0; i < length; i++) printf("%d ", tmp[i]);
    printf("\n");

    return 0;
}

int sumOfCube(int n)
{
    int res = 0;
    for (int i = 1; i <= n; i++)
        res += i*i*i;
    return res;
}

int *listSubmultiples(int n, int *arrLength)
{
    int* res, length = 0;
    res = (int *) malloc (sizeof(int) * MAX_ARR);
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            res[length] = i;
            length++;
        }
    }
    *arrLength = length;
    return res;
}

int *listFirstPerfectSquare(int n, int *arrLength)
{
    int* res, length = 0;
    res = (int *) malloc (sizeof(int) * MAX_ARR);
    for (int i = 1; i <= n; i++)
    {
        res[length] = i*i;
        length++;
    }
    *arrLength = length;
    return res;
}