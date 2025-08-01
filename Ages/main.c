#include <stdio.h>

int main()
{
    char name1[50], name2[50];
    int age1, age2;
    double average;

    printf("Dados da primeira pessoa:\n");
    printf("Nome: ");
    gets(name1);
    printf("Idade: ");
    scanf("%d", &age1);

    printf("Dados da segunda pessoa:\n");
    printf("Nome: ");
    fseek(stdin, 0,SEEK_END);
    gets(name2);
    printf("Idade: ");
    scanf("%d", &age2);

    average =(double)(age1 + age2) / 2;

    printf("A idade media de %s e %s eh de %.1lf anos", name1, name2, average);

    return 0;
}
