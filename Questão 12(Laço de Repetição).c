#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{

    int idade = 0, resposta = 0, qntPessoa = 0, qntMulher = 0;
    int maiorIdade = -100, menorIdade = +100, somaSalario = 0;
    float media = 0, salario = 0;
    char sexo;

    printf(" 1 | para adicionar uma pessoa \n");
    printf("2  | para sair e exibir o(s) resultado(s) \n");
    scanf("%d", &resposta);

    system("cls || clear");

    while (resposta == 1)
    {
        fflush(stdin);
        qntPessoa++;

        printf("Digite F para Feminino \n");
        printf("Digite M para Masculino \n");
        printf("Sexo:");
        scanf("%c", &sexo);

        printf("Idade:");
        scanf("%d", &idade);

        printf("Salario:");
        scanf("%f", &salario);
        system("cls || clear");

        if (idade > maiorIdade)
        {
            maiorIdade = idade;
        }

        if (idade < menorIdade)
        {
            menorIdade = idade;
        }

        fflush(stdin);

        if (sexo == 'F')
        {
            if (salario > 5.000)
            {
                qntMulher++;
            }
        }

        somaSalario += salario;
        media = somaSalario / qntPessoa;

        printf(" 1 | para adicionar uma pessoa \n");
        printf("2  | para sair e exibir o(s) resultado(s) \n");
        scanf("%d", &resposta);
        system("cls || clear");

        fflush(stdin);
    }

    printf("Media dos Salarios:%.3f \n", media);
    printf("Maior Idade:%d \n", maiorIdade);
    printf("Menor Idade:%d \n", menorIdade);
    printf("Quantidades de Mulheres com salario acima de 5.000:%d \n", qntMulher);
    printf("Sexo:%c \n", sexo);

    return 0;
}
