#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Calcular o número de Euler e, através da utilização da série de Taylor para ex quando x=1:
     soma dos inversos dos fatoriais, de 0 a K, com K a tender para infinito: 1/0! + 1/1! + 1/2! + ... + 1/K!*/

    int K, i = 1;
    double termo = 1.0, soma = 1.0;

    scanf("%d", &K);

    while(i <= K)
    {
        termo = termo/i;
        soma += termo;

        i++;
    }
    printf("%.16g\n", soma);
    return 0;
}
