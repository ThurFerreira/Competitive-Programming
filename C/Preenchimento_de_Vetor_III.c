#include <stdio.h>
#include <stdlib.h>

int main() {
        int i;
        double x;
        double vet[100];

        scanf("%lf", &x);

        for(i = 0; i < 100; i++){
            printf("N[%d] = %.4lf\n", i, x);
            x = x/2;
        }

return 0;
}