#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
   int i, num, somacubo = 0, somaquadrado = 0, soma = 0;
   printf("Digite um numero:");
   scanf("%i", &num);

   for(i = 1; i < num; i++){
    soma+= i;
    somaquadrado += pow(2,i);
    somacubo += pow(3,i);
  } 
printf("Soma = %i \n", soma);
printf("\nSoma dos quadrados = %i", somaquadrado);
printf("\nSoma dos cubos = %i", somacubo);

return 0;
}
