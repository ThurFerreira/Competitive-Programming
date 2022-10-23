#include <stdio.h>
#include <stdlib.h>

int main() {

    double A, B, C, var;

    scanf("%lf %lf %lf", &A,&B,&C);

     // var vai ser o maior lado do triangulo
    if (A < B){
        var = A;
        A = B;
        B = var;
    }

    if (B < C){
        var = B;
        B = C;
        C = var;
    }

    if (A < B){
        var = A;
        A = B;
        B = var;
    }
    
    if(A >= B+C){
        printf("NAO FORMA TRIANGULO\n");
        return 0;
    }if(A*A == B*B + C*C){
        printf("TRIANGULO RETANGULO\n");
    }if(A*A > B*B + C*C){
        printf("TRIANGULO OBTUSANGULO\n");
    }if(A*A < B*B + C*C){
        printf("TRIANGULO ACUTANGULO\n"); 
    }if(A == B && A == C){
        printf("TRIANGULO EQUILATERO\n");
    }if(A == B  && A != C){
        printf("TRIANGULO ISOSCELES\n");
    }if(A == C && A != B){
        printf("TRIANGULO ISOSCELES\n");
    }if(C == B && C != A){
        printf("TRIANGULO ISOSCELES\n");
}
return 0;

}