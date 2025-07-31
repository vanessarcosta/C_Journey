#include <stdio.h>

int main()
{
    double width, length, meterValue, area, price;

    printf("Digite a largura do terreno: ");
    scanf("%lf", &width);

    printf("Digite o comprimento do terreno: ");
    scanf("%lf", &length);

    printf("Digite o valor do metro quadrado: ");
    scanf("%lf", &meterValue);

    area = width * length;
    price = meterValue * area;

    printf("Area do terreno = %.2lf\n",area);
    printf("Preco do terreno = %.2lf\n", price);

    return 0;
}
