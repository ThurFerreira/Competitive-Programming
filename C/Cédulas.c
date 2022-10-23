#include <stdio.h>
#include <stdlib.h>

void notes(int valor_ini){
        int notas100, notas50, notas20, notas10, notas5, notas2, notas1 ,resto100, resto50, resto20, resto10, resto5, resto2, resto1;
    
    notas100 = valor_ini/100;
    resto100 = valor_ini%100;
    notas50 = resto100/50;
    resto50 = resto100%50;
    notas20 = resto50/20;
    resto20 = resto50%20;
    notas10 = resto20/10;
    resto10 = resto20%10;
    notas5 = resto10/5;
    resto5 = resto10%5;
    notas2 = resto5/2;
    resto2 = resto5%2;
    notas1 = resto2/1;
    resto1 = resto2%1;

     printf("%d\n",valor_ini);
    printf("%d nota(s) de R$ 100,00\n",notas100);
    printf("%d nota(s) de R$ 50,00\n",notas50);
    printf("%d nota(s) de R$ 20,00\n",notas20);
    printf("%d nota(s) de R$ 10,00\n",notas10);
    printf("%d nota(s) de R$ 5,00\n",notas5);
    printf("%d nota(s) de R$ 2,00\n",notas2);
    printf("%d nota(s) de R$ 1,00\n",notas1);
}

int main() {
    int x, notas;

    scanf("%d", &x);

    notes(x);

return 0;
}