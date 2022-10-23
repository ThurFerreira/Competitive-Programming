#include <stdio.h>
#include <stdlib.h>

int main() {

        int A, i, in=0, out=0,num;
        

        scanf("%d", &A);

        for(i = 0;i < A; i++){
            scanf("%d", &num);
            if(num >= 10 && num <= 20){
                in++;
            }else 
                out++;              
        }
            printf("%d in\n", in);
            printf("%d out\n", out);

return 0;
}