#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    float vlrProduto, desconto, vlrTotal, parcela;
    int tipPagamento, resposta = 1;
    /*char NumeroCartaoSalvo[250] = "10101010";
    char SenhaCartaoSalvo[250] = "1010";
    char NumeroCartao[250];
    char SenhaCartao[250];

    printf("Numero:%s\n",NumeroCartaoSalvo);
    printf("Senha:%s\n",SenhaCartaoSalvo);
    printf("\n");

    printf("Numero do Cartao:");
    scanf("%s",NumeroCartao);

    printf("Senha do Cartao:");
    scanf("%s",SenhaCartao);

    system("cls || clear");

    if(strcmp(NumeroCartao,NumeroCartaoSalvo)=0 && strcmp(SenhaCartao,SenhaCartaoSalvo)=0){*/

    while (resposta == 1)
    {
        printf("valor do Produto:");
        scanf("%f", &vlrProduto);
        system("cls || clear ");
        printf(" Digite 1 para Vista \n");
        printf(" Digite 2 para Prazo \n");
        printf("Qual a Forma de Pagamento:");
        scanf("%d", &tipPagamento);

        system("cls || clear");

       switch(tipPagamento){
        case 1:

            desconto = vlrProduto * 0.1;
            vlrTotal = vlrProduto - desconto;

            printf("Valor Total:%.2f \n", vlrTotal);
            break;
        case 2:
            do{
                printf("Quantas Parcelas:");
                scanf("%f", &parcela);

                if (parcela > 6){
                    system("cls || clear"); 
                    printf("Limite de Parcelas e 6 Digite Novamente \n");
                }
            } while (parcela > 6);

            system("cls || clear");
            vlrTotal = vlrProduto / parcela;
            printf("Valor Total:%.2f \n", vlrTotal);

            break;
        
         default:
            printf("Tipo de Pagamento esta Invalido");
            break;
        }
        printf("\n");
        printf("Digite 1 Para Sim \n");
        printf("Digite 0 para Nao\n");
        printf(" \n Deseja Mais Alguma Coisa:");
        scanf("%d", &resposta);
        system("cls || clear");
    }

    printf("Obrigado E Volte Sempre");

    return 0;

}