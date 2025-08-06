#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, quantity;

    printf("Quantos numeros voce vai digitar?");
    scanf("%d", &quantity);

    for(int i = 1; i <= quantity; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &number);

        if (number == 0)
        {
            printf("NULO\n");
        }
        else if(number % 2 != 0)
        {
           if(number > 0)
           {
               printf("IMPAR POSITIVO\n");
           }
           else
           {
               printf("IMPAR NEGATIVO\n");
           }
        }
        else
        {
            if(number > 0)
           {
               printf("PAR POSITIVO\n");
           }
           else
           {
               printf("PAR NEGATIVO\n");
           }
        }

    }
    return 0;
}
