#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {


    int nota=0,contador=0,somaNota=0,resposta=0;
    float media=0;

    do {
        contador++;

        printf("%d nota:",contador);
        scanf("%d",&nota);
        somaNota+=nota;

        media=somaNota/contador;

        system("cls||clear");

        printf("Digite 1 para adicionar mais uma nota\n");
        printf("Digite 0 para terminar o programar e mostar as medias\n");

        printf("\nDeseja por Mais um nota?\n");
        scanf("%d",&resposta);

        system("cls||clear");

        while(resposta!=1 && resposta!=0) {

            printf("Resposta Invalida\n");
            printf("\nDigite 1 para adicionar mais uma nota\n");
            printf("Digite 0 para terminar o programar e mostar as medias\n");
            scanf("%d",&resposta);
            system("cls||clear");
        }

    } while(resposta==1);

    system("cls||clear");
    printf("Media:%.2f",media);


    return 0;
}