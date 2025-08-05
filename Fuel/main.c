#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fuel, alcohol, gasoline, diesel;

    alcohol = 0;
    gasoline = 0;
    diesel = 0;

    printf("Informe um codigo (1, 2, 3) ou 4 para parar:");
    scanf("%d", &fuel);

    while (fuel != 4)
    {
        switch(fuel)
        {
            case 1:
                alcohol += 1;
                break;
            case 2:
                gasoline += 1;
                break;
            case 3:
                diesel += 1;
                break;
        }

         printf("Informe um codigo (1, 2, 3) ou 4 para parar:");
         scanf("%d", &fuel);
    }

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alcohol);
    printf("Gasolina %d\n", gasoline);
    printf("Diesel: %d\n", diesel);

    return 0;
}
