#include <stdio.h>
#include <stdlib.h>

int main() {

    int i, k = 0;
    float A, soma, media;

    for(i = 1; i <= 6; i++){
        scanf("%f", &A);

        if(A > 0){
            k++;
            soma = soma + A;
        }
    }

    media = soma/k;

    printf("%d valores positivos\n", k);
    printf("%.1f\n", media);

return 0;
}