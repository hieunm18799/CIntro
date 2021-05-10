#include <stdio.h>

#define MAX 100

int main()
{
    int prime_arr[MAX], n = 0, flag;
    for (int i = 2; i < MAX; i++) {
        flag = 1;
        for (int j = 0; j < n && flag == 1; j++) 
            if (i % prime_arr[j] == 0) flag = 0;
        if (flag != 0) {
            prime_arr[n] = i;
            n++;
        }
    }
    printf("Prime's list number: \n");
    for (int i = 0; i < n; i++) {
        printf("%-3d ", prime_arr[i]);
        if ((i+1) % 10 == 0) printf("\n");
    }
    return 0;
}