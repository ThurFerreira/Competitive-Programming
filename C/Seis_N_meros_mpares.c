#include <stdio.h>
#include <stdlib.h>

int main() {

    int i, A, k=0;

        scanf("%d", &A);
        if (A%2 == 0){i++;}
    
        for(i = A;i < A+12; i++){
        if(i%2 != 0){
        printf("%d\n",i);
        }
    }
return 0;
}