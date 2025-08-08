#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, position, older, men, women, i = 0;
    double smaller, taller, average, total;

    printf("Quantas pessoas voce vai digitar? ");
    scanf("%d", &N);

    char gender[N];
    double height[N];

    for(i = 0; i < N; i++)
    {
        printf("Altura da %da pessoa: ", i+1);
        scanf("%lf", &height[i]);
        printf("Genero da %da pessoa: ", i+1);
        //fseek(stdin, 0, SEEK_END);
        scanf(" %c", &gender[i]);
        //gets(names[i]);
    }

    smaller = height[0];
    taller = height[0];
    average = 0.0;
    men = 0;
    women = 0;
    total = 0.0;

    for(i = 0; i < N; i++)
    {
        if(gender[i] == 'F')
        {
           total += height[i];
           women++;
        }
        else
        {
            men++;
        }
    }

    for(i = 1; i < N; i++)
    {
        if(height[i] > taller)
        {
            taller = height[i];
        }
    }

    for(i = 1; i < N; i++)
    {
        if( height[i] < smaller)
        {
            smaller = height[i];
        }
    }

    average = total / women;

    printf("Menor altura = %.2lf\n", smaller);
    printf("Maior altura = %.2lf\n", taller);
    printf("Media das alturas das mulheres = %.2lf\n", average);
    printf("Numero de homens = %d\n", men);

    return 0;
}
