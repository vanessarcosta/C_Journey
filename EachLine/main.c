#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, bigger = 0;

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

    printf("\nMAIOR ELEMENTO DE CADA LINHA:\n");

    for(int i = 0; i < N; i++)
    {
        bigger = 0;
        for(int j = 0; j < N; j++)
        {
            if(bigger < matrix[i][j])
            {
               bigger =  matrix[i][j];
            }
        }
        printf("%d\n", bigger);
    }

    return 0;
}
