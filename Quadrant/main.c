#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x, y;

    printf("Digite os valores das coordenadas X e Y:\n");
    scanf("%lf", &x);
    scanf("%lf", &y);

    while (x != 0 && y != 0)
    {
        if(x > 0 && y > 0)
        {
            printf("QUADRANTE Q1\n");
        }
        else if( x < 0 && y > 0)
        {
            printf("QUADRANTE Q2\n");
        }
        else if(x < 0 && y < 0)
        {
            printf("QUADRANTE Q3\n");
        }
        else if(x > 0 && y < 0)
        {
            printf("QUADRANTE Q4\n");
        }

        printf("Digite os valores das coordenadas X e Y:\n");
        scanf("%lf", &x);
        scanf("%lf", &y);
    }

    return 0;
}
