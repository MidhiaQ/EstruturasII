#include <stdio.h>
#include <stdlib.h>


int main(){
    float hipotenusa, lado1, lado2;

printf("Informe o tamanho do lado 1:");
scanf("\n %f", &lado1);
printf("\nInforme o tamanho do lado 2:");
scanf("\n %f", &lado2);

hipotenusa = lado1*lado1 + lado2*lado2;

printf("Hipotenusa = %.2f", hipotenusa);

return 0;
}
