#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &N);

    int vectorNumbers[N];

    for(int i = 0; i < N; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &vectorNumbers[i]);
    }

    printf("\nNUMEROS PARES:\n");

    for(int i = 0; i < N; i++)
    {
        if(vectorNumbers[i] % 2 == 0)
        {
            printf("%d  ", vectorNumbers[i]);
        }
    }
    return 0;
}
