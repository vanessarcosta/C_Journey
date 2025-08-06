#include <stdio.h>
#include <stdlib.h>

int main()
{
    int oddSum, number1, number2, aux;

    printf("Digite dois numeros:\n");
    scanf("%d %d", &number1, &number2);

    //scanf("%d", &number1);
    //scanf("%d", &number2);

    if(number1 > number2)
    {
        aux = number1;
        number1 = number2;
        number2 = aux;
    }

    oddSum = 0;

    for(int i = number1 + 1; i < number2; i++)
    {
        if(i % 2 != 0)
        {
            oddSum = oddSum + i;
        }

    }

    printf("SOMA DOS IMPARES = %d\n", oddSum);

    return 0;
}
