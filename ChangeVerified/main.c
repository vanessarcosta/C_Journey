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

    if(change >= 0)
    {
        printf("TROCO = %.2lf\n",change);
    }
    else
    {
        printf("DINHEIRO INSUFICIENTE, FALTAM %.2lf REAIS\n", -1 * change);
    }

    return 0;
}
