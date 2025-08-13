#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, quantity = 0;

    printf("Qual a ordem da matriz? ");
    scanf("%d", &N);

    int matrix[N][N];

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            printf("Elemento [%d,%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nDIAGONAL PRINCIPAL:\n");

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            if(i == j)
            {
                printf("%d ", matrix[i][j]);
            }
        }
    }

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            if(matrix[i][j] < 0)
            {
                quantity++;
            }
        }
    }

    printf("\nQUANTIDADE DE NEGATIVOS = %d\n", quantity);

    return 0;
}
