#include <stdio.h>

int main()
{
    double num1, num2;

    printf( "Enter two doubles, and I will tell you\n" );
    printf( "the relationships they satisfy: " );
    scanf( "%lf%*c%lf", &num1, &num2 );

    if ( num1 == num2 ) printf( "%.2lf is equal to %.2lf\n", num1, num2 );

    if ( num1 != num2 ) printf( "%.2lf is not equal to %.2lf\n", num1, num2 );

    if ( num1 < num2 ) printf( "%.2lf is less than %.2lf\n", num1, num2 );

    if ( num1 > num2 ) printf( "%.2lf is greater than %.2lf\n", num1, num2 );

    if ( num1 <= num2 ) printf( "%.2lf is less than or equal to %.2lf\n", num1, num2 );

    if ( num1 >= num2 ) printf( "%.2lf is greater than or equal to %.2lf\n", num1, num2 );

    return 0;
}
