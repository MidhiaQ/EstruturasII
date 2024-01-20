#include <stdio.h>
#include <stdlib.h>

int main(){
int n, i, j, fat;

printf("Digite um valor:");
scanf("%i", &n);

for(i = 1; i <= n; i++){
        fat = 1; 
        for(j = i; j > 1; j--){
            fat *= j;
        }
        printf("\n %i", fat);
         }

     return 0;    
}
