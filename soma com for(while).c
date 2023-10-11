#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int i,numero,soma=0;

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
