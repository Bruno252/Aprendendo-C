#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int i,numero,soma=0;

    /* Atividade = Escrever um programa de computador que solicite
do usuário 5 números inteiros e, ao final, apresente a
soma de todos os números lidos.*/

    for (i = 1; i <= 5; i++)
    {
        printf("Numero:");
        scanf("%d",&numero);
        soma += numero;
    }

system("cls || clear");

    printf("Soma dos Numeros:%d",soma);

    return 0;
}
