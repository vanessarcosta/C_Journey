#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Calculo dos arranjos de N, R a R: multiplicar os números de N-R+1 até N*/
    int N, R, i, arranjos;

    printf("Calculo dos arranjos de N, R a R:\n");
    printf("Indique N: ");
    scanf("%d", &N);
    printf("Indique R: ");
    scanf("%d", &R);

    i = N-R+1;
    arranjos = 1;

    if(N < R)
    {
        printf("Erro: N tem de ser maior que R e este maior que 0");
    }
    else
    {
        while(i <= N)
        {
            arranjos *= i;
            printf("i=%d; arranjos=%d\n", i, arranjos);
            i++;
        }
        printf("Resultado: %d", arranjos);
    }

    return 0;
}
