#include <stdio.h>
#include <math.h>

#define CAL_COUNT 10

int main()
{
    double square_area, square_root = 1.0;
    
    printf("The square area: ");
    scanf("%lf", &square_area);
    int i = 0;
    do
    {
        square_root = square_root - ((pow(square_root, 2) - square_area) / (2 * square_root));
        i++;
    } while (i < CAL_COUNT);
    printf("The square root: %.2lf\n", square_root);
    return 0;
}