#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int K;
    int i, k = 0;
    double Pi, soma = 0.0;

    scanf("%d", &K);

    while (k <= K)
    {
        /* calcula (4k)! */
        double fatorial4k = 1.0;
        int limite4k = 4 * k;
        i = 1;
        while (i <= limite4k)
        {
            fatorial4k *= (double)i;
            i++;
        }

        /* calcula k! */
        double fatorialK = 1.0;
        int limiteK = k;
        i = 1;
        while (i <= limiteK)
        {
            fatorialK *= (double)i;
            i++;
        }

        /* termo = (4k)! * (1103 + 26390*k) / ( (k!)^4 * 396^(4k) ) */
        double numerador = fatorial4k * (1103.0 + 26390.0 * (double)k);
        double denominador = pow(fatorialK, 4) * pow(396.0, 4.0 * (double)k);
        double termo = numerador / denominador;

        soma += termo;
        k++;
    }

    double factor = 2.0 * sqrt(2.0) / 9801.0;
    double sobrePi = factor * soma;
    Pi = 1.0 / sobrePi;

    printf("%.17f\n", Pi);
    return 0;
}
