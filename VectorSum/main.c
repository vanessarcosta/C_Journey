#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, i;
    double sum, average;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &N);

    double vect[N];

    for(i = 0; i < N; i++)
    {
        printf("Digite um numero: ");
        scanf("%lf", &vect[i]);
    }

    printf("VALORES = ");
    for(i = 0; i < N; i++)
    {
        printf("  %.1lf ", vect[i]);
    }

    for(i = 0; i < N; i++)
    {
      sum += vect[i];

    }

    average = sum / N;
    printf("\n");
    printf("SOMA = %.2lf\n", sum);
    printf("MEDIA = %.2lf\n", average);

    return 0;
}
