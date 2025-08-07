#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;

    printf("Quantos valores vai ter cada vetorr? ");
    scanf("%d", &N);

    int vectorA[N];
    int vectorB[N];
    int vectorC[N];

    printf("Digite os valores do vetor A:\n");

    for(int i = 0; i < N; i++)
    {
        scanf("%d", &vectorA[i]);
    }

    printf("Digite os valores do vetor B:\n");

    for(int i = 0; i < N; i++)
    {
        scanf("%d", &vectorB[i]);
    }

    for(int i = 0; i < N; i++)
    {
        vectorC[i] = vectorA[i] + vectorB[i];
    }

    printf("\nVETOR RESULTANTE:\n");

    for(int i = 0; i < N; i++)
    {
        printf("%d\n", vectorC[i]);
    }
    return 0;
}
