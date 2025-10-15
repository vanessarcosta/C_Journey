#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Calcular o valor da função Fibonacci {definição da função Fibonacci não padrão}, para um dado argumento N.
    Para N=1 ou 2, deve retornar N, caso contrário retorna a soma dos dois valores anteriores.*/

    int N, F,anterior, atual, i;

    printf("Calculo do valor da funcao Fibonacci:\n");
    printf("Indique N: ");
    scanf("%d", &N);

    if(N == 1 || N == 2)
    {
        printf("Resultado: %d", N);
    }
    else
    {
        anterior = 1;
        atual = 2;
        i = 3;

        while (i <= N)
        {
            F = anterior + atual;
            printf("Fib(%d)=%d\n", i, F);
            anterior = atual;
            atual = F;
            i++;
        }
    }

    printf("Resultado: %d", F);
    return 0;
}
