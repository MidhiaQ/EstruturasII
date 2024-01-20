#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, soma = 0;

    for(i = 1; i <= 100; i++){
        if(i % 7 == 0){
            printf("%i \n", i);
       soma+=i; 
       } 
    }
    printf("Soma = %i", soma);
    return 0;
}
