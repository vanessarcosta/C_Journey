#include <stdio.h>
#include <stdlib.h>

int main()
{
    double startTime, endTime, duration;

    printf("Hora inicial: ");
    scanf("%lf", &startTime);
    printf("Hora final: ");
    scanf("%lf", &endTime);

    if(endTime > startTime)
    {
        duration = endTime - startTime;
        printf("O JOGO DUROU %.0lf HORA(S)", duration);
    }
    else
    {
        duration = 24 - startTime + endTime;
        printf("O JOGO DUROU %.0lf HORA(S)", duration);
    }

    return 0;
}
