#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{   

    int numeroPedido;
    float precoPedido;
    char nomePedido[250];

    fflush(stdin);

    printf(" Digite 1 para Picanha Custando 25,00 \n");
    printf(" Digite 2 para Lasanha Custando 20,00 \n");
    printf(" Digite 3 para Picanha Custando 18,00 \n");
    printf(" Digite 4 para Picanha Custando 15,00 \n");
    printf(" Digite 5 para Picanha Custando 5,00 \n");
    printf("\n");

    printf("Numero do Pedido:");
    scanf("%d", &numeroPedido);

    fflush(stdin);

    switch (numeroPedido)
    {

        fflush(stdin);

    case 1:
        strcpy(nomePedido, "Picanha");
        precoPedido = 25.00;
        break;

    case 2:
        strcpy(nomePedido, "Lasanha");
        precoPedido = 20.00;
        break;

    case 3:
        strcpy(nomePedido, "Strongnoff");
        precoPedido = 18.00;
        break;

    case 4:
        strcpy(nomePedido, "Bife Acebolado");
        precoPedido = 15.00;
        break;

    case 5:
        strcpy(nomePedido, "Pao com Ovo");
        precoPedido = 5.00;
        break;

    default:
        printf("Numero de Pedido Invalido");
        break;
    }

    system("cls || clear");

    printf("Numero Do Pedido:%d \n", numeroPedido);
    printf("Nome do Pedido:%s \n", nomePedido);
    printf("Preco do Pedido:%.2f R$ \n", precoPedido);

    return 0;
}
