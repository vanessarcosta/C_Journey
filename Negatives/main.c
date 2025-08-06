#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, i;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &N);

    int vect[N];

    for(i = 0; i < N; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &vect[i]);
    }

    printf("NUMEROS NEGATIVOS: \n");
    for(i = 0; i < N; i++)
    {
        if(vect[i] < 0)
        {
            printf("%d\n", vect[i]);
        }
    }
    return 0;
}
