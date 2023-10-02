#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char login[250];
    char senha[250];
    char loginSalvo[250] = "matheus";
    char senhaSalvo[250] = "1012";

    printf("Login:");
    gets(login);

    fflush(stdin);

    printf("Senha:");
    gets(senha);

system("cls || clear");

        //strcmp = string compare
        if (strcmp(login, loginSalvo) == 0 && strcmp(senha, senhaSalvo) == 0){

            printf("Bem Vindo!");
        }else{
            printf("login ou Senha Invalido");
        }
    return 0;
}
