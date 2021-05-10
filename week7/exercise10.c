#include <stdio.h>
#include <math.h>

#define MAX 100

int main()
{
    int n, check_sum, perf_arr[MAX], perf_length = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    for (int i = 2; i < n; i++)
    {
        check_sum = 1;
        for (int j = 2; j < sqrt(i) && check_sum <= i; j++)
            if (i % j == 0)
                check_sum += j + (i / j);
        if (check_sum <= i && (sqrt(i) == i / sqrt(i))) check_sum += sqrt(i);
        if (check_sum == i)
        {
            perf_arr[perf_length] = i;
            perf_length++;
        }
    }
    if (perf_arr == 0)
        printf("Don't have any perfect number!\n");
    else
    {
        printf("Perfect's list number: \n");
        for (int i = 0; i < perf_length; i++)
        {
            printf("%-3d ", perf_arr[i]);
            if ((i + 1) % 10 == 0)
                printf("\n");
        }
    }
    return 0;
}