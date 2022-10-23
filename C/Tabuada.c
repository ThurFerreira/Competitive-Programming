#include <stdio.h>
#include <stdlib.h>

int main() {

        int A,i,mult;
        int k = 0;

        scanf("%d", &A);
       
        for(i = 1; i <= 10; i++){
            k++;
            mult = A*k;
            printf("%d x %d = %d\n", k, A, mult);
        }
        
return 0;
}