#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*o programa que soma os primeiros N números inteiros, sendo N definido pelo utilizador.*/

    int n, i, soma;

    printf("Calculo da soma dos primeiros N numeros.\nIndique N:");
    /* ler um número inteiro */
    scanf("%d", & n);
    /* na variável soma, será acumulado o resultado */
    soma = 0;
    i = 1;

    while(i <= n)
    {
        soma+= i;
        printf("adicionar %d, parcial %d\n", i, soma);
        i++;
    }

    printf("Total: %d", soma);
    return 0;
}
