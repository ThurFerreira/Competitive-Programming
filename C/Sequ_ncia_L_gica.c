#include <stdio.h>
#include <stdlib.h>

int main() {
        int i, N,k, v1=1,v2=1,v3=1;
        int vet[99999];

        scanf("%d",&N);
        
        for(i = 0; i <= N*2; i++){
            vet[i] = i;
            // printf("%d %d %d\n", vet[i], vet[i]*vet[i], vet[i]);

                printf("%d %d %d\n", v1, v3);    
                v3++;        
                printf("%d %d %d\n", v1, v3*2);
                v3*=2;   
                v1++;    
        }
             
return 0;
}