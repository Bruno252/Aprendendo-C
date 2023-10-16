#include <stdio.h>
#include <stdlib.H>

int main()
{

    int numero=0, i=0, par=0, impar=0;


/*Escreva um algoritmo que leia 5 valores inteiros e ao final
mostre:

a) quantos números são pares;
b) quantos números são ímpares;*/


    for (i = 0; i < 5; i++)
    {
        printf("Numero:");
        scanf("%d", &numero);

        if (numero % 2 == 0){
            par++;

        }else{
            impar++;
            
        }
    }

system("cls || clear");

    printf("Par:%d \n", par);
    printf("Impar:%d \n", impar);

    return 0;
}