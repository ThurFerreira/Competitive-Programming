#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b){
    return a+b;
}

int main() {
    int x, y, soma;
    scanf("%d %d", &x, &y);

    soma = sum(x,y);
    printf("SOMA = %d\n", soma);
return 0;
}