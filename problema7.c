#include <stdlib.h>
#include<stdio.h>

int main(){
     int qnt[5], i, j;
    i = 0;
    
    for (j = 0; j < 5; j++)
    {
        printf("Insira um numero: ");
        scanf("\n %i", &qnt[j]);

        if(qnt[j] < 1 || qnt[j] > 30){
            printf("Erro");
            j--;
        break;
       } 
        
    }
    
    for (j = 0; j < 5; j++)
    {
    
       for (i = 0; i < qnt[j]; i++)
        {
            printf(" * ");
        }
        printf("\n");
    }
   return 0;     
}
