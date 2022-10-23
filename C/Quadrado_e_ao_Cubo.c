#include <stdio.h>
#include <stdlib.h>

int main() {
        int i,N;
        int vet[99999];
        
        scanf("%d", &N);
        
        for(i = 1; i <= N; i++){
            vet[i] = i;
            printf("%d %d %d\n", vet[i], vet[i]*vet[i], (vet[i]*vet[i])*vet[i]);
        }
return 0;
}