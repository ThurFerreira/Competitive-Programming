#include <stdio.h>
#include <stdlib.h>

int main() {

        int i=0,k,x,y, var=0, soma=0;

        scanf("%d", &x);
        scanf("%d", &y);

        if(y > x){ //x como maior
                var = x;
                x = y;
                y = var;
            }
          
             for(i = y; i <= x; i++){
                if(i%13 != 0){
                    soma = soma + i;
                    
                }
            }
            
       printf("%d\n", soma);
        
return 0;
}