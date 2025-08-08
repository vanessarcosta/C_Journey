#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, position, older, i = 0;

    printf("Quantas pessoas voce vai digitar? ");
    scanf("%d", &N);

    char names[N][50];
    int age[N];

    for(i = 0; i < N; i++)
    {
        printf("Dados da %da pessoa:\n", i + 1);
        printf("Nome: ");
        fseek(stdin, 0, SEEK_END);
        gets(names[i]);
        printf("Idade: ");
        scanf("%d", &age[i]);
    }

    older = 0;
    position = 0;

    for(i = 0; i < N; i++)
    {
       if(older < age[i])
       {
           older = age[i];
           position = i;
       }
    }

    for(i = 0; i < N; i++)
    {
        if(position == i)
        {
            printf("PESSOA MAIS VELHA: %s\n", names[i]);
        }
    }

    return 0;
}
