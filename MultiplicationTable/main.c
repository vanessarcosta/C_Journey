#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, i, result;

    printf("Deseja a tabuada para qual valor?");
    scanf("%d", &number);

    for(i = 1; i <= 10; i++)
    {
        result = number * i;
        printf("%d x %d = %d\n", number, i, result);
    }

    return 0;
}
