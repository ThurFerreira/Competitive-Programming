#include <stdio.h>
#include <stdlib.h>

int main() {

    int A,i, k = 0;

    for(i = 1;i <= 5;i++){
        scanf("%d", &A);

        if(A%2 == 0)
            k++;
        
    }

    printf("%d valores pares\n", k);

return 0;
}