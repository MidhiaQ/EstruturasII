#include <stdio.h>
#include <stdlib.h>

int main(){
    int produto, qnt, dia;
    float preco;

    
    for(dia = 1; dia <= 7; dia++){
        printf("\nInforme o numero do produto e a quantidade: ");
        scanf("\n %i %i", &produto, &qnt);

    switch (produto)
    {
    case 1:
        preco += 3.00 * qnt;
        
        break;
    case 2:
       preco += 4.00 * qnt;
       
       break;
    case 3:
        preco += 2.80 * qnt;
        
        break;
    case 4:
        preco += 1.95 * qnt;
        
        break;
    case 5:
        preco += 5.00 * qnt;
       
        break;           
    default:
        printf("ERRO");
        
        break;
    }

}
printf("\nTotal vendido: %.2f", preco);

return 0;
}
