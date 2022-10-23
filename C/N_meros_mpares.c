#include <stdio.h>
#include <stdlib.h>

int main() {

    int i, A;

        scanf("%d", &A);
        
        for(i = 1;i <= A; i++){
        
        if(i%2 != 0)
        printf("%d\n",i);
        }   
return 0;
}