#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i;
    float nota;

    /*Escreva um algoritmo que solicite duas notas para um aluno e calcule a média.
Caso seja menor que 0 ou maior que 10, mostre a pergunta novamente.

Mostre a média do aluno.*/

    for (i = 0; i < 2; i++){

        printf("Nota do Aluno:");
        scanf("%f", &nota);

system("cls || clear");

        while (nota < 0 || nota > 10)
        {

            printf("Valor de Nota Invalida: \n");
            printf("Nota do Aluno: \n");
            scanf("%f", &nota);

            system("cls || clear");
        }
    }
    printf("Nota:%.2f", nota);

    return 0;
}