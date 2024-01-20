#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, j,  lado1, lado2, linha;

    printf("Informe o lado 1:");
    scanf("\n %i", &lado1);
    printf("\nInforme o lado 2:");
    scanf("\n %i", &lado2);

    for( i = 0; i <= lado1; i++){
        for(j = 0; j <= lado2; j++){
            linha = '*'*lado2;
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
