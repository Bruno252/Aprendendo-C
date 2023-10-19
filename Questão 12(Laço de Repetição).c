#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    int idade=0,resposta=0,qntPessoa=0,qntMulher=0;
    int maiorIdade=-100,menorIdade=+100,somaSalario=0;
    float media=0,salario=0;
    char sexo;

    do {
        fflush(stdin);
        qntPessoa++;

        printf("Sexo:");
        scanf("%c",&sexo);

        printf("Idade:");
        scanf("%d",&idade);

        printf("Salario:");
        scanf("%f",&salario);

        system("cls || clear");

        if(idade>maiorIdade) {
            maiorIdade=idade;

        }

        if(idade<menorIdade) {
            menorIdade=idade;

        }

        switch(sexo) {

        case 'F':

            if(salario>5.000) {
                qntMulher++;
            }
            break;
        }

        somaSalario+=salario;
        media=somaSalario/qntPessoa;

        printf("Digite 1 para adicionar mais uma pessoa\n");
        printf("Digite 2 para sair e exibir o resultados\n");
        scanf("%d",&resposta);
        system("cls || clear");

        fflush(stdin);
    } while(resposta==1);


    printf("Media dos Salarios:%.2f \n",media);
    printf("Maior Idade:%d \n",maiorIdade);
    printf("Menor Idade:%d \n",menorIdade);
    printf("Quantidades de Mulheres com salario acima de 5.000:%d \n",qntMulher);

    return 0;
}