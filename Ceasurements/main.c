#include <stdio.h>
#include <stdlib.h>

int main()
{
    double measureA, measureB, measureC, areaSquare, areaTriangle, areaTrapezoid;

    printf("Digite a medida A: ");
    scanf("%lf", &measureA);

    printf("Digite a medida B: ");
    scanf("%lf", &measureB);

    printf("Digite a medida C: ");
    scanf("%lf", &measureC);

    areaSquare = pow(measureA, 2);
    areaTriangle = measureA * measureB / 2;
    areaTrapezoid = (measureA + measureB) * measureC / 2;

    printf("AREA DO QUADRADO = %.4lf\n", areaSquare);
    printf("AREA DO TRIANGULO = %.4lf\n", areaTriangle);
    printf("AREA DO TRAPEZIO = %.4lf\n", areaTrapezoid);

    return 0;
}
