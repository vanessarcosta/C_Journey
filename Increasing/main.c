#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number1, number2;

    printf("Digite dois numeros: \n");
    scanf("%d", &number1);
    scanf("%d", &number2);

    while (number1 != number2)
    {
        if(number1 > number2)
        {
            printf("Decrescente!\n");
        }
        else
        {
            printf("Crescente!\n");
        }
        printf("Digite dois numeros: \n");
        scanf("%d", &number1);
        scanf("%d", &number2);
    }

    return 0;
}
