#include <stdio.h>
#include <stdlib.h>

int main()
{
    double salary, newSalary, increase, percentage;

    printf("Digite o salario da pessoa: ");
    scanf("%lf", &salary);

    if(salary <= 1000.00)
    {
        percentage = 20.0;
    }
    else if(salary <= 3000.00)
    {
        percentage = 15.0;
    }
    else if(salary <= 8000.00)
    {
        percentage = 10.0;
    }
    else
    {
        percentage = 5.0;
    }

    increase = salary * percentage / 100.0;
    newSalary = salary + increase;

    printf("Novo salario = R$ %.2lf\n", newSalary);
    printf("Aumento =  R$ %.2lf\n", increase);
    printf("Porcetagem =  %.2lf %%\n", percentage);

    return 0;
}
