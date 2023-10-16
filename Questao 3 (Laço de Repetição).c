#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

/*Atividade = Escrever um algoritmo que mostre os números
pares entre 1 e 20.*/


        for (i = 1; i < 20; i++){
        if (i % 2 == 0){
            printf("Par:%d \n", i);
        }
    }

    return 0;
}