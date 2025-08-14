#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, sum = 0;

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

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            if(i < j)
            {
                sum += matrix[i][j];
            }
        }
    }

    printf("\nSOMA DOS ELEMENTOS ACIMA DA DIAGONAL PRINCIPAL = %d\n", sum);
    return 0;
}
