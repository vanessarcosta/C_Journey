#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  N, quantity, S, R, C, total;
    char testSubject;

    printf("Quantos casos de teste serao digitados? ");
    scanf("%d", &N);

    S = 0;
    R = 0;
    C = 0;

    for(int i = 1; i <= N; i++)
    {
        printf("Quantidade de cobaias: ");
        scanf("%d", &quantity);
        printf("Tipo de cobaia: ");
        scanf(" %c", &testSubject);

        switch (testSubject)
        {
            case 'S':
                S += quantity;
                break;
            case 'R':
                R += quantity;
                break;
            case 'C':
                C += quantity;
                break;
        }
    }

    total = S + R + C;
    printf("RELATORIO FINAL: \n");
    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos %d\n", C);
    printf("Total de ratos %d\n", R);
    printf("Total de sapos %d\n", S);
    printf("Percentual de coelhos: %.2lf %%\n", (double)C * 100 / total);
    printf("Percentual de ratos: %.2lf %%\n", (double)R * 100 / total);
    printf("Percentual de sapos: %.2lf %%\n", (double)S * 100 / total);

    return 0;
}
