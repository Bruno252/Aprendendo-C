#include <stdio.h>
#include <stdlib.h>

int main()
{

    float primeiraNota, segundaNota, terceiraNota, media;
    int idade;
    char nome[250];

    printf("Nome do Aluno:");
    scanf("%s", &nome);

    fflush(stdin);

    printf("Idade do Aluno:");
    scanf("%d", &idade);

    fflush(stdin);

    printf("Primeira Nota:");
    scanf("%f",&primeiraNota);

    printf("Segunda Nota:");
    scanf("%f",&segundaNota);

    printf("Terceira Nota:");
    scanf("%f",&terceiraNota);

    system("cls || clear");

    media = (primeiraNota+segundaNota+terceiraNota) / 3;

    printf("Nome do Aluno:%s \n", nome);
    printf("Idade do Aluno:%d anos \n", idade);
    printf("\n");
    printf("Primeira Nota:%2.f \n", primeiraNota);
    printf("Segunda Nota:%2.f \n", segundaNota);
    printf("Terceira Nota:%2.f \n", terceiraNota);
    printf("\n");
    printf("Media:%2.f \n", media);
    printf("\n");

    if (media < 7){
        printf("Aluno Reprovado");
    }else{
        printf("Aluno Aprovado");
    }
    return 0;
}