#include <stdio.h>
int main()
{
    int int_number;
    double double_number;
    printf("Write sone integer: ");
    scanf("%d", &int_number);
    printf("Write sone double:");
    scanf("%lf", &double_number);
    printf("Your input are %d and %.2lf\n", int_number, double_number);
    return 0;
}