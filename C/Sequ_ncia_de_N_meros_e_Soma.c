#include <stdio.h>
#include <stdlib.h>

int main() {
        int i=0,x=0,y=0,k=0;
        int var = 0, sum = 0, maior;

        for(i=0; EOF; i++){
            sum = 0;
            scanf("%d %d", &x, &y);

            if(y>x){
                maior = x;
                x = y;
                y = maior;
            }

            if(x <= 0 || y <= 0){
                break;
            }else{
                for(k = y; k <= x; k++){ 
                sum = sum + k;
                printf("%d ",k);
                
                }
            }

             printf("Sum=%d\n",sum); 
             
        }
return 0;
}