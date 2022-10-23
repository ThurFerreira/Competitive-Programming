#include <stdio.h>
#include <stdlib.h>

double area(double n){
    double A;
    A = (n*n) * 3.14159;
    return A;
}
int main() {
    double n, areaCirculo;

    scanf("%lf", &n);

    areaCirculo = area(n);
    
    printf("A=%.4lf\n", areaCirculo);
return 0;
}