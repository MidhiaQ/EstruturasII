#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, j,  lado1, lado2;
    char carac;

    printf("Informe o lado 1:");
    scanf("\n %i", &lado1);
    printf("\nInforme o lado 2:");
    scanf("\n %i", &lado2);
    printf("\nQual caractere deseja imprimir?");
    scanf("\n %c", &carac);
    for( i = 0; i <= lado1; i++){
        for(j = 0; j <= lado2; j++){
            printf("%c", carac);
        }
        printf("\n");
    }
    return 0;
}
