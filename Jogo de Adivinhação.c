#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

int main()
{

    int numero;
    int qntTentativa = 0;
    int numeroAdivi;

    srand((unsigned)time(NULL));
    numeroAdivi = rand() % 10;

    do
    {

        qntTentativa++;

        if (qntTentativa < 2)
        { // esse if apenas server para monstra essas duas mensagem abaixo apenas no inicio.
            printf("Jogo de Adivinhar o Numero feito em C\n");
            printf("O computador Ira Gera um Numero e voce tera que Adivinhar\n");
            printf("\n");
            system("cls || clear");
            
        }
        printf("Numero:");
        scanf("%d", &numero);
        printf("\n");

        if (numero < numeroAdivi)
        {
            printf("=========================================================\n");
            printf("Numero que voce digitou e menor que o Numero Adivinhado\n");
            printf("=========================================================\n");
        }

        if (numero > numeroAdivi)
        {
            printf("========================================================\n");
            printf("Numero que voce digtou e maior que o  Numero adivinhado\n");
            printf("========================================================\n");
        }

    } while (numero != numeroAdivi);

    system("cls || clear");
    printf("Parabens!!!!!\n");
    printf("Voce venceu o jogo\n");
    printf("Quantidade de Tentativas:%d", qntTentativa);

    return 0;
}