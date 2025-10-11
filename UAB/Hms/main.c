#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* programa que lê as horas, minutos e segundos, e calcule o número de segundos que passaram desde o início do dia*/

    int horas, minutos, segundos;
    printf("Calculo do numero de segundos desde o inicio do dia.\nHora: ");
    scanf("%d", & horas);
    printf("Minuto: ");
    scanf("%d", & minutos);
    printf("Segundos: ");
    scanf("%d", & segundos);

    segundos += horas * 3600;
    segundos += minutos * 60;

    printf("Numero de segundos desde o inicio do dia: %d", segundos);
    return 0;
}
