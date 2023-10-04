#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    float primeiroNumero, segundoNumero, resultado;
    char OpNumerica;

    printf("Operacao Numero:");
    scanf('%c', &OpNumerica);

fflush(stdin);

    printf("Primeiro Numero");
    scanf("%f", &primeiroNumero);

    printf("Segundo Numero:");
    scanf("%f", &segundoNumero);

    switch (OpNumerica){
    case '+':
        resultado = primeiroNumero + segundoNumero;
        break;

    case '-':
        resultado = primeiroNumero - segundoNumero;
        break;

    case '*':
        resultado = primeiroNumero * segundoNumero;
        break;

    case '/':
        resultado = primeiroNumero / segundoNumero;
        break;

      default:              // outrocaso
            printf("Operacao Invalida");
        break;
    }

    system("cls || clear");

    printf("Primeiro Numero:%1.f \n", primeiroNumero);
    printf("Segundo Numero :%.1f \n", segundoNumero);
    printf('%c',OpNumerica);
    printf("Resultado:%.1f",resultado);

    return 0;
}