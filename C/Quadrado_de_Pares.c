#include <stdio.h>
#include <stdlib.h>

int main() {
        
        int A, i, var, qrd;

        scanf("%d", &A);

        for(i = 1; i <= A; i++){
            if(i%2 == 0){
                qrd = i*i;
             printf("%d^2 = %d\n", i, qrd);
            }
            
        }

       
return 0;
}