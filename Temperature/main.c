#include <stdio.h>
#include <stdlib.h>

int main()
{
    double celsius, fahr;
    char temperature;

    printf("Voce vai digitar a temperatura em qual escala (C/F)?");
    scanf("%c",&temperature);

    if(temperature == 'C')
    {
        printf("Digite a temperatura em Celsius: ");
        scanf("%lf", &celsius);
        fahr = (celsius * 9) / 5 + 32;
        printf("Temperatura equivalente em Fahrenheit: %.2lf\n", fahr);
    }
    else
    {
        printf("Digite a temperatura em Fahrenheit:");
        scanf("%lf", &fahr);
        celsius = (fahr - 32) * 5/9;
        printf("Temperatura equivalente em Celsius: %.2lf\n", celsius);
    }

    return 0;
}
