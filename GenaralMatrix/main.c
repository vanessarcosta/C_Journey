#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int N, line, column;
    double sum = 0.0;

    printf("Qual a ordem da matriz? ");
    scanf("%d", &N);

    double matrix[N][N];

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            printf("Elemento [%d,%d]: ", i, j);
            scanf("%lf", &matrix[i][j]);
        }
    }

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            if(matrix[i][j] > 0)
            {
                sum += matrix[i][j];
            }
        }
    }
    printf("\nSOMA DOS POSITIVOS: %.1lf\n", sum);

    printf("\nEscolha uma linha: ");
    scanf("%d",&line);
    printf("LINHA ESCOLHIDA: ");

    for(int j = 0; j < N; j++)
    {
        printf("%.1lf ", matrix[line][j]);
    }

    printf("\n\nEscolha uma coluna: ");
    scanf("%d",&column);
    printf("COLUNA ESCOLHIDA: ");

    for(int i = 0; i < N; i++)
    {
        printf("%.1lf ", matrix[i][column]);
    }

    printf("\n\nDIAGONAL PRINCIPAL: ");

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            if(i == j)
            {
                printf("%.1lf ", matrix[i][j]);
            }
        }
    }

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            if(matrix[i][j] < 0)
            {
                matrix[i][j] = pow(matrix[i][j], 2);
            }
        }
    }

    printf("\n")
    printf("\nMATRIZ ALTERADA:\n");

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            printf("%.1lf ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
