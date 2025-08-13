#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, profitA = 0, profitB = 0, profitC = 0;
    double profit = 0.0, totalSale = 0.0, totalPurchase = 0.0, totalProfit = 0.0;

    printf("Serao digitados dados de quantos produtos? ");
    scanf("%d", &N);

    char products[N][50];
    double sellingPrice[N];
    double buyingPrice[N];

    for(int i = 0; i < N; i++)
    {
        printf("Produto %d:\n", i+1);
        printf("Nome: ");
        fseek(stdin, 0,SEEK_END);
        gets(products[i]);
        printf("Preco de compra: ");
        scanf("%lf", &buyingPrice[i]);
        printf("Preco de venda: ");
        scanf("%lf", &sellingPrice[i]);
    }

    for(int i = 0; i < N; i++)
    {
        profit = (sellingPrice[i] - buyingPrice[i]) * 100 / buyingPrice[i];

        if(profit < 10.0)
        {
            profitA++;
        }
        else if( profit <= 20.0)
        {
            profitB++;
        }
        else
        {
            profitC++;
        }
    }

    for(int i = 0; i < N; i++)
    {
        totalPurchase += buyingPrice[i];
        totalSale += sellingPrice[i];
    }

    totalProfit = totalSale - totalPurchase;

    printf("\nRELATORIO:\n");
    printf("Lucro abaixo de 10%%: %d\n", profitA);
    printf("Lucro entre 10%% e 20%%: %d\n", profitB);
    printf("Lucro acima de 20%%: %d\n", profitC);
    printf("Valor total de compra: %.2lf\n", totalPurchase);
    printf("Valor total de venda: %.2lf\n", totalSale);
    printf("Lucro total: %.2lf\n", totalProfit);

    return 0;
}
