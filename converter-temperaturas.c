#include <stdio.h>
#include <stdlib.h>

int main(){
    float F;
    

     for(int i = 30; i <= 50; i++){

    printf("%iC \t = \t %FF\n", i,  (F = i + 32));
}
return 0;
}
