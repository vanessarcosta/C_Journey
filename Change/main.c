#include <stdio.h>
#include <stdlib.h>

int main()
{
    double price, money, change;
    int quantity;

    printf("Preco unitario do produto: ");
    scanf("%lf", &price);

    printf("Quantidade comprada: ");
    scanf("%d", &quantity);

    printf("Dinheiro recebido: ");
    scanf("%lf", &money);

    change = money - price * quantity;

    printf("TROCO = %.2lf",change);

    return 0;
}
