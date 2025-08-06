#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quantity, number, inside, outside;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &quantity);

    inside = 0;
    outside = 0;

    for(int i = 1; i <= quantity; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &number);

        if(number >= 10 && number <= 20)
        {
            inside += 1;
        }
        else
        {
            outside += 1;
        }

    }

    printf("%d DENTRO\n", inside);
    printf("%d FORA\n", outside);

    return 0;
}
