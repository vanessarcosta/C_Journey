#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, under16;
    double average, total;

    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &N);

    char vectorName[N][50];
    int vectorAge[N];
    double vectorHeight[N];

    average = 0;
    total = 0;

    for(int i = 0; i < N; i++)
    {
        printf("Dados da %da pessoa\n", i + 1);
        printf("Nome: ");
        fseek(stdin, 0, SEEK_END);
        gets(vectorName[i]);
        printf("Idade: ");
        scanf("%d", &vectorAge[i]);
        printf("Altura: ")        ;
        scanf("%lf", &vectorHeight[i]);
    }

    printf("\n");

    for(int i = 0; i < N; i++)
    {
        total += vectorHeight[i];
    }

    average = total /N;
    printf("\nAltura media: %.2lf", average);

    average = 0;
    total = 0;

    for(int i = 0; i < N; i++)
    {
        if(vectorAge[i] < 16)
        {
            total++;
        }
    }

    average = 100.0 * total / N;
    printf("Pessoas com menos de 16 anos: %.2lf&&\n", average);

    for(int i = 0; i < N; i++)
    {
        if(vectorAge[i] < 16)
        {
           printf("%s\n", vectorName[i]);
        }
    }

    return 0;
}
