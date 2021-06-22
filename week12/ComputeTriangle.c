#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void computeTriangle(double a, double b, double c, double* area, double* perimeter);

void main()
{
    double a, b, c, area = 0, perimeter = 0;

    printf("Input 3 triangle elementers: ");
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    
    computeTriangle(a, b, c, &area, &perimeter);
    if (area < 0) printf("This isn't a triangle!\n");
    else printf("The triangle's area and perimeter is %.2lf and %.2lf.\n", area, perimeter);
}

void computeTriangle(double a, double b, double c, double* area, double* perimeter) {
    //A triangle must have the elementers above 0 and total of the 2 elementers must biger than the other
    //If not a triangle than the area and perimeter is -1
    if ( a + b <= c || a + c <= b || b + c <= a || a < 0 || b < 0 || c < 0) {
        *area = -1;
        *perimeter = -1;
    } else {
        *perimeter = (a + b + c) / 2;
        double tmp = *perimeter;
        *area = sqrt(tmp * (tmp - a) * (tmp - b) * (tmp - c));
    }
}