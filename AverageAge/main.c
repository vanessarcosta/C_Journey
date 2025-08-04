#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age,ages, counter;
    double averange;

    printf("Digite as idades: \n");
    scanf("%d", &age);

    ages = 0;
    counter = 0;

    while(age >= 0)
    {
        ages += age;
        counter += 1;
        scanf("%d", &age);
    }

    if(counter == 0)
    {
        printf("IMPOSSIVEL CALCULAR\n");
    }
    else
    {
        averange = (double) ages /counter;
        printf("MEDIA = %.2lf\n", averange);
    }

    return 0;
}
