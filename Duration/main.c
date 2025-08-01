#include <stdio.h>
#include <stdlib.h>

int main()
{
    int duration, hours, remainder, minutes, seconds;

    printf("Digite a duracao em segundos: ");
    scanf("%d", &duration);

    hours = duration / 3600;
    remainder = duration % 3600;

    minutes = remainder / 60;
    seconds = remainder % 60;

    printf("%d:%d:%d", hours, minutes, seconds);

    return 0;
}
