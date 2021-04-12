#include <stdio.h>

#define PI 3.1415

int main()
{
    double radius;
    printf("Input radius: ");
    scanf("%lf", &radius);
    printf("Circf's area and circumference are %.2lf & %.2lf\n", radius*radius*PI, radius*2*PI);
    printf("Sphere's area and volume are %.2lf & %.2lf\n", 4*radius*radius*PI, 4*radius*radius*radius*PI/3);
    return 0;
}