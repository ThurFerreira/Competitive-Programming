#include <stdio.h>
#include <stdlib.h>
int main() {

        int i, j=7, k;

        for(i = 1; i <= 9; i+=2){
            for(k = 0; k < 3; k++)
            printf("I=%d J=%d\n", i,j--);
            if(j==4)
                j = 7;
        }
        
return 0;
}