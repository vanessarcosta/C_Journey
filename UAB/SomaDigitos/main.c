#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Calcule a soma dos quadrados dos dígitos de um número introduzido pelo utilizador.*/

    int N, digito, soma = 0;

    printf("Calculo da soma do quadrado dos digitos de um numero:\n");
    printf("Numero: ");
    scanf("%d", &N);

    while(N >= 1)
    {
        digito = N % 10;
        soma += digito * digito;
        printf("n=%d; soma=%d\n", N, soma);
        N = N/10;
    }

    printf("Resultado: %d", soma);

    return 0;
}
