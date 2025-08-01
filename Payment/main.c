#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[50];
    double hourlyRate, payment;
    int  hoursWorked;

    printf("Nome: ");
    gets(name);

    printf("Valor por hora: ");
    scanf("%lf", &hourlyRate);

    printf("Horas trabalhadas: ");
    scanf("%d", &hoursWorked);

    payment  = hourlyRate * hoursWorked;

    printf("O pagamento para %s deve ser %.2lf", name, payment);

    return 0;
}
