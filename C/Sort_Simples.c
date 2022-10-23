#include <stdio.h>
#include <stdlib.h>

int main() {
    int A,B,C;
    scanf("%d %d %d",&A,&B,&C);
    
    if(A < B && A < C){
       // maior = A;
       printf("%d\n", A);
        if(B < C){
            printf("%d\n", B);
            printf("%d\n", C);
            //C = menor;
            //B = meio;
        }else{
            printf("%d\n", C);
            printf("%d\n", B);
           // B = menor;
            //C = meio;
        } 
    }else if(B < A && B < C){
        printf("%d\n", B);
        if(A < C){
            printf("%d\n", A);
            printf("%d\n", C);
        }else{
            printf("%d\n", C);
            printf("%d\n", A);
        }
    }else if(C < B && C < A){
        printf("%d\n", C);
        if(B < A){
            printf("%d\n",B);
            printf("%d\n",A);
        }else{
            printf("%d\n",A);
            printf("%d\n",B);
        }
    }
    printf("\n");
    printf("%d\n", A);
    printf("%d\n", B);
    printf("%d\n", C);
    
    
return 0;
}