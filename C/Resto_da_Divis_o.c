#include <stdio.h>
#include <stdlib.h>

int main() {
        int vet[2] = {0};
        int i, var,x,y;

        scanf("%d %d", &x, &y);
        
        if(y>x){ //x como maior
            var = x;
            x = y;
            y = var;
        }
        
        if(y%2 == 0){
            y = y+1;
        }
        for(i = y; i < x; i++){
            if(i%5 == 2 || i%5 == 3){
                printf("%d\n", i);
            }
        }
return 0;
}