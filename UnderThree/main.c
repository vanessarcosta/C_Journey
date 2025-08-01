#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number1, number2, number3, smaller;

    printf("Primeiro valor: ");
    scanf("%d", &number1);

    printf("Segundo valor: ");
    scanf("%d", &number2);

    printf("Terceiro valor: ");
    scanf("%d", &number3);

    if(number1 < number2 && number1 < number3)
    {
       smaller = number1;
    }
    else if(number2 < number3)
    {
        smaller = number2;
    }
    else
    {
        smaller = number3;
    }

     printf("MENOR = %d\n", smaller);

    return 0;
}
