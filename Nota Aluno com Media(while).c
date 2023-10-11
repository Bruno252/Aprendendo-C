#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    float nota1 = 0, nota2 = 0, media;

    while (nota1 <= 0 || nota1 >= 10)
    {
        printf("Nota do Aluno: \n");
        scanf("%f", &nota1);

        system("cls || clear");
        printf("Valor da Primeira Nota Invalida: \n");
    }

    system("cls || clear");

    while (nota2 <= 0 || nota2 >= 10)
    {
        printf("Segunda Nota Do Aluno:\n");
        scanf("%f", &nota2);

        system("cls || clear");
        printf("Valor da Segunda Nota Invalida: \n");
    }

    system("cls || clear");

    media = (nota1 + nota2) / 2;

    printf("Nota:%.2f", media);

    return 0;
}
