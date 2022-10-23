#include <stdio.h>
#include <stdlib.h>

int main() {
        int N, i,k;
        int vet[30] = {0};

        scanf("%d", &N);

            for(k = 0; k < ((N*3) + (N-1)); k++){
                vet[k] = k+1;
                printf("%d %d %d PUM\n", vet[k], vet[k]+1, vet[k]+2);
                k+=3;
            }

return 0;
}