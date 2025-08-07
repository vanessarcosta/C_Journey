#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, total, count;
    double average;

    printf("Quantos elementos vai ter o vetor? ");
    scanf("%d", &N);

    int vectorNumbers[N];

    for(int i = 0; i < N; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &vectorNumbers[i]);
    }

    total = 0;
    for(int i = 0; i < N; i++)
    {
        if(vectorNumbers[i] % 2 == 0)
        {
            total += vectorNumbers[i];
            count++;
        }
    }

    if(total == 0)
    {
        printf("NENHUM NUMERO PAR\n");
    }
    else
    {
        average = (double) total / count;
        printf("MEDIA DOS PARES = %.1lf\n", average);
    }

    return 0;
}
