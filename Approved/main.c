#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, average, i = 0;

    printf("Quantas alunos serao digitados? ");
    scanf("%d", &N);

    char names[N][50];
    double grades1[N];
    double grades2[N];

    for(i = 0; i < N; i++)
    {
        printf("Digite nome, primeira e segunda nota do %do aluno:\n", i + 1);
        fseek(stdin, 0, SEEK_END);
        gets(names[i]);
        scanf("%lf", &grades1[i]);
        scanf("%lf", &grades2[i]);
    }

    average = 0;

    printf("Alunos aprovados:\n");

    for(i = 0; i < N; i++)
    {
       average = (grades1[i] + grades2[i]) / 2;
       if(average >= 6.0)
       {
            printf("%s\n", names[i]);
       }
    }

    return 0;
}
