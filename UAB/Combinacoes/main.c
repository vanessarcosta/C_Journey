#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*|__| Calcule as combinações de N, R a R: multiplicar os números de N-R+1 até N,
    dividindo o resultado pelo factorial de R (produto de todos os números de 1 a R).*/

    int N, R, i = 1, resultado = 1, numerador, denominador, parcial1, parcial2;

    printf("Calculo das combinacoes de N, R a R:\n");
    printf("Indique N: ");
    scanf("%d", &N);
    printf("Indique R: ");
    scanf("%d", &R);

    numerador = N-R+1;
    while(i <= R)
    {

        denominador = i;

        parcial1 = resultado * numerador;  // multiplica
        parcial2 = parcial1 / denominador; // divide

        printf("  %d*%d=%d, %d/%d=%d\n", resultado, numerador, parcial1, parcial1, denominador, parcial2);

        resultado = parcial2;  // guarda o valor para o próximo passo
        i ++;             // passa para o próximo número
        numerador++;
    }

    printf("Resultado: %d", resultado);

    return 0;
}
