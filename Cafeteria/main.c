#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quantity, product;
    double total;

    printf("Codigo do produto comprado: ");
    scanf("%d", &product);

    printf("Quantidade comprada: ");
    scanf("%d", &quantity);

    switch (product)
    {
        case 1:
            total = 5.00 * quantity;
            break;
        case 2:
            total = 3.50 * quantity;
            break;
        case 3:
            total = 4.80 * quantity;
            break;
        case 4:
            total = 8.90 * quantity;
            break;
        case 5:
            total = 7.32 * quantity;
            break;

    }

    printf("Valor a pagar: R$ %.2lf\n", total);
    return 0;
}
