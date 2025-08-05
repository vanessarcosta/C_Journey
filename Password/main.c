#include <stdio.h>
#include <stdlib.h>

int main()
{
    int password;
    printf("Digite a senha: ");
    scanf("%d", &password);

    while(password != 2002)
    {
        printf("Senha Invalida! Tente novamente: ");
        scanf("%d", &password);
    }
    printf("Acesso permitido!\n");
    return 0;
}
