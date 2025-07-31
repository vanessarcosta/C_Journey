#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double base, height, area, perimeter, diagonal;

    printf("Base do retangulo: ");
    scanf("%lf", &base);

    printf("Altura do retangulo: ");
    scanf("%lf", &height);

    area = base * height;
    perimeter = 2 *(base + height);
    diagonal = sqrt(pow(base, 2.0) + pow(height, 2.0));

    printf("AREA = %.2lf\n", area);
    printf("PERIMETRO  = %.4lf\n", perimeter);
    printf("DIAGONAL = %.4lf\n", diagonal);

    return 0;
}
