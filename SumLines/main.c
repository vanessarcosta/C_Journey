#include <stdio.h>
#include <stdlib.h>

int main()
{
   int M, N, sumLines = 0;

    printf("Qual a quantidade de linhas da matriz? ");
    scanf("%d", &M);
    printf("Qual a quantidade de colunas da matriz? ");
    scanf("%d", &N);

    double matrix[M][N];
    double vectorSum[M];

    for(int i = 0; i < M; i++)
    {
        printf("Digite os elementos da %da. linha:\n", i+1);

        for(int j = 0; j < N; j++)
            {
                scanf("%lf", &matrix[i][j]);
            }
    }

    for(int i= 0; i < M; i++)
    {
        sumLines = 0;
        for(int j = 0; j <N; j++)
        {
            sumLines += matrix[i][j];
        }
        vectorSum[i] = sumLines;
    }

    printf("\nVETOR GERADO:\n");

    for(int i = 0; i < M; i++)
    {
        printf("%.1lf\n", vectorSum[i]);
    }



    return 0;
}
