#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
    printf("Char max and min: %d & %d\n", SCHAR_MAX, SCHAR_MIN);
    printf("Short max and min: %d & %d\n", SHRT_MAX, SHRT_MIN);
    printf("Integer max and min: %d & %d\n", INT_MAX, INT_MIN);
    printf("Long max and min: %ld & %ld\n", LONG_MAX, LONG_MIN);
    printf("Float max and min: %f\n", FLT_MAX);
    printf("Double max and min: %f\n", DBL_MAX);
    printf("Unsigned char max: %d\n", UCHAR_MAX);
    printf("Unsigned short max: %d\n", USHRT_MAX);
    printf("Unsigned integer max: %u\n", UINT_MAX);
    printf("Unsigned long max: %lu\n", ULONG_MAX);
    return 0;
}