#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int diaSemana;

    printf("Qual e o dia da semana:");
    scanf("%d", &diaSemana);

    system("cls || clear");

    switch (diaSemana)
    {
    case 1:
        printf("Domingo \n");
        printf("Final de Semana");
        break;

    case 2:
        printf("Segunda-Feira \n");
        printf("Dia Util");
        break;

    case 3:
        printf("Terceira-Feira \n");
        printf("Dia Util");
        break;

    case 4:
        printf("Quarta-Feira \n");
        printf("Dia Util");
        break;

    case 5:
        printf("Quinta-Feira \n");
        printf("Dia Util");
        break;

    case 6:
        printf("Sexta-Feira \n");
        printf("Dia Util");
        break;

    case 7:
        printf("Sabado \n");
        printf("Final de Semana");
        break;

    default:
        printf("Dia Invalido");

        break;
    }
    return 0;
}