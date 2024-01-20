#include <stdio.h>
#include <stdlib.h>

int media(){
    int num, media = 0, quantidade;
    printf("\nInsira a quantidade de numeros: ");
    scanf("%i", &quantidade);

    int i;
    for(i = 0; i < quantidade; i++){
        printf("\nInsira um valor: ");
        scanf("%i", &num);
        media += num;
    }
    return (media/quantidade);
}


int main(){
    int m;
    m = media();
    printf("Media: %i", m);
}
