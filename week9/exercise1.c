#include <stdio.h>
#include <math.h>

double kineticEnergy(double m, double v);

int main()
{
    double speed, mass;

    printf("Input mass(kg): ");
    scanf("%lf", &mass);
    printf("Input mass(m/s): ");
    scanf("%lf", &speed);

    printf("Kinetic energy = %.2lf\n", kineticEnergy(mass, speed));
    return 0;
}

double kineticEnergy(double m, double v) {
    return m * pow(v, 2)/2;
}