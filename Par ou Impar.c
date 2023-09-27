#include <stdio.h>
#include <stdlib.H>

int main(){

int numero; 

printf("Numero:");
scanf("%d", &numero);

if (numero%2==0){
printf("Numero e Par");
}else{
printf("Numero e Impar");
}
    return 0;
}