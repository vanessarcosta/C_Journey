#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;

    printf("Digite o valor de X: ");
    scanf("%d", &number);

    for(int i = 1; i <= number; i++)
    {
        if(i % 2 != 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
