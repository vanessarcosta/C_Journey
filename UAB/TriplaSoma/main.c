#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Dado um inteiro positivo N, escrever todas as decomposições distintas possíveis como soma de três inteiros positivos
    (considerar iguais as triplas com os mesmos valores mas por outra ordem).
    Calcular também o número de somas distintas.*/

    int N, primeiraParcela, segundaParcela = 1, terceiraParcela = 1, somas = 0, limiteParcela;
    printf("Escreva um numero para decompor em somas de tres parcelas.\n");
    printf("Numero: ");
    scanf("%d", &N);

    primeiraParcela = N - 2;
    limiteParcela = N / 2;

    while (primeiraParcela >= 1)
    {
        /* para cada primeiraParcela, recomeça segunda e terceira */
        segundaParcela = 1;
        terceiraParcela = 1;

        /* percorre segundaParcela garantindo a >= b */
        while (segundaParcela <= primeiraParcela)
        {
            terceiraParcela = N - primeiraParcela - segundaParcela;

            if (terceiraParcela < 1) {
                /* c não é positiva; com b maior só piora -> sai do loop de b */
                break;
            }

            /* aceita somente quando c <= b (para evitar permutações) */
            if (terceiraParcela <= segundaParcela) {
                somas++;
                /* opcional: imprimir a decomposição
                printf("%d + %d + %d\n", primeiraParcela, segundaParcela, terceiraParcela);
                */
            }

            segundaParcela++;
        }

        primeiraParcela--;
    }

    printf("Numero de somas: %d", somas);

    return 0;
}
