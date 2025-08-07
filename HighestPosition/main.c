#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, highestPosition;
    double highestValue;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &N);

    double vectorNumbers[N];

    for(int i = 0; i < N; i++)
    {
        printf("Digite um numero: ");
        scanf("%lf", &vectorNumbers[i]);
    }

    highestPosition = 0;
    highestValue = 0;

    for(int i = 0; i < N; i++)
    {
        if(highestValue < vectorNumbers[i])
        {
            highestValue = vectorNumbers[i];
            highestPosition = i;
        }
    }

    printf("\nMAIOR VALOR = %.1lf\n", highestValue);
    printf("POSICAO DO MAIOR VALOR = %d\n", highestPosition);
    return 0;
}
