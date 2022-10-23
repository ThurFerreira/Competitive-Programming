#include <stdio.h>
#include <stdlib.h>


int main() {
    float A, B, total;

    scanf("%f %f", &A, &B); 
    
    if(A == 1){
        total = 4*B;
        printf("Total: R$ %.2f\n",total);
    }else if(A == 2){
        total = 4.5*B;
        printf("Total: R$ %.2f\n",total);
    }else if(A == 3){
        total = 5*B;
        printf("Total: R$ %.2f\n",total);
    }else if(A == 4){
        total = 2*B;
        printf("Total: R$ %.2f\n",total);
    }else{
        total = 1.5*B;
        printf("Total: R$ %.2f\n",total);
    }

return 0;
}