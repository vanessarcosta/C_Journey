#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number1, number2;

    printf("Digite dois numeros inteiros: \n");
    scanf("%d", &number1);
    scanf("%d", &number2);

    if(number1 % number2 == 0 || number2 % number1 == 0)
    {
        printf("Sao multiplos.\n");
    }
    else
    {
        printf("Nao sao multiplos.\n");
    }

    return 0;
}
