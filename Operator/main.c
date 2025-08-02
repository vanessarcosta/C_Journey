#include <stdio.h>
#include <stdlib.h>

int main()
{
    double plan = 50.0;
    double valuePerMinute = 2.0;
    int minutes;
    double total;

    printf("Digite a quantidade de minutos: ");
    scanf("%d", &minutes);

    if(minutes > 100)
    {
        plan = (minutes -100) * valuePerMinute + plan;
    }

    printf("Valor a pagar: R$%.2lf\n", plan);

    return 0;
}
