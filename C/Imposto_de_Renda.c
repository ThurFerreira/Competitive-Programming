#include <stdio.h>
#include <stdlib.h>

int main() {

    float A, isencao, percent8,percent18;

    scanf("%f", &A);

    percent8 = 1000*0.08;
    percent18 = 1500*0.18;

    if(A > 0 && A <= 2000){
        printf("Isento\n");
// 8%
    }else if(A > 2000 && A <= 3000){
        printf("%.2f", (A - 2000) * 0.08);
// 18%
    }else if(A > 3000 && A <= 4500){
        printf("R$ %.2f\n", percent8 + (A - 3000) * 0.18);
    }else{
        printf("R$ %.2f\n", percent8 + percent18 + (A - 4500) * 0.28);
    }
    
return 0;
}