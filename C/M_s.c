#include <stdio.h>
#include <stdlib.h>

int main() {
    int A;
    int i;
    scanf("%d", &A);

    if(A == 1){
        printf("January\n");
    }else if(A == 2){
        printf("February\n");
    }else if(A == 3){
        printf("March\n");
    }else if(A == 4){
        printf("April\n");
    }else if(A == 5){
        printf("May\n");
    }else if(A == 6){
        printf("June\n");
    }else if(A == 7){
        printf("July\n");
    }else if(A == 8){
        printf("August\n");
    }else if(A == 9){
        printf("September\n");
    }else if(A == 10){
        printf("October\n");
    }else if(A == 11){
        printf("November\n");
    }else{
        printf("December\n");
    }

return 0;
}