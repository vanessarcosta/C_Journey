#include <stdio.h>
#include <stdlib.h>

int main()
{
    double numerator, denominator, division;
    int quantity;

    printf("Quantos casos voce vai digitar? ");
    scanf("%d", &quantity);

    for(int i = 1; i <= quantity; i++)
    {
        printf("Entre com o numerador: ");
        scanf("%lf", &numerator);

        printf("Entre com o denominador: ");
        scanf("%lf", &denominator);

        if(denominator != 0)
        {
            division = numerator / denominator;
            printf("DIVISAO = %.2lf\n", division);
        }
        else
        {
            printf("DIVISAO IMPOSSIVEL\n");
        }
    }
    return 0;
}
