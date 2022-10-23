#include <stdio.h>
#include <stdlib.h>

int main() {
    int x,y,i,var=0, soma=0, aux;

    scanf("%d", &y);
    scanf("%d", &x);
    
    if(x>y){ //y como maior
        aux = x;
        x = y;
        y = aux;
    }

    for(i = x+1;i < y; i++){
        
        if(i%2 != 0)
            var = var + i;
            
    }

      printf("%d\n", var);
return 0;
}
