#include <stdio.h>
#include <stdlib.h>

int main() {
    float A,i,k = 0;

    for(i = 1; i <= 6; i++){
        scanf("%f", &A);

        if(A > 0)
            k++;     
    }

    printf("%.0f valores positivos\n", k);
return 0;
}