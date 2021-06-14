#include <stdio.h>
#include <stdlib.h>

void swap3Float(float *x, float *y, float *z);

void main()
{
    float x, y, z;
    float *p, *q, *r;

    p = &x;
    q = &y;
    r = &z;

    printf("Input 3 float: ");
    scanf("%f", &x);
    scanf("%f", &y);
    scanf("%f", &z);

    printf("x, y, z, p, q, r, *p, *q, *r: %.2f, %.2f, %.2f, %p, %p, %p, %.2f, %.2f, %.2f\n", x, y, z, p, q, r, *p, *q, *r);

    swap3Float(&x, &y, &z);
    printf("x, y, z, p, q, r, *p, *q, *r: %.2f, %.2f, %.2f, %p, %p, %p, %.2f, %.2f, %.2f\n", x, y, z, p, q, r, *p, *q, *r);

    float *temp;
        temp = p;
        p = q;
        q = r;
        r = temp;
    printf("x, y, z, p, q, r, *p, *q, *r: %.2f, %.2f, %.2f, %p, %p, %p, %.2f, %.2f, %.2f\n", x, y, z, p, q, r, *p, *q, *r);
}

void swap3Float(float *x, float *y, float *z)
{
    float temp = *x;
    *x = *y;
    *y = *z;
    *z = temp;
}