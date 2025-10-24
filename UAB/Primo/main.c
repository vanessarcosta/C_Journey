#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Fa�a um programa que verifica se um determinado n�mero N � um n�mero primo.
    Um n�mero � primo se � divis�vel apenas por ele pr�prio e pela unidade.
    Se n�o for primo deve identificar o menor n�mero pelo qual � divis�vel.*/

    int N, i = 2;
    int primo = 1; // assume que � primo at� achar um divisor

    printf("Funcao que verifica se um numero N e' primo:\n");
    printf("Indique N: ");
    scanf("%d", &N);

    if (N <= 1) {
        printf("0\n");
        return 0;
    }

    // testar divisores de 2 at� sqrt(N)
    while (i * i <= N) {
        if (N % i == 0) {
            primo = 0; // achou divisor
            break;
        }
        i++;
    }

    if (primo)
        printf("0\n");
    else
        printf("Numero divis�vel por %d\n", i);    // imprime o menor divisor



    return 0;
}
