#include <stdio.h>
#include <stdlib.h>

int main()
{ // declarando a variavel
    int numero;

    // solicitando  dados para o usuario
    printf("Digite sua nota:");
    scanf("%d", &numero);

    system("cls || clear");

    if (numero == 10)

    // = atribuição
    // == comparação
    // != diferente (não igual)
    // ! negação

    {
        printf("Numero e igual 10");
    }
    else if(numero>10){
        printf("Nota Maior que 10");
    }else{
        printf("Nota e Menor que 10");
    }

    return 0;
}