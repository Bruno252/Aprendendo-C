#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
 
int primeiroNumero,segundoNumero,terceiroNumero,maiorNumero,menorNumero;

printf("Primeiro Numero:");
scanf("%d",&primeiroNumero);

printf("Segundo Numero:");
scanf("%d",&segundoNumero);

printf("Terceiro Numero:");
scanf("%d",&terceiroNumero);

if (primeiroNumero>segundoNumero && primeiroNumero>terceiroNumero){
     maiorNumero=primeiroNumero;
}else{
     menorNumero=primeiroNumero;   
}

if(segundoNumero>primeiroNumero && segundoNumero>terceiroNumero){
    maiorNumero=segundoNumero;
  }else{
    menorNumero=segundoNumero;
  }

if(terceiroNumero>primeiroNumero && terceiroNumero>segundoNumero){
    maiorNumero=terceiroNumero;
}else{
    menorNumero=terceiroNumero;
}



printf("Menor Numero:%d",menorNumero);
printf("Maior Numero:%d \n",maiorNumero);

    return 0;
}
