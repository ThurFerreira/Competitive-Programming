#include <stdio.h>
#include <stdlib.h>
int main() {

        int i, j=7, k, a, inicial;

        for(i = 1; i <= 9; i+=2){
            inicial = j;
            for(k = 0; k < 3; k++){
            printf("I=%d J=%d\n", i,j--);    
            }
                j = inicial+2;
        }
        
return 0;
}