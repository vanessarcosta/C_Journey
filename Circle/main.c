#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double radius, area;
    double pi_double = 3.14159;

    printf("Digite o valor do raio do circulo: ");
    scanf("%lf", &radius);

    area = pi_double * (pow(radius, 2));
    printf("AREA = %.3lf", area);

    return 0;
}
