#include <stdio.h>
#include <stdlib.h>

int main()
{
    double grade1, grade2, total;

    printf("Digite a primeira nota: ");
    scanf("%lf", &grade1);

    printf("Digite a segunda nota: ");
    scanf("%lf", &grade2);

    total = grade1 + grade2;

    printf("NOTA FINAL = %.1lf", total);

    if(total < 60.0)
    {
        printf("\nREPROVADO");
    }

    return 0;
}
