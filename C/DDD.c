#include <stdio.h>
#include <stdlib.h>

int main() {
    int A;

    scanf("%d", &A);

    if(A == 61){
        printf("Brasilia\n");
    }else if(A == 71){
         printf("Salvador\n");
    }else if(A == 11){
         printf("Sao Paulo\n");
    }else if(A == 21){
         printf("Rio de Janeiro\n");
    }else if(A == 32 ){
         printf("Juiz de Fora\n");
    }else if(A == 19){
         printf("Campinas\n");
    }else if(A == 27){
         printf("Vitoria\n");
    }else if(A == 31){
         printf("Belo Horizonte\n");
    }else{
        printf("DDD nao cadastrado\n");
    }
return 0;
}