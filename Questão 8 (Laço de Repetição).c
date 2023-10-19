#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    float nota=0,media=0;
    char resposta[250];

    do {

        printf("Nota:");
        scanf("%f",&nota);

        system("cls || clear");

        if(nota<0 || nota>10) {
            printf("Nota Invalida\n");

        }
    } while(nota <0 || nota >10);

    media=nota/1;

    if(nota>=7) {
        strcpy(resposta,"Aluno esta Aprovado");

    } else if(nota>=5 && nota<=6.9) {
        strcpy(resposta,"Aluno em Recupeção");

    } else {
        strcpy(resposta,"Aluno Reprovado");

    }
    system("cls || clear");
    printf("Media:%.2f \n",media);
    printf(resposta);

    return 0;
}