#include <stdio.h>
#include <stdlib.h>

int main()
{
    double grade1, grade2, average;

    printf("Digite a primeira nota: ");
    scanf("%lf", &grade1);

    while(grade1 < 0 || grade1 >= 11)
    {
        printf("Valor invalido! Tente novamente: ");
        scanf("%lf", &grade1);
    }
    printf("Digite a segunda nota: ");
    scanf("%lf", &grade2);

    while(grade2 < 0 || grade2 > 10)
    {
        printf("Valor invalido! Tente novamente: ");
        scanf("%lf", &grade2);
    }

    average = (grade1 + grade2) / 2;
    printf("MEDIA  = %.2lf\n", average);

    return 0;
}
