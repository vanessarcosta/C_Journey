#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, sum;

    printf("Digite um numero inteiro: ");
    scanf("%d", &number);

    while (number != 0)
    {
        if(number % 2 != 0)
        {
            number = number + 1;
        }

        sum = 5 * number + 20;

        printf("SOMA = %d\n", sum);

        printf("Digite um numero inteiro: ");
        scanf("%d", &number);
    }

    return 0;
}
