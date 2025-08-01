#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a, b, c, delta, x1, x2;

    printf("Coeficiente a: ");
    scanf("%lf", &a);

    printf("Coeficiente b: ");
    scanf("%lf", &b);

    printf("Coeficiente c: ");
    scanf("%lf", &c);

    delta = pow(b, 2) - 4 * a * c;

    if(a == 0 || delta < 0)
    {
        printf("Esta equacao nao possui raizes reais.\n");
    }
    else
    {
        x1 = (-b + sqrt(delta)) /(2 * a);
        printf("x1 = %.4lf\n", x1);

        x2 = (-b - sqrt(delta)) /(2 * a);
        printf("x2 = %.4lf\n", x2);
    }

    return 0;
}
