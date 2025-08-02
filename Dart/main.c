#include <stdio.h>
#include <stdlib.h>

int main()
{
    double distance1, distance2, distance3, bigger;

    printf("Digite as tres distancias:\n ");
    scanf("%lf", &distance1);
    scanf("%lf", &distance2);
    scanf("%lf", &distance3);

    if(distance1 > distance2 && distance1 > distance3)
    {
       bigger = distance1;
    }
    else if(distance2 > distance3)
    {
        bigger = distance2;
    }
    else
    {
        bigger = distance3;
    }

     printf("MAIOR DISTANCIA = %.2lf\n", bigger);
    return 0;
}
