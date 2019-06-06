#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

void main(){


int soma = 0 ;

for(int i = 0; i<=20;i++){

if(i %2==0){
printf("%d  ", i);
soma = soma+i;
}
}
printf("\nA soma dos numeros pares é: %d\n",soma);
}

