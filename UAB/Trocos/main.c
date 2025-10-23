#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Faça um programa que receba um montante em euros (com cêntimos),
    e que determina o menor número de moedas de cada tipo necessário para perfazer esse montante.
    Pode utilizar moedas de euros de todos os valores disponíveis (2€, 1€, ...)*/

    int _2Euros = 0,_1Euro = 0, _50Centimos = 0, _20Centimos = 0, _10Centimos = 0, _5Centimos = 0, _2Centimos = 0, _1Centimo = 0;
    int centimos;
    double montante;

    printf("Introduza um montante em euros, podendo ter centimos: ");
    scanf("%lf", &montante);

    centimos = (int)(montante *100.0 + 0.5);

    while(centimos > 0)
    {
        if(centimos >= 200)
         {
             _2Euros = centimos / 200;
             centimos = centimos % 200;
             if (_2Euros > 0)
                printf("2 euros: %d\n", _2Euros);
         }
         else if( centimos >= 100)
         {
             _1Euro = centimos / 100;
             centimos = centimos % 100;

             if (_1Euro > 0)
                printf("1 euro: %d\n", _1Euro);
         }
         else if( centimos >= 50)
         {
             _50Centimos = centimos / 50;
             centimos = centimos % 50;
             if (_50Centimos > 0)
                printf("50 centimos: %d\n", _50Centimos);
         }
         else if(centimos >= 20)
         {
             _20Centimos = centimos /20;
             centimos = centimos % 20;
             if (_20Centimos > 0)
                printf("20 centimos: %d\n", _20Centimos);
         }
         else if(centimos >= 10)
         {
             _10Centimos = centimos /10;
             centimos = centimos % 10;
             if (_10Centimos > 0)
                printf("10 centimos: %d\n", _10Centimos);
         }
         else if(centimos >= 5)
         {
             _5Centimos = centimos / 5;
             centimos = centimos % 5;
             if (_5Centimos > 0)
                printf("5 centimos: %d\n", _5Centimos);
         }
         else if(centimos >= 2)
         {
             _2Centimos = centimos / 2;
             centimos = centimos % 2;
             if (_2Centimos > 0)
              printf("2 centimos: %d\n", _2Centimos);
         }
         else
         {
             _1Centimo = centimos / 1;
             centimos = centimos % 1;
             if (_1Centimo > 0)
              printf("1 centimo: %d\n", _1Centimo);
         }
    }

    return 0;
}
