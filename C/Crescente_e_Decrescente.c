#include <stdio.h>
#include <stdlib.h>

int main() {
        int i,k,var,x,y;

        for(i=0; i < 10;i++){
            scanf("%d", &x);
            scanf("%d", &y);

            if(x == y)
                break;
                
            if(x > y){ //x como maior
                printf("Decrescente\n");
                
            }else{
                printf("Crescente\n");
            }
            

        }
return 0;
}