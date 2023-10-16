#include <stdio.h>
#include <stdlib.h>

int main (){

int i,numero;

   /*Atividade = Escreva um algoritmo que solicite do usuário um número e mostre
a tabuada de 1 até 10.*/

printf("Numero:");
scanf("%d",&numero);
   
for (i = 0; i <= 10; i++){
    printf("%d x %d = %d \n",numero,i,numero*i);
}

    return 0;
}
