#include <stdio.h>
#include <stdlib.h>

int main() {
    float A;

    scanf("%f",&A);

    if(A > 0 && A <= 400.00){
        printf("Novo salario: %.2f\n", A*1.15);
        printf("Reajuste ganho: %.2f\n", A*1.15 - A);
        printf("Em percentual: 15 %%\n" );
    }else if(A >= 400.01 && A <= 800.00){
        printf("Novo salario: %.2f\n", A*1.12);
        printf("Reajuste ganho: %.2f\n", A*1.12 - A);
        printf("Em percentual: 12 %%\n" );
    }else if(A >= 800.01 && A <= 1200.00){
        printf("Novo salario: %.2f\n", A*1.10);
        printf("Reajuste ganho: %.2f\n", A*1.10 - A);
        printf("Em percentual: 10 %%\n" );
    }else if(A >= 1200.01 && A <= 2000.00){
        printf("Novo salario: %.2f\n", A*1.07);
        printf("Reajuste ganho: %.2f\n", A*1.07 - A);
        printf("Em percentual: 7 %%\n" );
    }else if( A > 2000.00){
        printf("Novo salario: %.2f\n", A*1.04);
        printf("Reajuste ganho: %.2f\n", A*1.04 - A);
        printf("Em percentual: 4 %%\n" );
    }
return 0;
}