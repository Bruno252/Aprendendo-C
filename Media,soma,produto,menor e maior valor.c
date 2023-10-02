#include <stdio.h>
#include <stdlib.h>

int main()
{

    float primeiroNumero, segundoNumero, soma, produto, media, maiorValor, menorValor;

    printf("Primeiro Numero:");
    scanf("%f", &primeiroNumero);

    printf("Segundo Numero:");
    scanf("%f", &segundoNumero);

    system("cls || clear");

    soma = (primeiroNumero + segundoNumero);
    produto = (primeiroNumero * segundoNumero);
    media = (primeiroNumero + segundoNumero) / 2;

    maiorValor = primeiroNumero > segundoNumero ? primeiroNumero : segundoNumero;
    menorValor = primeiroNumero < segundoNumero ? primeiroNumero : segundoNumero;

    printf("Primeiro Numero:%2.f \n", primeiroNumero);
    printf("Segundo Numero:%2.f \n", segundoNumero);
    printf("Soma:%2.f \n", soma);
    printf("Produto:%2.f \n", produto);
    printf("Media:%2.f \n", media);
    printf("Maior Valor:%2.f \n", maiorValor);
    printf("Menor Valor:%2.f \n", menorValor);

    return 0;
}