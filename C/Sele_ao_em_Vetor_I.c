#include <stdio.h>
#include <stdlib.h>

int main() {
        int i;
        float vet[100] = {0}, x;

        for(i = 0; i < 100; i++){
            
            scanf("%f", &vet[i]);

            if(vet[i] <= 10){
                printf("A[%d] = %.1f\n", i, vet[i]);
            }
        }
return 0;
}