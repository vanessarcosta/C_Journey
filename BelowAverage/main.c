#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    double average, total;

    printf("Quantos elementos vai ter o vetor? ");
    scanf("%d", &N);

    double vectorNumbers[N];

    for(int i = 0; i < N; i++)
    {
        printf("Digite um numero: ");
        scanf("%lf", &vectorNumbers[i]);
    }


    for(int i = 0; i < N; i++)
    {
      total += vectorNumbers[i];
    }

    average = (double) total / N;
    printf("\nMEDIA DO VETOR = %.3lf\n", average);

    printf("ELEMENTOS ABAIXO DA MEDIA:\n");
    for(int i = 0; i < N; i++)
    {
        if(vectorNumbers[i] < average)
        {
            printf("%.1lf\n", vectorNumbers[i]);
        }
    }
    return 0;
}
