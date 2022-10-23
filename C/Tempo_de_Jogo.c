#include <stdio.h>
#include <stdlib.h>

int main() {
        int A,B, horas, min;
        int dia = 24;

        scanf("%d %d", &A,&B);
    
        if(A == B){
            printf("O JOGO DUROU 24 HORA(S)\n");
        }else if(B > A){
            horas = B - A;
            printf("O JOGO DUROU %d HORA(S)\n", horas);
        }else{
            horas = (24 - A) + B;
            printf("O JOGO DUROU %d HORA(S)\n", horas);
        }
return 0;
}