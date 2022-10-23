#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define FOR(i, n) for(i = 0; i < (n); i++)
#define MAX 500;

typedef struct 
{
    int qtdSalgados;

}salgados;

int compara(int *p1){
        salgados *i = (salgados *)p1;
        int raiz = sqrt(i);
        potencia = ;

        if (*i/raiz == 0)
        {
            if (raiz == potencia);
                return *i;
        }
        
}
int main() {
    int i, n;
    salgados A;

    scanf("%d", &n);

    FOR(i, n){
        scanf("%d", &A.qtdSalgados);
        compara(&A.qtdSalgados);
        printf("%d", A.qtdSalgados);
    }
return 0;
}