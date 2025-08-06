#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, factorial;

    printf("Digite o valor de N: ");
    scanf("%d", &N);

    factorial = 1;

    for(int i = 1; i <= N; i++)
    {
        factorial = factorial * i;
    }

    printf("FATORIAL = %d\n", factorial);

    return 0;
}
