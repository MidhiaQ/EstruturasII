#include <stdio.h>
#include <stdlib.h>

int main(){
    int dia, mes, ano, dc;

    printf("Dia:");
    scanf("\n %i", &dia);

    printf("\nMes:");
    scanf("\n %i", &mes);

    printf("\nAno:");
    scanf("\n %i", &ano);

    dc = (dia + ((mes + 1)*13/5) + ano%100 + (ano%100/4) + (ano/400) + 5 * (ano/100)) % 7;

    switch (dc){
    case 1:
    printf("\nDomingo");    
    break;
    case 2:
    printf("\nSegunda");
    break;
    case 3:
    printf("\nTerça");    
    break;
    case 4:
    printf("\nQuarta");    
    break;
    case 5:
    printf("\nQuinta");
    break;
    case 6:
    printf("\nSexta");    
    break;
    case 7:
    printf("\nSabado");    
    break;
    default:
    break;
    }

return 0;
}
