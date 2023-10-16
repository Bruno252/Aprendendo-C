#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    float nota;
    
    /*Atividade =Escreva um algoritmo que leia a nota de um aluno.
Caso seja menor que 0 ou maior que 10, mostre a pergunta novamente.

Mostre a nota informada pelo usuário.*/

    printf("Nota do Aluno:");
    scanf("%f", &nota);

    system("cls || clear");

    while (nota<0 || nota>10)
    {

        printf("Valor de Nota Invalida: \n");
        printf("Nota do Aluno: \n");
        scanf("%f", &nota);

        system("cls || clear");
    }

    printf("Nota:%.2f", nota);

    return 0;
}
