#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int codigo, idade, TempoTrabalho, idadeAtual;

    printf("Codigo:");
    scanf("%d", &codigo);

    printf("Ano que nasceu:");
    scanf("%d", &idade);

    printf("Tempo de Trabalho:");
    scanf("%d", &TempoTrabalho);

    system("cls || clear");

    idadeAtual = (2023 - idade);

    printf("Codigo:%d \n", codigo);
    printf("idade:%d \n", idadeAtual);
    printf("Tempo De Trabalho:%d \n", TempoTrabalho);

    if (TempoTrabalho >= 30 || idadeAtual >= 65)
    {
        printf("Requerer Aposentadoria");
    }
    else
    {
        printf("Nao requere aposentadoria");
    }

    return 0;
}