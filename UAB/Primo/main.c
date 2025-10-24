#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Faça um programa que verifica se um determinado número N é um número primo.
    Um número é primo se é divisível apenas por ele próprio e pela unidade.
    Se não for primo deve identificar o menor número pelo qual é divisível.*/

    int N, i = 2;
    int primo = 1; // assume que é primo até achar um divisor

    printf("Funcao que verifica se um numero N e' primo:\n");
    printf("Indique N: ");
    scanf("%d", &N);

    if (N <= 1) {
        printf("0\n");
        return 0;
    }

    // testar divisores de 2 até sqrt(N)
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
        printf("Numero divisível por %d\n", i);    // imprime o menor divisor



    return 0;
}
