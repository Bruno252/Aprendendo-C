#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char login[250], senha[250];
    char loginSalvo[250] = "matheus", senhaSalvo[250] = "1012";
    int resposta = 0;

    do
    {
        if (resposta == 1)
        {
            printf("Login ou Senha Invalida\n");
        }

        fflush(stdin);
        printf("Login:");
        scanf("%s", &login);

        printf("Senha:");
        scanf("%s", &senha);

        system("cls || clear");

        fflush(stdin);

        if (strcmp(login, loginSalvo) == 0 && strcmp(senha, senhaSalvo) == 0)
        {
            resposta = 0;
        }
        else
        {
            resposta = 1;
        }
    } while (resposta == 1);

    system("cls || clear");
    printf("Bem Vindo");

    return 0;
}