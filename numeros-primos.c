#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, j, cont;

    for( i = 1; i <= 100; i++){
        cont = 1;
        for(j = 2; j <= i / 2; j++){
            if(i % j == 0){
                cont = 0;
            }

        }
         if(cont == 1){
        printf("\n%i", i);
    }
    }
}
