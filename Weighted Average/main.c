#include <stdio.h>
#include <stdlib.h>

int main()
{
    double number1, number2, number3, average;
    int quantity;

    printf("Quantos casos voce vai digitar? ");
    scanf("%d", &quantity);

    for(int i = 1; i <= quantity; i++)
    {
        printf("Digite tres numeros: \n");
        scanf("%lf %lf %lf", &number1, &number2, &number3);

        average = ((number1 * 2.0) + (number2 * 3.0) + (number3 * 5.0)) / 10.0;
        printf("MEDIA = %.1lf\n", average);
    }
    return 0;
}
