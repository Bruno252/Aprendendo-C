#include <stdio.h>
#include <stdlib.h>

int main()
{

    int soma = 0, numero = 0;
    int par = 0, impar = 0, i = 0;
    float media = 0;

    do{

        printf("Numero:");
        scanf("%d", &numero);

        if (numero > 0){

            if (numero % 2 == 0){
                par++;
                soma += numero;
                i++;

            }else{
                impar++;
                soma += numero;
                i++;
            }
        }else{
            break;
        }

    }while (numero > 0);

    system("cls || clear");

    media = soma / i;

    printf("Media:%.2f \n", media);
    printf("Soma:%d \n", soma);
    printf("Pares:%d \n", par);
    printf("Impares:%d \n", impar);
    

    return 0;
}