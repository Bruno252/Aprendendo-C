#include <stdio.h>
#include <stdlib.h>

int main()
{

    float nota, nota2, nota3, media;
    int idade;
    char nome[250];

    printf("Nome do Aluno:");
    scanf("%s", &nome);

    fflush(stdin);

    printf("Idade do Aluno:");
    scanf("%d", &idade);

    fflush(stdin);

    printf("Primeira Nota:");
    scanf("%f", &nota);

    printf("Segunda Nota:");
    scanf("%f", &nota2);

    printf("Terceira Nota:");
    scanf("%f", &nota3);

    system("cls || clear");

    media = (nota + nota2 + nota) / 3;

    printf("Nome do Aluno:%s \n", nome);
    printf("Idade do Aluno:%d anos \n", idade);
    printf("\n");
    printf("Primeira Nota:%2.f \n", nota);
    printf("Segunda Nota:%2.f \n", nota2);
    printf("Terceira Nota:%2.f \n", nota3);
    printf("\n");
    printf("Media:%2.f \n", media);
    printf("\n");

    if (media < 7)
    {
        printf("Aluno Reprovado");
    }
    else
    {
        printf("Aluno Aprovado");
    }
    return 0;
}