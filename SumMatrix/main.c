#include <stdio.h>
#include <stdlib.h>

int main()
{
    int M, N, quantity = 0;

    printf("Quantas linhas vai ter cada matriz? ");
    scanf("%d", &M);
    printf("Quantas colunas vai ter cada matriz? ");
    scanf("%d", &N);

    int matrixA[M][N];
    int matrixB[M][N];
    int matrixC[M][N];

    printf("Digite os valores da matriz A:\n");
    for(int i = 0; i < M; i++)
    {
        for(int j = 0; j < N; j++)
        {
            printf("Elemento [%d,%d]: ", i, j);
            scanf("%d", &matrixA[i][j]);
        }
    }

    printf("Digite os valores da matriz B:\n");
    for(int i = 0; i < M; i++)
    {
        for(int j = 0; j < N; j++)
        {
            printf("Elemento [%d,%d]: ", i, j);
            scanf("%d", &matrixB[i][j]);
        }
    }


    for(int i = 0; i < M; i++)
    {
        for(int j = 0; j < N; j++)
        {
          matrixC[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }

    printf("\nMATRIZ SOMA:\n");
    for(int i = 0; i < M; i++)
    {
        for(int j = 0; j < N; j++)
        {
            printf("%d ", matrixC[i][j]);
        }
        printf("\n");
    }

    return 0;
}
