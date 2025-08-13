#include <stdio.h>
#include <stdlib.h>

int main()
{
    int M, N, quantity = 0;

    printf("Qual a quantidade de linhas da matriz? ");
    scanf("%d", &M);
    printf("Qual a quantidade de colunas da matriz? ");
    scanf("%d", &N);

    int matrix[M][N];

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            printf("Elemento [%d,%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nVALORES NEGATIVOS:\n");

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            if(matrix[i][j] < 0)
            {
                printf("%d\n", matrix[i][j]);
            }
        }
    }

    return 0;
}
