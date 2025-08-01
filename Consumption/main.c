#include <stdio.h>
#include <stdlib.h>

int main()
{
    double distance, fuel, averageConsumption;

    printf("Distancia percorrida: ");
    scanf("%lf", &distance);

    printf("Combustivel gasto: ");
    scanf("%lf", &fuel);

    averageConsumption = distance / fuel;

    printf("Consumo medio = %.3lf", averageConsumption);

    return 0;
}
