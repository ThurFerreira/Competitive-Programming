#include <stdio.h>
#include <stdlib.h>

int main() {

    int A,i, k = 0, j=0,p=0,u=0;
    // k numero par
    // j numero impar
    // p numero positivo
    // u numero negativo

    for(i = 1;i <= 5;i++){
        scanf("%d", &A);

        if(A%2 == 0 || A == 0)
            k++;
        else if(A%3 == 0 || A%5 == 0 || A%7 == 0)
            j++;
        if(A > 0)
            p++;
        if(A < 0)
            u++;
    }

    printf("%d valor(es) par(es)\n", k);
    printf("%d valor(es) impar(es)\n", j);
    printf("%d valor(es) positivo(s)\n", p);
    printf("%d valor(es) negativo(s)\n", u);

return 0;
}